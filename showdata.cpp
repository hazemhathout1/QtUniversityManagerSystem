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
    // clearData();
    ui->lblcheck->clear();

    if(ui->txtEnterCode->text().isEmpty())
    {
        ui->lblcheck->setStyleSheet("color:red");
        ui->lblcheck->setText("Please Enter ID");
        return;
    }
    bool dbCheck;
    //clearData();
    openDatabase();
    QString u_ID=ui->txtEnterCode->text();
    QSqlQuery query("SELECT  EXISTS(SELECT * from Students where id=?)");
    query.addBindValue(u_ID);
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        closeDatabase();
        return;
    }
    if(query.next())dbCheck=query.value(0).toBool();
    if(!dbCheck)
    {
        ui->lblcheck->setStyleSheet("color:red;");
        ui->lblcheck->setText("Student ID does not Exists");
        clearData();
        closeDatabase();
        return;
    }
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
    // ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,70);
    ui->tableView->setColumnWidth(1,70);
    ui->tableView->setColumnWidth(2,70);
    ui->tableView->setColumnWidth(3,70);
    ui->tableView->setColumnWidth(4,70);
    ui->tableView->setColumnWidth(5,70);
    ui->tableView->setColumnWidth(6,70);
    ui->tableView->setColumnWidth(7,50);
    // database.close(std::move(query));
    ui->txtEnterCode->clear();
    closeDatabase();


}


void ShowData::on_pushButton_3_clicked()
{
    QMap<QString, int> majorMap = initializeMajorMap();
    int u_major=majorMap[ui->cmbMajor->currentText()];
    clearData();

    if(ui->cmbMajor->currentIndex()==-1)
    {
        openDatabase();

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
        ui->tableView->setColumnWidth(0,70);
        ui->tableView->setColumnWidth(1,70);
        ui->tableView->setColumnWidth(2,70);
        ui->tableView->setColumnWidth(3,70);
        ui->tableView->setColumnWidth(4,70);
        ui->tableView->setColumnWidth(5,70);
        ui->tableView->setColumnWidth(6,70);
        ui->tableView->setColumnWidth(7,50);
        closeDatabase();
        return;
        // database.close(std::move(query));
    }
    else
    {
        clearData();
        openDatabase();
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
        ui->tableView->setColumnWidth(0,90);
        ui->tableView->setColumnWidth(1,70);
        ui->tableView->setColumnWidth(2,70);
        ui->tableView->setColumnWidth(3,70);
        ui->tableView->setColumnWidth(4,70);
        ui->tableView->setColumnWidth(5,70);
        ui->tableView->setColumnWidth(6,70);
        ui->tableView->setColumnWidth(7,50);
        closeDatabase();
         ui->cmbMajor->setCurrentIndex(-1);
        return;
    }
}
void ShowData::clearData()
{
    // ui->tableView->reset();
    // ui->tableView->setModel(NULL);>
    ui->tableView->setModel(nullptr);
    ui->txtEnterCode->clear();
}

void ShowData::closeEvent(QCloseEvent *event)
{
    qDebug()<<"close event";
    clearData();
    QDialog::closeEvent(event);
}




