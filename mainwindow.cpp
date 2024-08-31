#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Student.h"
#include "cdialog.h"
#include "show_course.h"
#include<QDir>
#include"qfiledialog.h"
#include"delete_student.h"
#include"course_student.h"
#include"delete_course.h"
#include<QList>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    stable()
{
    ui->setupUi(this);
    ui->ShowView->setContextMenuPolicy(Qt::CustomContextMenu); //可弹出右键菜单
    //菜单等事件
    RightClickMenu = new QMenu();               //右键点击菜单
    deleteAction = new QAction("删除",this);        //单行删除事件
    showAction = new QAction("课表", this);           //显示事件
    RightClickMenu->addAction(deleteAction);
    RightClickMenu->addAction(showAction);    //将action添加到菜单内
    //信号槽连接
    connect(ui->ShowView,&QTableView::customContextMenuRequested,this,&MainWindow::onGetMousePos);
    connect(RightClickMenu,&QMenu::triggered,this,&MainWindow::onMenuAction);


}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::ShowTable()
{
    //New一个QStandardItemModel的对象并与QTableView资源建立关联；
    StudentModel= new QStandardItemModel(this);
    //建立关联
    ui->ShowView->setModel(StudentModel);
    //m_iCurTable = SignupTable; //表示当前显示的是运动员信息
    StudentModel->clear();
    StudentModel->setColumnCount(6); //6`列
    int i;//将所有列都设置为非只读
    for(i=0;i<6;i++)
        ui->ShowView->setItemDelegateForColumn(i, NULL);

    QStringList templist;
    templist.append("学号");
    templist.append("姓名");
    templist.append("班级");
    templist.append("电话");
    templist.append("生日");
    templist.append("住址");
    StudentModel->setHorizontalHeaderLabels(templist);

    int RowCnt = stable.GetStudentNum(); //行数（不含标题）
    StudentModel->setRowCount(RowCnt+3);

    //遍历，插入数据
    QStandardItem *aTempItem; //临时的item
    QString tempStr;
    for(int i=0; i<RowCnt; ++i)
    {
        Student s1 = stable.GetStudent(i);

        tempStr = s1.Id;
        aTempItem = new QStandardItem(tempStr);
        StudentModel->setItem(i, 0, aTempItem);


        tempStr = s1.Name;
        aTempItem = new QStandardItem(tempStr);
        StudentModel->setItem(i, 1, aTempItem);


        tempStr = s1.Class;
        aTempItem = new QStandardItem(tempStr);
        StudentModel->setItem(i, 2, aTempItem);

        tempStr = s1.Call;
        aTempItem = new QStandardItem(tempStr);
        StudentModel->setItem(i, 3, aTempItem);


        tempStr = s1.Birth.toString("yyyy-MM-dd");
        aTempItem = new QStandardItem(tempStr);
        StudentModel->setItem(i, 4, aTempItem);


        tempStr = s1.Home;
        aTempItem = new QStandardItem(tempStr);
        StudentModel->setItem(i, 5, aTempItem); // 将数据插入第5列
    }

    //设置号码为只读
    //ReadOnlyDelegate* readOnlyDelegate = new ReadOnlyDelegate(this);
    //ui->ShowView->setItemDelegateForColumn(0, readOnlyDelegate);
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    //父类的保持
    QMainWindow::resizeEvent(event);

    int x = this->frameGeometry().width();
    int y = this->frameGeometry().height();

    //窗口改变大小的时候列表控件跟着改变
    ui->ShowView->setGeometry(5,5,x*0.99,y*0.99);
}

void MainWindow::ShowCTable(Student * s)
{
    //New一个QStandardItemModel的对象并与QTableView资源建立关联；
    CourseModel= new QStandardItemModel(this);
    //建立关联
    ui->ShowView->setModel(CourseModel);

    CourseModel->clear();
    CourseModel->setColumnCount(6); //6`列
    int i;//将所有列都设置为非只读
    for(i=0;i<6;i++)
        ui->ShowView->setItemDelegateForColumn(i, NULL);

    QStringList templist;
    templist.append("课程编号");
    templist.append("课程名称");
    templist.append("学分");
    templist.append("教室");
    templist.append("学期");
    templist.append("成绩");
    CourseModel->setHorizontalHeaderLabels(templist);

    int RowCnt = s->ctable.GetCourseNum();//行数（不含标题）

    if(RowCnt>10){
        CourseModel->setRowCount(RowCnt-10);
    }
    else
    {
        CourseModel->setRowCount(RowCnt);
    }



    //遍历，插入数据
    QStandardItem *aTempItem; //临时的item
    QString tempStr;
    if(RowCnt > 10)
    {
        for(int i=10; i<RowCnt; ++i)
        {
            Course c1= s->ctable.GetCourse(i);

            tempStr = c1.Cid;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i-10, 0, aTempItem);


            tempStr = c1.Cname;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i-10, 1, aTempItem);


            int t = c1.Cpoint;
            aTempItem = new QStandardItem(QString::number(t));
            CourseModel->setItem(i-10, 2, aTempItem);

            tempStr = c1.Croom;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i-10, 3, aTempItem);

            tempStr = c1.Cterm;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i-10, 4, aTempItem);

            tempStr = c1.Cscore;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i-10, 5, aTempItem);
        }
    }
    else
    {
        for(int i=0; i<RowCnt; ++i)
        {
            Course c1= s->ctable.GetCourse(i);

            tempStr = c1.Cid;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i, 0, aTempItem);


            tempStr = c1.Cname;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i, 1, aTempItem);


            int t = c1.Cpoint;
            aTempItem = new QStandardItem(QString::number(t));
            CourseModel->setItem(i, 2, aTempItem);

            tempStr = c1.Croom;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i, 3, aTempItem);

            tempStr = c1.Cterm;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i, 4, aTempItem);

            tempStr = c1.Cscore;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i, 5, aTempItem);
        }
    }


}

