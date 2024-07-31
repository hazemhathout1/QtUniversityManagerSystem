/********************************************************************************
** Form generated from reading UI file 'adminuniversitysystem.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINUNIVERSITYSYSTEM_H
#define UI_ADMINUNIVERSITYSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminUniversitySystem
{
public:
    QPushButton *btnAddStd;
    QPushButton *btnUpdateData;
    QPushButton *btnUpdateData_2;

    void setupUi(QDialog *AdminUniversitySystem)
    {
        if (AdminUniversitySystem->objectName().isEmpty())
            AdminUniversitySystem->setObjectName("AdminUniversitySystem");
        AdminUniversitySystem->resize(516, 324);
        btnAddStd = new QPushButton(AdminUniversitySystem);
        btnAddStd->setObjectName("btnAddStd");
        btnAddStd->setGeometry(QRect(60, 120, 91, 71));
        btnUpdateData = new QPushButton(AdminUniversitySystem);
        btnUpdateData->setObjectName("btnUpdateData");
        btnUpdateData->setGeometry(QRect(210, 120, 91, 71));
        btnUpdateData_2 = new QPushButton(AdminUniversitySystem);
        btnUpdateData_2->setObjectName("btnUpdateData_2");
        btnUpdateData_2->setGeometry(QRect(360, 120, 91, 71));

        retranslateUi(AdminUniversitySystem);

        QMetaObject::connectSlotsByName(AdminUniversitySystem);
    } // setupUi

    void retranslateUi(QDialog *AdminUniversitySystem)
    {
        AdminUniversitySystem->setWindowTitle(QCoreApplication::translate("AdminUniversitySystem", "Admin", nullptr));
        btnAddStd->setText(QCoreApplication::translate("AdminUniversitySystem", "Add Student", nullptr));
        btnUpdateData->setText(QCoreApplication::translate("AdminUniversitySystem", "Update Data", nullptr));
        btnUpdateData_2->setText(QCoreApplication::translate("AdminUniversitySystem", "Show Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminUniversitySystem: public Ui_AdminUniversitySystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINUNIVERSITYSYSTEM_H
