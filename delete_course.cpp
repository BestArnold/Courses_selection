#include "delete_course.h"
#include "ui_delete_course.h"

delete_course::delete_course(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::delete_course)
{
    ui->setupUi(this);
    ui->label_cname->adjustSize();   //自适应大小
    ui->label_sname->adjustSize();
}

delete_course::~delete_course()
{
    delete ui;
}

QString delete_course::Sname()
{
    return ui->textEdit_sname->toPlainText();
}

QString delete_course::Cname()
{
    return ui->textEdit_cname->toPlainText();
}
