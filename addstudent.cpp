#include "addstudent.h"
#include "ui_addstudent.h"
#include "string"

AddStudent::AddStudent(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddStudent)
{
    ui->setupUi(this);
    ui->cmbMajor->setEditable(false);
    // ui->cmbMajor->lineEdit()->setPlaceholderText("Please Choose Major");
    ui->cmbMajor->setPlaceholderText("Please Enter Option");
    openDatabase();
    QSqlQuery query("SELECT major_name from majors");
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        qDebug()<<"error";
    }
    else
    {
        // qDebug()<<"sfds";
        while(query.next())
        {
            QString item=query.value(0).toString();
            ui->cmbMajor->addItem(item);
        }
    }
    closeDatabase();

}

AddStudent::~AddStudent()
{
    delete ui;
}



void AddStudent::openDatabase()
{
    if (!database.isOpen())
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("E:/Courses/QT/UniversityManagementSystem/UniversityManagementSystem.db");
        if (QFile::exists("E:/Courses/QT/UniversityManagementSystem/UniversityManagementSystem.db"))
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

void AddStudent::closeDatabase()
{
    if (database.isOpen())
    {
        database.close();
        qDebug()<<"Database is closed succefully";
    }
}

void AddStudent::on_pushButton_clicked()
{
    if(ui->txtFName->text().isEmpty()||ui->txtLName->text().isEmpty()||ui->txtPass->text().isEmpty())
    {
        ui->lblCheck_2->setStyleSheet("color:red;");
        ui->lblCheck_2->setText("Please Enter the data Correctly");
        return;
    }
    int u_major=ui->cmbMajor->currentText().toInt();
    QString u_FName=ui->txtFName->text();
    QString u_LName=ui->txtLName->text();
    QString u_Pass=ui->txtPass->text();
    // qDebug()<<u_major;
    openDatabase();
    QSqlQuery query("insert into Students(FirstName,LastName,Password,Major_id,CH) values(?,?,?,?,?)");
    // query.addBindValue(1180001);
    query.addBindValue(u_FName);
    query.addBindValue(u_LName);
    query.addBindValue(u_Pass);
    query.addBindValue(u_major);
    query.addBindValue(0);
    if (!query.exec())
    {
        qDebug() << query.lastError();
    }
    else
    {
        qDebug() << "Record added successfully";
        ui->lblCheck_2->setStyleSheet("color:green;");
        ui->lblCheck_2->setText("Data added Succesfully");
        clearData();
    }

    closeDatabase();

}

void AddStudent::clearData()
{
    ui->txtFName->clear();
    ui->txtPass->clear();
    ui->txtLName->clear();
}

void AddStudent::on_pushButton_2_clicked()
{
    clearData();
    // ui->cmbMajor->();
    ui->cmbMajor->setPlaceholderText("Please Enter Option");

    ui->lblCheck_2->clear();
}

