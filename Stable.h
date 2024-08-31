#ifndef STABLE_H
#define STABLE_H



#include "Student.h"
#include <QList>
#include <QTextStream>
#include<QVector>
#include<QMessageBox>


class Stable {
public:
    void addStudent(const Student& student);
    void removeStudent(int index);
    Student* findStudent(const QString studentId);
    Student* findStudent2(const QString studentName);
    int findStudent3(const QString studentName);
    QList<Student> findStudent4(Stable& my_stable, const QString CourseName);
    Student GetStudent(int index);


    int GetStudentNum();
    QList<Student> getAllStudents() ;

    // 保存和读取数据的函数
    bool save(const QString &aStream);
    bool read(const QString &aStream);
    QList<Student> m_students;



};

#endif // STABLE_H


