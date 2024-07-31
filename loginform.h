#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QMainWindow>
#include <QDialog>
#include "databaseheader.h"
#include "adminuniversitysystem.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginForm;
}
QT_END_NAMESPACE

class LoginForm : public QMainWindow
{
    Q_OBJECT

public:
    LoginForm(QWidget *parent = nullptr);
    ~LoginForm();
    QSqlDatabase database;
        void openDatabase();
        void closeDatabase();
protected:
    // void closeEvent(QCloseEvent *event) override;
private slots:

    void on_btnSIgnIn_clicked();

private:
    Ui::LoginForm *ui;
    AdminUniversitySystem *ptrAdmUniSys;

};
#endif // LOGINFORM_H
