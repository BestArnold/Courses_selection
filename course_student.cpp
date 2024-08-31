#include "course_student.h"
#include "ui_course_student.h"

course_student::course_student(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::course_student)
{
    ui->setupUi(this);
    ui->labelcourse_name->adjustSize();
}

course_student::~course_student()
{
    delete ui;
}

QString course_student::CourseName()
{
     return ui->textEdit_course_name->toPlainText();
}


