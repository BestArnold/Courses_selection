#ifndef DELETE_STUDENT_H
#define DELETE_STUDENT_H

#include <QDialog>

namespace Ui {
class delete_student;
}

class delete_student : public QDialog
{
    Q_OBJECT

public:
    explicit delete_student(QWidget *parent = nullptr);
    ~delete_student();
    QString Name();

private:
    Ui::delete_student *ui;
};

#endif // DELETE_STUDENT_H
