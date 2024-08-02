#include "showdata.h"
#include "ui_showdata.h"

ShowData::ShowData(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShowData)
{
    ui->setupUi(this);
    ui->cmbMajor->setEditable(false);
    // ui->cmbMajor->lineEdit()->setPlaceholderText("Please Choose Major");
    // ui->cmbMajor->setPlaceholderText("Please Enter Option");
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

ShowData::~ShowData()
{
    delete ui;
    delete model;
}

void ShowData::on_pushButton_clicked()
{
    if(ui->txtEnterCode->text().isEmpty())
    {
        ui->lblcheck->setStyleSheet("color:red");
        ui->lblcheck->setText("Please Enter ID");
        return;
    }
    openDatabase();
    QString u_ID=ui->txtEnterCode->text();
    QSqlQuery query;
    query.prepare("select * from Students where ID=?");
    query.addBindValue(u_ID);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        ui->lblcheck->setStyleSheet("color:red");
        ui->lblcheck->setText("Data Fetching got error");
        return;
    }
    if(model==NULL)
    {
        model=new QSqlQueryModel();
    }
    model->setQuery(std::move(query));
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,120);
    ui->tableView->setColumnWidth(1,70);
    ui->tableView->setColumnWidth(2,70);
    ui->tableView->setColumnWidth(3,70);
    ui->tableView->setColumnWidth(4,70);
    ui->tableView->setColumnWidth(5,70);
    ui->tableView->setColumnWidth(3,70);
    // database.close(std::move(query));
    closeDatabase();


}


void ShowData::on_pushButton_3_clicked()
{
    QMap<QString, int> majorMap = initializeMajorMap();
    int u_major=majorMap[ui->cmbMajor->currentText()];

    openDatabase();
    if(ui->cmbMajor->currentIndex()==-1)
    {
        // query.prepare("select * from Students");
        QSqlQuery query("SELECT * FROM Students");
        if(!query.exec())
        {
            qDebug()<<query.lastError();
            ui->lblcheck->setStyleSheet("color:red");
            ui->lblcheck->setText("Data Fetching got error");
            closeDatabase();
            return;
        }
        if(model==NULL)
        {
            model=new QSqlQueryModel();
        }
        model->setQuery(std::move(query));
        ui->tableView->setModel(model);
        ui->tableView->setColumnWidth(0,120);
        ui->tableView->setColumnWidth(1,70);
        ui->tableView->setColumnWidth(2,70);
        ui->tableView->setColumnWidth(3,70);
        ui->tableView->setColumnWidth(4,70);
        ui->tableView->setColumnWidth(5,70);
        ui->tableView->setColumnWidth(3,70);
        return;
        // database.close(std::move(query));
    }
    else
    {
        QSqlQuery query("select * from Students where major_id=?");
        query.addBindValue(u_major);
        if(!query.exec())
        {
            qDebug()<<query.lastError();
            ui->lblcheck->setStyleSheet("color:red");
            ui->lblcheck->setText("Data Fetching got error");
            closeDatabase();
            return;
        }
        if(model==NULL)
        {
            model=new QSqlQueryModel();
        }
        model->setQuery(std::move(query));
        ui->tableView->setModel(model);
        ui->tableView->setColumnWidth(0,120);
        ui->tableView->setColumnWidth(1,70);
        ui->tableView->setColumnWidth(2,70);
        ui->tableView->setColumnWidth(3,70);
        ui->tableView->setColumnWidth(4,70);
        ui->tableView->setColumnWidth(5,70);
        ui->tableView->setColumnWidth(3,70);
        closeDatabase();
        return;
    }


}

