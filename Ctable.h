
#ifndef CTABLE_H
#define CTABLE_H


#include "Course.h"
#include <QList>
#include <QTextStream>
#include<QMessageBox>
//#include "Stable.h"

class Ctable {
public:

    void addCourse(const Course& course);
    void removeCourse(const QString& courseId);

    Course* findCourse(const QString& courseId);
    int findCourse2(const QString& courseName);
    int findCourse3(const QString& courseName);
    int GetCourseNum();
    Course GetCourse(int index);
    QString getScore(const QString& Coursename);


    Ctable& operator=(const Ctable& c1);

    QList<Course> getAllCourses() const;

    // 保存和读取数据的函数
    void save(QTextStream &aStream);
    void read(QTextStream &aStream);


    QList<Course> m_courses;
};



#endif // CTABLE_H
