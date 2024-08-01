#include "showdata.h"
#include "ui_showdata.h"

ShowData::ShowData(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShowData)
{
    ui->setupUi(this);
}

ShowData::~ShowData()
{
    delete ui;
}
