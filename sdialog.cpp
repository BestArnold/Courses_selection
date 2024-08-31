#include "sdialog.h"
#include "ui_sdialog.h"

sdialog::sdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sdialog)
{
    ui->setupUi(this);
}

sdialog::~sdialog()
{
    delete ui;
}

QString sdialog::Id()
{
    return ui->textEdit_Id->toPlainText();
}

QString sdialog::Name()
{
       return ui->textEdit_name->toPlainText();
}
QString sdialog::Class()
{
       return ui->textEdit_class->toPlainText();
}
QString sdialog::Call()
{
       return ui->textEdit_call->toPlainText();
}
QDate sdialog::Birth()
{
        return ui->dateEdit_birth->date();

}
QString sdialog::Home()
{
    return ui->textEdit_home->toPlainText();
}
