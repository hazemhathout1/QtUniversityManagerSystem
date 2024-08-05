#ifndef SEARCHSTUDENT_H
#define SEARCHSTUDENT_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class SearchStudent;
}

class SearchStudent : public QDialog
{
    Q_OBJECT

public:
    explicit SearchStudent(QWidget *parent = nullptr);
    ~SearchStudent();
    QSqlDatabase database;
    void openDatabase();
    void closeDatabase();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void ClearData();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::SearchStudent *ui;
    QSqlQueryModel *model;//add this
};

#endif // SEARCHSTUDENT_H
