/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *txtAdmin;
    QLineEdit *txtPassword;
    QPushButton *btnSIgnIn;
    QWidget *tab_2;
    QPushButton *btnSIgnIn_3;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *txtAdmin_3;
    QLineEdit *txtPassword_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName("LoginForm");
        LoginForm->resize(500, 224);
        centralwidget = new QWidget(LoginForm);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 501, 221));
        tab = new QWidget();
        tab->setObjectName("tab");
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(80, 40, 311, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtAdmin = new QLineEdit(formLayoutWidget);
        txtAdmin->setObjectName("txtAdmin");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtAdmin);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPassword);

        btnSIgnIn = new QPushButton(tab);
        btnSIgnIn->setObjectName("btnSIgnIn");
        btnSIgnIn->setGeometry(QRect(200, 130, 80, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        btnSIgnIn_3 = new QPushButton(tab_2);
        btnSIgnIn_3->setObjectName("btnSIgnIn_3");
        btnSIgnIn_3->setGeometry(QRect(200, 130, 80, 31));
        formLayoutWidget_3 = new QWidget(tab_2);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(80, 40, 311, 80));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_3);
        label_5->setObjectName("label_5");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget_3);
        label_6->setObjectName("label_6");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        txtAdmin_3 = new QLineEdit(formLayoutWidget_3);
        txtAdmin_3->setObjectName("txtAdmin_3");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, txtAdmin_3);

        txtPassword_3 = new QLineEdit(formLayoutWidget_3);
        txtPassword_3->setObjectName("txtPassword_3");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, txtPassword_3);

        tabWidget->addTab(tab_2, QString());
        LoginForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginForm);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 17));
        LoginForm->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginForm);
        statusbar->setObjectName("statusbar");
        LoginForm->setStatusBar(statusbar);

        retranslateUi(LoginForm);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QMainWindow *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "LoginForm", nullptr));
        label_2->setText(QCoreApplication::translate("LoginForm", "Password", nullptr));
        label->setText(QCoreApplication::translate("LoginForm", "User Name", nullptr));
        btnSIgnIn->setText(QCoreApplication::translate("LoginForm", "Sign In", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("LoginForm", "Admin", nullptr));
        btnSIgnIn_3->setText(QCoreApplication::translate("LoginForm", "Sign In", nullptr));
        label_5->setText(QCoreApplication::translate("LoginForm", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("LoginForm", "User Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("LoginForm", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
