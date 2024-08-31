#include"Student.h"


Student::Student()
{
     Id="";
     Name="";
     Class="";
     Call="";
     Birth=QDate();
     Home="";
     S_course=Course();
     ctable = Ctable();

}

Student::Student(const Student& s1)
{
    Id=s1.Id;
    Name=s1.Name;
    Class=s1.Class;
    Call=s1.Call;
    Birth=s1.Birth;
    Home=s1.Home;
    S_course=s1.S_course;
}

Student& Student::operator= (const Student& s1)
{
    Id=s1.Id;
    Name=s1.Name;
    Class=s1.Class;
    Call=s1.Call;
    Birth=s1.Birth;
    Home=s1.Home;
    special_score = s1.special_score;
    S_course=s1.S_course;
    ctable = s1.ctable;
    return *this;
}
Student::~Student()
    {

    }

void Student::SaveStudent(QTextStream &aStream)
    {
    aStream<<Id<<'\n';
    aStream<<Name<<'\n';
    aStream<<Class<<'\n';
    aStream<<Call<<'\n';
    aStream<<Birth.year()<<' '<<Birth.month()<<' '<<Birth.day()<<'\n';
    aStream<<Home<<'\n';
    ctable.save(aStream);


    }
void Student::ReadStudent(QTextStream &aStream)
    {
        aStream>>Id;
        aStream>>Name;
        aStream>>Class;
        aStream>>Call;
        int year, month, day;
        aStream>>year>>month>>day;
        Birth.setDate(year, month, day);
        aStream>>Home ;
        aStream.readLine();

        ctable.read(aStream);
    }
