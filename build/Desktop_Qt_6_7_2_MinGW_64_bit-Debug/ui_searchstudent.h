/********************************************************************************
** Form generated from reading UI file 'searchstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSTUDENT_H
#define UI_SEARCHSTUDENT_H

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

class Ui_SearchStudent
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *txtEnterID;
    QLabel *lblMajor;
    QLineEdit *txtMajor;
    QLabel *lblCH;
    QLineEdit *txtCH;
    QLabel *lblCheck;
    QLineEdit *txtLName;
    QLabel *lblLName;
    QLineEdit *txtFName;
    QLabel *lblFName;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *lblCheckCMB;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_3;
    QPushButton *pushButton;

    void setupUi(QDialog *SearchStudent)
    {
        if (SearchStudent->objectName().isEmpty())
            SearchStudent->setObjectName("SearchStudent");
        SearchStudent->resize(624, 370);
        formLayoutWidget = new QWidget(SearchStudent);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 0, 451, 301));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtEnterID = new QLineEdit(formLayoutWidget);
        txtEnterID->setObjectName("txtEnterID");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtEnterID);

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

        lblCheck = new QLabel(formLayoutWidget);
        lblCheck->setObjectName("lblCheck");
        lblCheck->setFrameShape(QFrame::NoFrame);
        lblCheck->setFrameShadow(QFrame::Plain);
        lblCheck->setAlignment(Qt::AlignCenter);
        lblCheck->setMargin(0);
        lblCheck->setIndent(-1);

        formLayout->setWidget(1, QFormLayout::FieldRole, lblCheck);

        txtLName = new QLineEdit(formLayoutWidget);
        txtLName->setObjectName("txtLName");
        txtLName->setEchoMode(QLineEdit::Normal);
        txtLName->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtLName);

        lblLName = new QLabel(formLayoutWidget);
        lblLName->setObjectName("lblLName");

        formLayout->setWidget(3, QFormLayout::LabelRole, lblLName);

        txtFName = new QLineEdit(formLayoutWidget);
        txtFName->setObjectName("txtFName");
        txtFName->setEchoMode(QLineEdit::Normal);
        txtFName->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, txtFName);

        lblFName = new QLabel(formLayoutWidget);
        lblFName->setObjectName("lblFName");

        formLayout->setWidget(2, QFormLayout::LabelRole, lblFName);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBox);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(6, QFormLayout::LabelRole, label);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton_2);

        lblCheckCMB = new QLabel(formLayoutWidget);
        lblCheckCMB->setObjectName("lblCheckCMB");
        lblCheckCMB->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(8, QFormLayout::FieldRole, lblCheckCMB);

        formLayoutWidget_2 = new QWidget(SearchStudent);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(450, 0, 168, 301));
        formLayout_3 = new QFormLayout(formLayoutWidget_2);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(formLayoutWidget_2);
        pushButton->setObjectName("pushButton");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, pushButton);


        retranslateUi(SearchStudent);

        QMetaObject::connectSlotsByName(SearchStudent);
    } // setupUi

    void retranslateUi(QDialog *SearchStudent)
    {
        SearchStudent->setWindowTitle(QCoreApplication::translate("SearchStudent", "Register Course", nullptr));
        lblMajor->setText(QCoreApplication::translate("SearchStudent", "Major", nullptr));
        lblCH->setText(QCoreApplication::translate("SearchStudent", "Credit Hours", nullptr));
        lblCheck->setText(QString());
        lblLName->setText(QCoreApplication::translate("SearchStudent", "Last Name", nullptr));
        lblFName->setText(QCoreApplication::translate("SearchStudent", "First Name", nullptr));
        label->setText(QCoreApplication::translate("SearchStudent", "Select Courses", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SearchStudent", "Register", nullptr));
        lblCheckCMB->setText(QString());
        pushButton->setText(QCoreApplication::translate("SearchStudent", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchStudent: public Ui_SearchStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSTUDENT_H
