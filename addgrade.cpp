#include "addgrade.h"
#include "ui_addgrade.h"

AddGrade::AddGrade(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddGrade)
{
    ui->setupUi(this);
    ui->txtEnterID->setPlaceholderText("Please Enter Student ID");
    ui->comboBox->setPlaceholderText("Please Choose course");
    ui->pushButton_2->setEnabled(false);
    ui->comboBox->setEnabled(false);

    gradeMap={
        {"A+",4.0},
        {"A",4.0},
        {"A-",3.7},
        {"B+",3.3},
        {"B",3.0},
        {"B-",2.7},
        {"C+",2.3},
        {"C",2.0},
        {"C-",1.7},
        {"D+",1.3},
        {"D",1.0},
        {"F",0},
};
}

AddGrade::~AddGrade()
{
    delete ui;
}

void AddGrade::on_pushButton_clicked()
{
    int u_id;
    bool dbCheck;
    QString dbFName,dbLName,dbCH,dbMajorName,dbMajorID;
    ui->lblCheck->clear();
    ui->txtGrade->setPlaceholderText("Please Enter Grade");
    if(ui->txtEnterID->text().isEmpty())
    {
        ui->lblCheck->setStyleSheet("color:red;");
        ui->lblCheck->setText("Please Enter an ID");
        return;
    }
    ui->comboBox->setEnabled(true);
    u_id=ui->txtEnterID->text().toInt();
    openDatabase();
    QSqlQuery query("select EXISTS(SELECT * FROM Students WHERE id=?);");
    query.addBindValue(u_id);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        closeDatabase();
        return;
    }
    if(query.next())dbCheck=query.value(0).toBool();
    qDebug()<<dbCheck;
    if(!dbCheck)
    {
        ui->lblCheck->setStyleSheet("color:red;");
        ui->lblCheck->setText("Student ID Not Exists");
        closeDatabase();
        return;
    }

    query.prepare("select FirstName,LastName,major_id,CH,major_name from students where id=?");
    query.addBindValue(u_id);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        closeDatabase();
        return;
    }
    if(query.next())
    {
        dbFName=query.value(0).toString();
        dbLName=query.value(1).toString();
        dbMajorID=query.value(2).toString();
        dbCH=query.value(3).toString();
        dbMajorName=query.value(4).toString();
    }

    ui->txtFName->setText(dbFName);
    ui->txtLName->setText(dbLName);
    ui->txtMajor->setText(dbMajorName);
    ui->txtCH->setText(dbCH);

    query.prepare("SELECT c.course_name,c.course_id,c.credits FROM Courses c LEFT JOIN Enrollments e ON c.course_id = e.courseID AND e.studentID = ? WHERE e.isenroll=1  and c.major_id=?;");
    query.addBindValue(u_id);
    query.addBindValue(dbMajorID);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        closeDatabase();
        return;
    }
    while(query.next())
    {
        QString item=query.value(0).toString();
        ui->comboBox->addItem(item);
    }
    ui->comboBox->setCurrentIndex(-1);

    ui->pushButton_2->setEnabled(true);
    closeDatabase();




}

QString AddGrade::setGrade(int score)
{
    if(score>97)return "A+";
    if(score>94)return "A";
    if(score>90)return "A-";
    if(score>87)return "B+";
    if(score>84)return "B";
    if(score>80)return "B-";
    if(score>77)return "C+";
    if(score>74)return "C";
    if(score>70)return "C-";
    if(score>67)return "D+";
    if(score>64)return "D";
    else return "F";
}


double AddGrade::getGradePoint(const QString &grade)
{
    return gradeMap.value(grade,-1);
}


void AddGrade::refreshPage(QString u_id,QString MajorID)
{
    ui->comboBox->clear();
    QSqlQuery query;
    query.prepare("SELECT c.course_name,c.course_id,c.credits FROM Courses c LEFT JOIN Enrollments e ON c.course_id = e.courseID AND e.studentID = ? WHERE e.isenroll=1  and c.major_id=?;");
    query.addBindValue(u_id);
    query.addBindValue(MajorID);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        closeDatabase();
        return;
    }
    while(query.next())
    {
        QString item=query.value(0).toString();
        ui->comboBox->addItem(item);
    }
    ui->comboBox->setCurrentIndex(-1);
    ui->txtGrade->clear();
    ui->txtGrade->setPlaceholderText("Please Enter Grade");

}


void AddGrade::on_pushButton_2_clicked()
{

    ui->lblCheckGrade->clear();
    if(ui->comboBox->currentIndex()==-1)
    {
        ui->lblCheckGrade->setStyleSheet("color:red;");
        ui->lblCheckGrade->setText("Please Choose Course");
        return;
    }
    if(ui->txtGrade->text().isEmpty())
    {
        ui->lblCheckGrade->setStyleSheet("color:red;");
        ui->lblCheckGrade->setText("Please Enter Grade");
        return;
    }
    if(ui->txtGrade->text().toInt()>100 || ui->txtGrade->text().toInt()<0)
    {
        ui->lblCheckGrade->setStyleSheet("color:red;");
        ui->lblCheckGrade->setText("Please Enter Grade Correctly");
        return;
    }
    int u_score=ui->txtGrade->text().toInt();
    // QString
    QString u_grade=setGrade(u_score),majorID;
    double GPA=getGradePoint(u_grade);
    qDebug()<<GPA;

    QString courseName=ui->comboBox->currentText(),majorName=ui->txtMajor->text(),u_ID=ui->txtEnterID->text();
    qDebug()<<courseName;
    openDatabase();
    QSqlQuery query("select major_id from majors where major_name=?");
    query.addBindValue(majorName);
    if (!query.exec()) {
        qDebug() << "SQL Error:" << query.lastError();
        closeDatabase();
        return;
    }
    if(query.next())majorID=query.value(0).toString();
    query.prepare("UPDATE Enrollments "
                  "SET grade = :grade, isEnroll = 0,score=:score "
                  "WHERE courseID = ("
                  "    SELECT course_id FROM Courses "
                  "    WHERE course_name = :courseName "
                  "    AND major_id = :majorID"
                  ") "
                  "AND studentID = :ID");

    query.bindValue(":grade", u_grade);
    query.bindValue(":score",GPA);
    query.bindValue(":courseName", courseName);
    query.bindValue(":majorID", majorID);
    query.bindValue(":ID", u_ID);

    if (!query.exec()) {
        qDebug() << "SQL Error:" << query.lastError();
        closeDatabase();
        return;
    }

    ui->lblCheckGrade->setStyleSheet("color:green;");
    ui->lblCheckGrade->setText("Grade Added Succesfully");
    refreshPage(u_ID,majorID);
    //Make the GPA of the students




    closeDatabase();
}