void MainWindow::ShowCTable2(Student& s)
{
    //New一个QStandardItemModel的对象并与QTableView资源建立关联；
            CourseModel= new QStandardItemModel(this);
    //建立关联
    ui->ShowView->setModel(CourseModel);

    CourseModel->clear();
    CourseModel->setColumnCount(6); //6`列
    int i;//将所有列都设置为非只读
    for(i=0;i<6;i++)
        ui->ShowView->setItemDelegateForColumn(i, NULL);

    QStringList templist;
    templist.append("课程编号");
    templist.append("课程名称");
    templist.append("学分");
    templist.append("教室");
    templist.append("学期");
    templist.append("成绩");
    CourseModel->setHorizontalHeaderLabels(templist);

    int RowCnt = s.ctable.GetCourseNum();//行数（不含标题）


        CourseModel->setRowCount(RowCnt);




    //遍历，插入数据
    QStandardItem *aTempItem; //临时的item
    QString tempStr;

        for(int i=0; i<RowCnt; ++i)
        {
            Course c1= s.ctable.GetCourse(i);

            tempStr = c1.Cid;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i, 0, aTempItem);


            tempStr = c1.Cname;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i, 1, aTempItem);


            int t = c1.Cpoint;
            aTempItem = new QStandardItem(QString::number(t));
            CourseModel->setItem(i, 2, aTempItem);

            tempStr = c1.Croom;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i, 3, aTempItem);

            tempStr = c1.Cterm;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i, 4, aTempItem);

            tempStr = c1.Cscore;
            aTempItem = new QStandardItem(tempStr);
            CourseModel->setItem(i, 5, aTempItem);
        }

}


void MainWindow::on_add_student_triggered()
{
    sdialog studentdialog(this);
    int ret = studentdialog.exec(); //以模态方式显示对话框
    if(ret==QDialog::Accepted)//OK按钮被按下
    {
        Student s1;
        s1.Id=studentdialog.Id();
        s1.Name=studentdialog.Name();
        s1.Class=studentdialog.Class();
        s1.Call=studentdialog.Call();
        s1.Birth=studentdialog.Birth();
        s1.Home=studentdialog.Home();
        stable.addStudent(s1);

        ShowTable();

    }
}


void MainWindow::on_add_course_triggered()
{
    Cdialog coursedialog(this);
    int ret = coursedialog.exec(); //以模态方式显示对话框
    if(ret==QDialog::Accepted)//OK按钮被按下
    {

        Student* s1=stable.findStudent2(coursedialog.Sname());
        s1->S_course.Cid=coursedialog.Cid();
        s1->S_course.Cname=coursedialog.Cname();
        s1->S_course.Cpoint=coursedialog.Cpoint();
        s1->S_course.Croom=coursedialog.Croom();
        s1->S_course.Cterm=coursedialog.Cterm();
        s1->S_course.Cscore=coursedialog.Cscore();


        stable.findStudent2(coursedialog.Sname())->ctable.addCourse(s1->S_course);

          ShowCTable2(*stable.findStudent2(coursedialog.Sname()));

    }
}


void MainWindow::on_show_studnet_triggered()
{
    ShowTable();
}


void MainWindow::on_show_course_triggered()
{
    Show_course show_course(this);
    int ret = show_course.exec(); //以模态方式显示对话框
    if(ret==QDialog::Accepted)//OK按钮被按下
    {
        Student* s1=(stable.findStudent2(show_course.Name()));

        ShowCTable(s1);
    }

}


void MainWindow::on_FileSave_triggered()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "另存为一个文件";
    QString filter = "文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this, dlgTitle, curPath, filter);
    if(aFileName.isEmpty())
        return;

    stable.save(aFileName);
}


void MainWindow::on_FileRead_triggered()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "选择一个文件";
    QString filter = "文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getOpenFileName(this, dlgTitle, curPath, filter);

    if(aFileName.isEmpty())
        return;

    //创建成功，打开文件
    stable.read(aFileName);
    stable.read(aFileName);

    ShowTable();

}


