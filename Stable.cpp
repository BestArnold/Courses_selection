#include"Stable.h"
#include <QFile>

void Stable::addStudent(const Student& student) {
    m_students.append(student);

}

void Stable::removeStudent(int index) {
    m_students.erase(m_students.begin() + index);

}

Student* Stable::findStudent(const QString studentId) {
    for (int i = 0; i < m_students.size(); ++i) {
        if (m_students[i].Id == studentId) {
            return &m_students[i];
        }
    }
    return nullptr;
}

Student* Stable::findStudent2(const QString studentName) {
    for (int i = 0; i < m_students.size(); ++i) {
        if (m_students[i].Name == studentName) {
            return &m_students[i];
        }
    }
     QMessageBox::critical(NULL, "critical", "Error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}

int Stable::findStudent3(const QString studentName)
{
    for(int i = 0; i< m_students.size();i++)
    {
        if (m_students[i].Name==studentName)
            return i;
    }
    QMessageBox::critical(NULL, "critical", "Error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}

QList<Student> Stable::findStudent4(Stable& my_stable, const QString CourseName)
{
    int t = my_stable.m_students.size();
    Stable t_table;

    for (int i = 0;i < t;i++)
    {
        int m = my_stable.m_students[i].ctable.m_courses.size();
        for ( int j = 0;j < m ; j++)
        {
            if(my_stable.m_students[i].ctable.m_courses[j].Cname == CourseName)
            {
                t_table.m_students.push_back(my_stable.m_students[i]);
            }
        }
    }
    return t_table.m_students;
}

QList<Student> Stable::getAllStudents(){
    return m_students;
}

bool Stable::save( const QString &aSaveFileName) {
    QFile aFile(aSaveFileName);
    if(!aFile.open(QIODevice::WriteOnly| QIODevice::Text)) //保存为文本
        return false;
    QTextStream aStream(&aFile);//用文本流保存文件
    //aStream.setCodec(QTextCodec::codecForName("system")); //显示汉字


    aStream << m_students.size() << "\n";
    for (Student &s1 : m_students) {
        s1.SaveStudent(aStream);
    }

    aFile.close();
    return true;
}


bool Stable::read(const QString &aReadFileName) {
    QFile aFile(aReadFileName);
    if(!aFile.exists()) //文件不存在
        return false;
    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text)) //以文本方式打开
        return false;
    QTextStream aStream(&aFile); //用文本流读取文件


    int t;


    m_students.clear();
    aStream >> t;
    aStream.readLine();

    for (int i = 0; i < t; i++) {

            Student* s1 = new Student;
            (*s1).ReadStudent(aStream);
            m_students.push_back((*s1));
            m_students[i].ctable=(*s1).ctable;

            delete s1;
    }
    aFile.close();//关闭文件
    return true;
}




Student Stable::GetStudent(int index)
{
    return m_students[index];
}

int Stable::GetStudentNum()
{
    int S_number=m_students.size();
    return S_number;

}



