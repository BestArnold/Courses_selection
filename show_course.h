#ifndef SHOW_COURSE_H
#define SHOW_COURSE_H

#include <QDialog>

namespace Ui {
class Show_course;
}

class Show_course : public QDialog
{
    Q_OBJECT

public:
    explicit Show_course(QWidget *parent = nullptr);
    ~Show_course();
    QString Name();

private:
    Ui::Show_course *ui;
};

#endif // SHOW_COURSE_H
