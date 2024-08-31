#ifndef STUDENT_H
#define STUDENT_H



#include<QTextStream>
#include<QString>
#include"Course.h"
#include<QDate>
#include"Ctable.h"


class Student
{
public:

    QString Id;
    QString Name;
    QString Class;
    QString Call;
    QDate Birth;
    QString Home;
    QString special_score;
    Course  S_course;
    Ctable ctable;

    Student();
    Student(const Student& s1);
    Student& operator= (const Student& s1);
    virtual ~Student();


    void SaveStudent(QTextStream &aStream);
    void ReadStudent(QTextStream &aStream);

};
#endif // STUDENT_H
