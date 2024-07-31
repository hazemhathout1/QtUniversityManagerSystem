#include "loginform.h"
#include "ui_loginform.h"

LoginForm::LoginForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    ptrAdmUniSys=new AdminUniversitySystem();
}

LoginForm::~LoginForm()
{
    delete ui;
    delete ptrAdmUniSys;
}

void LoginForm::openDatabase()
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

void LoginForm::closeDatabase()
{
    if (database.isOpen())
    {
        database.close();
        qDebug()<<"Database is closed succefully";
    }
}

void LoginForm::on_btnSIgnIn_clicked()
{
    if((ui->txtAdmin->text().isEmpty()) || (ui->txtPassword->text().isEmpty()))
    {
        ui->lblCheck->setText("Please Enter ID and Password");
        return;
    }
    bool flag = false;
    int u_id = ui->txtAdmin->text().toInt();
    QString u_pass = ui->txtPassword->text();
    openDatabase();
    QSqlQuery query("select ID, password from Admin");
    while(query.next())
    {
        int id=query.value(0).toInt();
        QString ps=query.value(1).toString();
        if(id==u_id && u_pass==ps)
        {
            flag=true;
            // ptrAdmUniSys->show();
            break;
        }
        else
        {
            // qDebug()<<"Wrong ID or Password";
            ui->lblCheck->setText("Wrong ID or Password");
            break;
        }
    }
    closeDatabase();
    if(flag)
    {
        this->close();
        ptrAdmUniSys->show();
    }
}



