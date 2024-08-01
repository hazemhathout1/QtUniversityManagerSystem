#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H

#include <QDialog>
#include <QComboBox>
#include <QMap>

#include "databaseheader.h"

namespace Ui {
class AddStudent;
}

class AddStudent : public QDialog
{
    Q_OBJECT

public:
    explicit AddStudent(QWidget *parent = nullptr);
    ~AddStudent();
    QString majors[3]={"EEE","CCE","CEM"};
    void openDatabase();
    void closeDatabase();
    QSqlDatabase database;
    void clearData();

    QMap<QString, int> initializeMajorMap() {
        QMap<QString, int> majorMap;
        majorMap["EEE"] = 1;
        majorMap["CCE"] = 2;
        majorMap["CEM"] = 3;
        return majorMap;
    }


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddStudent *ui;
};

#endif // ADDSTUDENT_H
