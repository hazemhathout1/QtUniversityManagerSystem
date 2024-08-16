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
    QPushButton *btnUpdateData_3;

    void setupUi(QDialog *AdminUniversitySystem)
    {
        if (AdminUniversitySystem->objectName().isEmpty())
            AdminUniversitySystem->setObjectName("AdminUniversitySystem");
        AdminUniversitySystem->resize(516, 324);
        QFont font;
        font.setPointSize(8);
        AdminUniversitySystem->setFont(font);
        btnAddStd = new QPushButton(AdminUniversitySystem);
        btnAddStd->setObjectName("btnAddStd");
        btnAddStd->setGeometry(QRect(130, 70, 91, 71));
        btnUpdateData = new QPushButton(AdminUniversitySystem);
        btnUpdateData->setObjectName("btnUpdateData");
        btnUpdateData->setGeometry(QRect(280, 70, 91, 71));
        btnUpdateData_2 = new QPushButton(AdminUniversitySystem);
        btnUpdateData_2->setObjectName("btnUpdateData_2");
        btnUpdateData_2->setGeometry(QRect(130, 160, 91, 71));
        btnUpdateData_3 = new QPushButton(AdminUniversitySystem);
        btnUpdateData_3->setObjectName("btnUpdateData_3");
        btnUpdateData_3->setGeometry(QRect(280, 160, 91, 71));
        btnUpdateData_3->setFont(font);

        retranslateUi(AdminUniversitySystem);

        QMetaObject::connectSlotsByName(AdminUniversitySystem);
    } // setupUi

    void retranslateUi(QDialog *AdminUniversitySystem)
    {
        AdminUniversitySystem->setWindowTitle(QCoreApplication::translate("AdminUniversitySystem", "Admin", nullptr));
        btnAddStd->setText(QCoreApplication::translate("AdminUniversitySystem", "Add Student", nullptr));
        btnUpdateData->setText(QCoreApplication::translate("AdminUniversitySystem", "Add Grade", nullptr));
        btnUpdateData_2->setText(QCoreApplication::translate("AdminUniversitySystem", "Show Data", nullptr));
        btnUpdateData_3->setText(QCoreApplication::translate("AdminUniversitySystem", "Register Courses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminUniversitySystem: public Ui_AdminUniversitySystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINUNIVERSITYSYSTEM_H
