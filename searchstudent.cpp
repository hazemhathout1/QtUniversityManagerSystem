#include "searchstudent.h"
#include "ui_searchstudent.h"

SearchStudent::SearchStudent(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchStudent)
{
    ui->setupUi(this);
    ui->txtEnterID->setPlaceholderText("Enter Student ID");
    ui->pushButton_2->setEnabled(false);
    ui->comboBox->setEditable(false);
    ui->comboBox->setPlaceholderText("Please Enter a course");
}


SearchStudent::~SearchStudent()
{
    delete ui;
    delete model;
}


void SearchStudent::openDatabase()
{
    if (!database.isOpen())
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("K:/C++/QT/QtUniversityManagerSystem/UniversityManagementSystem.db");
        if (QFile::exists("K:/C++/QT/QtUniversityManagerSystem/UniversityManagementSystem.db"))
        {
            qDebug() << "Database exists";
        }
        else
        {
            qDebug() << "Database does not exist";
            return;
        }
        if (!database.open())
        {
            qDebug() << "Database is not open";
            return;
        }
        else
        {
            qDebug() << "Database is opened successfully";
        }
    }
}

void SearchStudent::closeDatabase()
{
    if (database.isOpen())
    {
        database.close();
        qDebug()<<"Database is closed succefully";
    }
}

void SearchStudent::on_pushButton_clicked()
{
    ui->comboBox->clear();
    bool Check;
    QString major_id;
    if(ui->txtEnterID->text().isEmpty())
    {
        ui->lblCheck->setStyleSheet("color:red;");
        ui->lblCheck->setText("Please Enter Code");
        return;
    }
    openDatabase();
    QString u_id=ui->txtEnterID->text();
    QSqlQuery query;
    query.prepare("SELECT EXISTS(SELECT 0 FROM Students WHERE id=?)");
    query.addBindValue(u_id);
    qDebug()<<query.lastQuery();
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        ui->lblCheck->setStyleSheet("color:red;");
        ui->lblCheck->setText("Error in Fetching Data");
        return;
    }

    if(query.next()){Check=query.value(0).toBool();}
       // qDebug()<<Check;
    if(!Check)
    {
        ui->lblCheck->setStyleSheet("color:red;");
        ui->lblCheck->setText("This ID is not Available");
        return;
    }
    else
    {
        query.prepare("select * from students where id=?");
        query.addBindValue(u_id);
        if(!query.exec())
        {
            qDebug()<<query.lastError();
            return;
        }
        // if(query.next())
        if(query.next())
        {
            major_id=query.value(4).toString();
            // ui->lblCheck->setText("ID Found");
            ui->txtFName->setText(query.value(1).toString());
            ui->txtLName->setText(query.value(2).toString());
            ui->txtMajor->setText(query.value(6).toString());
            ui->txtCH->setText(query.value(5).toString());
            ui->pushButton_2->setEnabled(true);
            query.clear();
            qDebug()<<"Test";
            query.prepare("select * from courses where major_id=?");
            query.addBindValue(major_id);
            if(!query.exec())
            {
                qDebug()<<query.lastError();
                return;
            }
            qDebug()<<"The major id is:"<<major_id;
            while(query.next())
            {
                QString item=query.value(1).toString();
                qDebug()<<item<<"\n";
                ui->comboBox->addItem(item);
            }
            ui->comboBox->clearEditText();
            ui->comboBox->setEditable(false);
            // ui->comboBox->lineEdit()->setPlaceholderText("Please Enter a course");
            // ui->comboBox->insertItem(0,"Please Enter a course");
            // ui->comboBox->setCurrentIndex(0);
        }
    }



    closeDatabase();
}


void SearchStudent::on_pushButton_2_clicked()
{
    int ui_ch=ui->txtCH->text().toInt();
    bool check;
    QString majorName=ui->txtMajor->text();
    int dbCourseCredit,dbCourseID,dbMajorID,dbCHSum,dbEnrollCount;
    if(ui->comboBox->currentIndex()==-1)
    {
        ui->lblCheckCMB->setStyleSheet("color:red;");
        ui->lblCheckCMB->setText("Please Choose a Course");
        return;
    }
    QString CouseName=ui->comboBox->currentText();
    int StudentID=ui->txtEnterID->text().toInt();
    qDebug()<<CouseName;
    qDebug()<<StudentID;
    openDatabase();
    QSqlQuery query("select * from courses where course_name=? and major_id=(select major_id from majors where major_name=?)");
    query.addBindValue(CouseName);
    query.addBindValue(majorName);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        closeDatabase();
        return;
    }
    if(query.next())
    {
        dbCourseID=query.value(0).toInt();
        dbCourseCredit=query.value(2).toInt();
        dbMajorID=query.value(3).toInt();
    }
    query.prepare("SELECT sum(Credit),count(isEnroll) FROM  Enrollments WHERE studentID=?");
    query.addBindValue(StudentID);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        closeDatabase();
        return;
    }
    else
    {
        if(query.next())
        {
            dbCHSum=query.value(0).toInt();
            dbEnrollCount=query.value(1).toInt();
        }
        qDebug()<<"Credit:"<<dbEnrollCount<<" "<<dbCHSum;
        if(dbCHSum+dbCourseCredit>20 || dbEnrollCount>7)
        {
            ui->lblCheckCMB->setStyleSheet("color:red;");
            ui->lblCheckCMB->setText("Error, Student Reach Maximum Number of Credits This semester");
            closeDatabase();
            return;
        }
    }
    query.prepare("SELECT EXISTS(select CourseID FROM Enrollments WHERE studentID=? AND courseID=?);");
    query.addBindValue(StudentID);
    query.addBindValue(dbCourseID);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
    }
    if(query.next())check=query.value(0).toBool();
    qDebug()<<check;
    if(check)
    {
        ui->lblCheckCMB->setStyleSheet("color:red;");
        ui->lblCheckCMB->setText("Course is already Registered");
        closeDatabase();
        return;
    }
    qDebug()<<"test:"<<dbCourseCredit;
    query.prepare("insert into Enrollments(courseID,studentID,majorID,isEnroll,credit) values(?,?,?,?,?);");
    query.addBindValue(dbCourseID);
    query.addBindValue(StudentID);
    query.addBindValue(dbMajorID);
    query.addBindValue(1);
    query.addBindValue(dbCourseCredit);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        ui->lblCheckCMB->setStyleSheet("color:red;");
        ui->lblCheckCMB->setText("Error in Fetching");
        closeDatabase();
        return;
    }
    else
    {
        ui->lblCheckCMB->setStyleSheet("color:green;");
        ui->lblCheckCMB->setText("Course Registered Succefully");
    }
    query.prepare("UPDATE Students SET CH=CH+? WHERE ID=?;");
    query.addBindValue(dbCourseCredit);
    query.addBindValue(StudentID);
    if(!query.exec())
    {
       qDebug()<<query.lastError();
    }
    query.prepare("select CH from students where ID=?");
    query.addBindValue(StudentID);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
    }
    QString chTot;
    if(query.next())ui->txtCH->setText(query.value(0).toString());


    closeDatabase();
}

void SearchStudent::ClearData()
{
    ui->txtFName->clear();
    ui->txtLName->clear();
    ui->txtEnterID->clear();
    ui->txtCH->clear();
    ui->txtMajor->clear();
    // ui->comboBox->setCurrentIndex(-1);
    ui->comboBox->clear();
    ui->lblCheck->clear();
    ui->lblCheckCMB->clear();
    ui->comboBox->setEditable(false);
    ui->comboBox->setPlaceholderText("Please Enter a course");
    ui->txtEnterID->setPlaceholderText("Enter Student ID");
}
void SearchStudent::closeEvent(QCloseEvent *event)
{
    qDebug()<<"close event";
    ClearData();
    QDialog::closeEvent(event);
}
