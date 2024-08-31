#include "delete_student.h"
#include "ui_delete_student.h"

delete_student::delete_student(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::delete_student)
{
    ui->setupUi(this);
    ui->label_name->adjustSize();
}

delete_student::~delete_student()
{
    delete ui;
}

QString delete_student::Name()
{
    return ui->textEdit_name->toPlainText();
}
