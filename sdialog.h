#ifndef SDIALOG_H
#define SDIALOG_H

#include <QDialog>

namespace Ui {
class sdialog;
}

class sdialog : public QDialog
{
    Q_OBJECT

public:
    explicit sdialog(QWidget *parent = nullptr);
    ~sdialog();

    QString Id();
    QString Name();
    QString Class();
    QString Call();
    QDate Birth();
    QString Home();



private:
    Ui::sdialog *ui;
};

#endif // SDIALOG_H
