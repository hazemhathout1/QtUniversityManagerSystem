#ifndef ADMINUNIVERSITYSYSTEM_H
#define ADMINUNIVERSITYSYSTEM_H

#include <QDialog>
#include "addstudent.h"

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

private:
    Ui::AdminUniversitySystem *ui;
    AddStudent *ptrAddStudent;
};

#endif // ADMINUNIVERSITYSYSTEM_H
