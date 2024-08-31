#include "show_course.h"
#include "ui_show_course.h"

Show_course::Show_course(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Show_course)
{
    ui->setupUi(this);
}

Show_course::~Show_course()
{
    delete ui;
}

QString Show_course::Name()
{
    return ui->textEdit_name->toPlainText();
}
