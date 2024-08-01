#ifndef SHOWDATA_H
#define SHOWDATA_H

#include <QDialog>

namespace Ui {
class ShowData;
}

class ShowData : public QDialog
{
    Q_OBJECT

public:
    explicit ShowData(QWidget *parent = nullptr);
    ~ShowData();

private:
    Ui::ShowData *ui;
};

#endif // SHOWDATA_H
