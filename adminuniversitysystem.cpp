#include "adminuniversitysystem.h"
#include "ui_adminuniversitysystem.h"

AdminUniversitySystem::AdminUniversitySystem(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminUniversitySystem)
{
    ui->setupUi(this);
    ptrAddStudent=new AddStudent();
    ptrShowData=new ShowData();
    ptrSearchStudent=new SearchStudent();
}

AdminUniversitySystem::~AdminUniversitySystem()
{
    delete ui;
    delete ptrAddStudent;
    delete ptrSearchStudent;
    delete ptrShowData;
}

void AdminUniversitySystem::on_btnAddStd_clicked()
{
    // this->close();
    ptrAddStudent->show();

}


void AdminUniversitySystem::on_btnUpdateData_2_clicked()
{
    ptrShowData->show();
}


void AdminUniversitySystem::on_btnUpdateData_3_clicked()
{
    ptrSearchStudent->show();
}

