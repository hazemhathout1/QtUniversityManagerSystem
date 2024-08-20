/********************************************************************************
** Form generated from reading UI file 'addgrade.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGRADE_H
#define UI_ADDGRADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddGrade
{
public:
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_3;
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *txtEnterID;
    QLabel *lblCheck;
    QLabel *lblFName;
    QLineEdit *txtFName;
    QLabel *lblLName;
    QLineEdit *txtLName;
    QLabel *lblMajor;
    QLineEdit *txtMajor;
    QLabel *lblCH;
    QLineEdit *txtCH;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *lblCheckGrade;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtGrade;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddGrade)
    {
        if (AddGrade->objectName().isEmpty())
            AddGrade->setObjectName("AddGrade");
        AddGrade->resize(646, 365);
        formLayoutWidget_2 = new QWidget(AddGrade);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(450, 10, 168, 301));
        formLayout_3 = new QFormLayout(formLayoutWidget_2);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(formLayoutWidget_2);
        pushButton->setObjectName("pushButton");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, pushButton);

        formLayoutWidget = new QWidget(AddGrade);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 10, 451, 301));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtEnterID = new QLineEdit(formLayoutWidget);
        txtEnterID->setObjectName("txtEnterID");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtEnterID);

        lblCheck = new QLabel(formLayoutWidget);
        lblCheck->setObjectName("lblCheck");
        lblCheck->setFrameShape(QFrame::Shape::NoFrame);
        lblCheck->setFrameShadow(QFrame::Shadow::Plain);
        lblCheck->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lblCheck->setMargin(0);
        lblCheck->setIndent(-1);

        formLayout->setWidget(1, QFormLayout::FieldRole, lblCheck);

        lblFName = new QLabel(formLayoutWidget);
        lblFName->setObjectName("lblFName");

        formLayout->setWidget(2, QFormLayout::LabelRole, lblFName);

        txtFName = new QLineEdit(formLayoutWidget);
        txtFName->setObjectName("txtFName");
        txtFName->setEchoMode(QLineEdit::EchoMode::Normal);
        txtFName->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, txtFName);

        lblLName = new QLabel(formLayoutWidget);
        lblLName->setObjectName("lblLName");

        formLayout->setWidget(3, QFormLayout::LabelRole, lblLName);

        txtLName = new QLineEdit(formLayoutWidget);
        txtLName->setObjectName("txtLName");
        txtLName->setEchoMode(QLineEdit::EchoMode::Normal);
        txtLName->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtLName);

        lblMajor = new QLabel(formLayoutWidget);
        lblMajor->setObjectName("lblMajor");

        formLayout->setWidget(4, QFormLayout::LabelRole, lblMajor);

        txtMajor = new QLineEdit(formLayoutWidget);
        txtMajor->setObjectName("txtMajor");
        txtMajor->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, txtMajor);

        lblCH = new QLabel(formLayoutWidget);
        lblCH->setObjectName("lblCH");

        formLayout->setWidget(5, QFormLayout::LabelRole, lblCH);

        txtCH = new QLineEdit(formLayoutWidget);
        txtCH->setObjectName("txtCH");
        txtCH->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, txtCH);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(6, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBox);

        lblCheckGrade = new QLabel(formLayoutWidget);
        lblCheckGrade->setObjectName("lblCheckGrade");
        lblCheckGrade->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(8, QFormLayout::FieldRole, lblCheckGrade);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        txtGrade = new QLineEdit(formLayoutWidget);
        txtGrade->setObjectName("txtGrade");

        horizontalLayout->addWidget(txtGrade);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(AddGrade);

        QMetaObject::connectSlotsByName(AddGrade);
    } // setupUi

    void retranslateUi(QDialog *AddGrade)
    {
        AddGrade->setWindowTitle(QCoreApplication::translate("AddGrade", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("AddGrade", "Search", nullptr));
        lblCheck->setText(QString());
        lblFName->setText(QCoreApplication::translate("AddGrade", "First Name", nullptr));
        lblLName->setText(QCoreApplication::translate("AddGrade", "Last Name", nullptr));
        lblMajor->setText(QCoreApplication::translate("AddGrade", "Major", nullptr));
        lblCH->setText(QCoreApplication::translate("AddGrade", "Credit Hours", nullptr));
        label->setText(QCoreApplication::translate("AddGrade", "Select Courses", nullptr));
        lblCheckGrade->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("AddGrade", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddGrade: public Ui_AddGrade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGRADE_H
