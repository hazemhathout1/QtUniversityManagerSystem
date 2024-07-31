/********************************************************************************
** Form generated from reading UI file 'addstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudent
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cmbMajor;
    QLabel *label_2;
    QLineEdit *txtFName;
    QLabel *label_3;
    QLineEdit *txtLName;
    QLabel *label_4;
    QLineEdit *txtPass;
    QLabel *lblCheck_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddStudent)
    {
        if (AddStudent->objectName().isEmpty())
            AddStudent->setObjectName("AddStudent");
        AddStudent->resize(400, 300);
        formLayoutWidget = new QWidget(AddStudent);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 40, 341, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cmbMajor = new QComboBox(formLayoutWidget);
        cmbMajor->setObjectName("cmbMajor");
        cmbMajor->setAutoFillBackground(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, cmbMajor);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtFName = new QLineEdit(formLayoutWidget);
        txtFName->setObjectName("txtFName");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtFName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtLName = new QLineEdit(formLayoutWidget);
        txtLName->setObjectName("txtLName");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtLName);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtPass = new QLineEdit(formLayoutWidget);
        txtPass->setObjectName("txtPass");
        txtPass->setContextMenuPolicy(Qt::DefaultContextMenu);
        txtPass->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtPass);

        lblCheck_2 = new QLabel(formLayoutWidget);
        lblCheck_2->setObjectName("lblCheck_2");
        lblCheck_2->setStyleSheet(QString::fromUtf8(""));
        lblCheck_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, lblCheck_2);

        pushButton = new QPushButton(AddStudent);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 230, 80, 21));
        pushButton_2 = new QPushButton(AddStudent);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 230, 80, 21));

        retranslateUi(AddStudent);

        QMetaObject::connectSlotsByName(AddStudent);
    } // setupUi

    void retranslateUi(QDialog *AddStudent)
    {
        AddStudent->setWindowTitle(QCoreApplication::translate("AddStudent", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddStudent", "Major", nullptr));
        label_2->setText(QCoreApplication::translate("AddStudent", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddStudent", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("AddStudent", "Password", nullptr));
        lblCheck_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("AddStudent", "Confirm", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddStudent", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudent: public Ui_AddStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
