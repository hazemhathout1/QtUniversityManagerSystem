#ifndef ADDGRADE_H
#define ADDGRADE_H

#include <QDialog>
#include <QMap>
#include "databaseheader.h"

namespace Ui {
class AddGrade;
}

class AddGrade : public QDialog
{
    Q_OBJECT

public:
    explicit AddGrade(QWidget *parent = nullptr);
    ~AddGrade();
    QSqlDatabase database;
    QMap<QString,double> gradeMap;
    void refreshPage(QString u_id,QString MajorID);

    void openDatabase()
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

    void closeDatabase()
    {
        if (database.isOpen())
        {
            database.close();
            qDebug()<<"Database is closed succefully";
        }
    }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    QString setGrade(int score);

    double getGradePoint(const QString& grade);



private:
    Ui::AddGrade *ui;

};

#endif // ADDGRADE_H
