#include"Course.h"


Course::Course()
{

}

Course::~Course()
{

}
Course::Course(const Course& c1)
{
     Cid=c1.Cid;
     Cname=c1.Cname;
     Cpoint=c1.Cpoint;
     Cterm=c1.Cterm;
     Croom=c1.Croom;
     Cscore=c1.Cscore;
}

void Course::save(QTextStream &aStream)
{

    aStream<<Cid<<'\n';
    aStream<<Cname<<'\n';
    aStream<<Cpoint<<'\n';
    aStream<<Cterm<<'\n';
    aStream<<Croom<<'\n';
    aStream<<Cscore<<'\n';
}

void Course::read(QTextStream &aStream)
{
    aStream>>Cid;
    aStream>>Cname;
    aStream>>Cpoint;
    aStream>>Cterm;
    aStream>>Croom;
    aStream>>Cscore;
}
