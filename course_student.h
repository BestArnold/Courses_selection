#ifndef COURSE_STUDENT_H
#define COURSE_STUDENT_H

#include <QDialog>

namespace Ui {
class course_student;
}

class course_student : public QDialog
{
    Q_OBJECT

public:
    explicit course_student(QWidget *parent = nullptr);
    ~course_student();
      QString CourseName();



private:
    Ui::course_student *ui;
};

#endif // COURSE_STUDENT_H
