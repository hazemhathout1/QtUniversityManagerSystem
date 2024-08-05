#ifndef SHOWDATA_H
#define SHOWDATA_H

#include <QDialog>
#include "databaseheader.h"
#include <QMap>
#include <QComboBox>

namespace Ui {
class ShowData;
}

class ShowData : public QDialog
{
    Q_OBJECT

public:
    explicit ShowData(QWidget *parent = nullptr);
    ~ShowData();
    QSqlDatabase database;
    QString majors[3]={"EEE","CCE","CEM"};
    QMap<QString, int> initializeMajorMap() {
        QMap<QString, int> majorMap;
        majorMap["EEE"] = 1;
        majorMap["CCE"] = 2;
        majorMap["CEM"] = 3;
        return majorMap;
    }
    void clearData();


    void openDatabase()
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

    void closeDatabase()
    {
        if (database.isOpen())
        {
            database.close();
            qDebug()<<"Database is closed succefully";
        }
    }
protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ShowData *ui;
    QSqlQueryModel *model;
};

#endif // SHOWDATA_H
