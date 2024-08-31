#include "cdialog.h"
#include "ui_cdialog.h"

Cdialog::Cdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Cdialog)
{
    ui->setupUi(this);
}

Cdialog::~Cdialog()
{
    delete ui;
}
QString Cdialog::Cid()
{
    return ui->textEdit_Cid->toPlainText();
}
QString Cdialog::Cname()
{
    return ui->textEdit_Cname->toPlainText();
}
int Cdialog::Cpoint()
{
    QString sNumber = ui->textEdit_Cpoint->toPlainText();
    int number = sNumber.toInt();
    return number;

}
QString Cdialog::Cterm()
{
    return ui->textEdit_Cterm->toPlainText();
}
QString Cdialog::Croom()
{
    return ui->textEdit_Croom->toPlainText();
}
QString Cdialog::Cscore()
{
    return ui->textEdit_Cscore->toPlainText();
}

QString Cdialog::Sname()
{
    return ui->textEdit_Name->toPlainText();
}
