/********************************************************************************
** Form generated from reading UI file 'showdata.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDATA_H
#define UI_SHOWDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowData
{
public:
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *txtEnterCode;
    QComboBox *cmbMajor;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *lblcheck;

    void setupUi(QDialog *ShowData)
    {
        if (ShowData->objectName().isEmpty())
            ShowData->setObjectName("ShowData");
        ShowData->resize(614, 365);
        tableView = new QTableView(ShowData);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 120, 601, 241));
        tableView->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        formLayoutWidget = new QWidget(ShowData);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 441, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtEnterCode = new QLineEdit(formLayoutWidget);
        txtEnterCode->setObjectName("txtEnterCode");
        txtEnterCode->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtEnterCode);

        cmbMajor = new QComboBox(formLayoutWidget);
        cmbMajor->setObjectName("cmbMajor");

        formLayout->setWidget(1, QFormLayout::SpanningRole, cmbMajor);

        formLayoutWidget_2 = new QWidget(ShowData);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(450, 10, 160, 71));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(formLayoutWidget_2);
        pushButton->setObjectName("pushButton");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pushButton);

        pushButton_3 = new QPushButton(formLayoutWidget_2);
        pushButton_3->setObjectName("pushButton_3");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pushButton_3);

        lblcheck = new QLabel(ShowData);
        lblcheck->setObjectName("lblcheck");
        lblcheck->setGeometry(QRect(200, 90, 171, 21));
        lblcheck->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(ShowData);

        QMetaObject::connectSlotsByName(ShowData);
    } // setupUi

    void retranslateUi(QDialog *ShowData)
    {
        ShowData->setWindowTitle(QCoreApplication::translate("ShowData", "Dialog", nullptr));
        txtEnterCode->setPlaceholderText(QCoreApplication::translate("ShowData", "Please Enter Student ID", nullptr));
        cmbMajor->setPlaceholderText(QCoreApplication::translate("ShowData", "Select Major", nullptr));
        pushButton->setText(QCoreApplication::translate("ShowData", "Search", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ShowData", "Display All", nullptr));
        lblcheck->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowData: public Ui_ShowData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDATA_H