void MainWindow::on_delete_student_triggered()
{
    delete_student delete_one_student(this); //以模态方式显示对话框
    int ret = delete_one_student.exec(); //以模态方式显示对话框
    if(ret==QDialog::Accepted)//OK按钮被按下
    {
        int s1=(stable.findStudent3(delete_one_student.Name()));
        stable.m_students[s1].ctable.m_courses.clear();
        stable.m_students.erase(stable.m_students.begin()+s1);
        ShowTable();
    }

}


void MainWindow::on_course_student_triggered()
{

    course_student my_course_student (this); //以模态方式显示对话框
    int ret = my_course_student.exec(); //以模态方式显示对话框
    if(ret==QDialog::Accepted)//OK按钮被按下
    {
        QList<Student> t1_student = stable.findStudent4(stable, my_course_student.CourseName());

        //对学生进行排序
        for(int i=0; i<t1_student.size(); ++i)
        {
            int Name_index = stable.findStudent3(t1_student[i].Name);
            for(int i_size = 0; i_size< stable.m_students[Name_index].ctable.m_courses.size(); i_size++)
            {
                if(stable.m_students[Name_index].ctable.m_courses[i_size].Cname == my_course_student.CourseName())
                    t1_student[i].special_score = stable.m_students[Name_index].ctable.m_courses[i_size].Cscore;
                else continue;
            }
        }

        for(int i2 = 0 ; i2 < t1_student.size(); i2++)
        {
            for ( int j = i2+1; j<t1_student.size(); j++)
            {
                Student st;
                if (t1_student[i2].special_score < t1_student[j].special_score)
                {
                    st = t1_student[i2];
                    t1_student[i2] = t1_student[j];
                    t1_student[j] = st;
                }

            }
        }


        //New一个QStandardItemModel的对象并与QTableView资源建立关联；
        StudentModel= new QStandardItemModel(this);
        //建立关联
        ui->ShowView->setModel(StudentModel);

        StudentModel->clear();
        StudentModel->setColumnCount(4); //7列
        int i;  //将所有列都设置为非只读
        for(i=0;i<4;i++)
            ui->ShowView->setItemDelegateForColumn(i, NULL);

        QStringList templist;
        templist.append("学号");
        templist.append("姓名");
        templist.append("班级");
        templist.append("分数");
        StudentModel->setHorizontalHeaderLabels(templist);

        int RowCnt = t1_student.size(); //行数（不含标题）
        StudentModel->setRowCount(RowCnt);

        //遍历，插入数据
        QStandardItem *aTempItem; //临时的item
        QString tempStr;
        for(int i=0; i<RowCnt; ++i)
        {
            Student s1 = t1_student[i];

            tempStr = s1.Id;
            aTempItem = new QStandardItem(tempStr);
            StudentModel->setItem(i, 0, aTempItem);


            tempStr = s1.Name;
            aTempItem = new QStandardItem(tempStr);
            StudentModel->setItem(i, 1, aTempItem);


            tempStr = s1.Class;
            aTempItem = new QStandardItem(tempStr);
            StudentModel->setItem(i, 2, aTempItem);

            QString t_string;
            int Name_index = stable.findStudent3(s1.Name);
            for(int i_size = 0; i_size< stable.m_students[Name_index].ctable.m_courses.size(); i_size++)
             {
                 if(stable.m_students[Name_index].ctable.m_courses[i_size].Cname == my_course_student.CourseName())
                    t_string = stable.m_students[Name_index].ctable.m_courses[i_size].Cscore;
                 else continue;
            }
            tempStr = t_string;

            aTempItem = new QStandardItem(tempStr);
            StudentModel->setItem(i, 3, aTempItem);


        }
    }
}

void MainWindow::onGetMousePos(QPoint pos)
{
    QModelIndex index = ui->ShowView->indexAt(pos);    //找到tableview当前位置信息
    seletMouseRow = index.row();    //获取到了当前右键所选的行数
    if(index.isValid())        //如果行数有效，则显示菜单
        RightClickMenu->exec(QCursor::pos());

}
//实现菜单删除操作函数
void MainWindow::onMenuAction(QAction *act)
{


    //删除本行数据
    if(act->text() == "删除")
    {
        //看选中了删除这个菜单
        StudentModel->removeRow(seletMouseRow);  //删除掉了表格信息

        //删除选课
        stable.m_students[seletMouseRow].ctable.m_courses.clear();
        stable.m_students.removeAt(seletMouseRow);


    }
    else if(act->text() == "课表")
    {
        ShowCTable(&stable.m_students[seletMouseRow]);
    }
}

void MainWindow::on_delete_course_triggered()
{
    delete_course my_delete_course(this);
    int ret = my_delete_course.exec(); //以模态方式显示对话框
    if(ret==QDialog::Accepted)//OK按钮被按下
    {
        int i =stable.findStudent3(my_delete_course.Sname());

        int j=stable.m_students[i].ctable.findCourse3(my_delete_course.Cname());


        stable.m_students[i].ctable.m_courses.remove(j);


        ShowCTable(&stable.m_students[i]);

    }
}

