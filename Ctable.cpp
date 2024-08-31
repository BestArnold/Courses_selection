#include "Ctable.h"


void Ctable::addCourse(const Course& course) {
    m_courses.push_back(course);
}

void Ctable::removeCourse(const QString& courseId) {
    for (int i = 0; i < m_courses.size(); ++i) {
        if (m_courses[i].Cid == courseId) {
            m_courses.removeAt(i);
            break;
        }
    }
}


Course* Ctable::findCourse(const QString& courseId) {
    for (int i = 0; i < m_courses.size(); ++i) {
        if (m_courses[i].Cid == courseId) {
            return &m_courses[i];
        }
    }
    return nullptr;
}

int Ctable::findCourse2(const QString& courseName)
{
    for (int i = 0; i < m_courses.size(); i++)
    {
        if (m_courses[i].Cname == courseName)
        {
            return m_courses[i].Cscore.toInt();
        }
    }
}


int Ctable::findCourse3(const QString& courseName)
{
    for (int i = 0; i < m_courses.size(); i++)
    {
        if (m_courses[i].Cname == courseName)
        {
            return i;
        }
    }
     QMessageBox::critical(NULL, "critical", "Error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}


QList<Course> Ctable::getAllCourses() const {
    return m_courses;
}

void Ctable::save(QTextStream &aStream) {
    aStream << m_courses.size() << "\n";

    for (Course &course : m_courses) {
        course.save(aStream);
    }
}

void Ctable::read(QTextStream &aStream) {
    int size;
    aStream >> size ;
    aStream.readLine();

    m_courses.clear();
    for (int i = 0; i < size; ++i) {
        Course course;
        course.read(aStream);
        m_courses.append(course);
    }
}

int Ctable::GetCourseNum()
{
    return m_courses.size();
}
 Course Ctable::GetCourse(int index)
{
     return m_courses[index];
}

Ctable& Ctable::operator=(const Ctable& c1)
{
    int t=c1.m_courses.size();
    for (int i=0 ;i<t ; i++)
    {
        this->m_courses.push_back(c1.m_courses[i]);
    }
}


QString Ctable::getScore(const QString& Coursename)
{
    int m = m_courses.size();
    for (int i = 0; i < m; i++)
    {
        if(m_courses[i].Cname == Coursename)
            return m_courses[i].Cscore;
        else continue;
    }
}
