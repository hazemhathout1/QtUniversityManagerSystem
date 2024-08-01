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
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
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
    QLineEdit *lineEdit;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QPushButton *pushButton;

    void setupUi(QDialog *ShowData)
    {
        if (ShowData->objectName().isEmpty())
            ShowData->setObjectName("ShowData");
        ShowData->resize(430, 317);
        tableView = new QTableView(ShowData);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 110, 411, 192));
        formLayoutWidget = new QWidget(ShowData);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 30, 251, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        formLayoutWidget_2 = new QWidget(ShowData);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(260, 30, 160, 31));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(formLayoutWidget_2);
        pushButton->setObjectName("pushButton");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pushButton);


        retranslateUi(ShowData);

        QMetaObject::connectSlotsByName(ShowData);
    } // setupUi

    void retranslateUi(QDialog *ShowData)
    {
        ShowData->setWindowTitle(QCoreApplication::translate("ShowData", "Dialog", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("ShowData", "Please Enter Student ID", nullptr));
        pushButton->setText(QCoreApplication::translate("ShowData", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowData: public Ui_ShowData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDATA_H
