#include "adminuniversitysystem.h"
#include "ui_adminuniversitysystem.h"

AdminUniversitySystem::AdminUniversitySystem(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminUniversitySystem)
{
    ui->setupUi(this);
    ptrAddStudent=new AddStudent();
}

AdminUniversitySystem::~AdminUniversitySystem()
{
    delete ui;
}

void AdminUniversitySystem::on_btnAddStd_clicked()
{
    this->close();
    ptrAddStudent->show();

}

