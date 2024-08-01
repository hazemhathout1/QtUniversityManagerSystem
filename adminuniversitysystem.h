#ifndef ADMINUNIVERSITYSYSTEM_H
#define ADMINUNIVERSITYSYSTEM_H

#include <QDialog>
#include "addstudent.h"
#include "showdata.h"

namespace Ui {
class AdminUniversitySystem;
}

class AdminUniversitySystem : public QDialog
{
    Q_OBJECT

public:
    explicit AdminUniversitySystem(QWidget *parent = nullptr);
    ~AdminUniversitySystem();

private slots:
    void on_btnAddStd_clicked();

    void on_btnUpdateData_2_clicked();

private:
    Ui::AdminUniversitySystem *ui;
    AddStudent *ptrAddStudent;
    ShowData *ptrShowData;
};

#endif // ADMINUNIVERSITYSYSTEM_H
