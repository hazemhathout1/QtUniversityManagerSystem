#include "loginform.h"
#include "ui_loginform.h"

LoginForm::LoginForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginForm)
{
    ui->setupUi(this);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_tabWidget_currentChanged(int index)
{

}

