#ifndef CDIALOG_H
#define CDIALOG_H

#include <QDialog>

namespace Ui {
class Cdialog;
}

class Cdialog : public QDialog
{
    Q_OBJECT

public:
    explicit Cdialog(QWidget *parent = nullptr);
    ~Cdialog();
    QString Sname();
    QString Cid();
    QString Cname();
    int Cpoint();
    QString Cterm();
    QString Croom();
    QString Cscore();


private:
    Ui::Cdialog *ui;
};

#endif // CDIALOG_H
