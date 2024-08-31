#ifndef COURSE_H
#define COURSE_H



#include<QTextStream>
#include<QString>

class Course{

public:
    QString Cid;
    QString Cname;
    int Cpoint;
    QString Cterm;
    QString Croom;
    QString Cscore;

    Course();
    Course(const Course& c1);
    virtual ~Course();

    void save(QTextStream &aStream);
    void read(QTextStream &aStream);

};
#endif // COURSE_H
