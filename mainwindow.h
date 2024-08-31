#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QtCore5Compat/QTextCodec>
#include <QMainWindow>
#include "Stable.h"
#include "sdialog.h"
#include<QStandardItemModel>
#include<QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void ShowTable();
    void ShowCTable(Student *s);
    void ShowCTable2(Student& s);



    virtual void resizeEvent(QResizeEvent *event) override;

    QMenu *RightClickMenu;                          //右键点击菜单
    QAction *deleteAction;//单行删除事件（如需要其它事件，可新定义）
    QAction *showAction;  //显示课程事件
    int     seletMouseRow;                          //选择到的表格的行数信息





private slots:
    void on_add_student_triggered();

    void on_add_course_triggered();

    void on_show_studnet_triggered();

    void on_show_course_triggered();

    void on_FileSave_triggered();

    void on_FileRead_triggered();

    void on_delete_student_triggered();

    void on_course_student_triggered();
    void onGetMousePos(QPoint pos);               //菜单点击后获取当前位置
    void onMenuAction(QAction *act);        //事件操作




    void on_delete_course_triggered();

private:
    Ui::MainWindow *ui;
    Stable stable;
    sdialog studentdialog;




    QStandardItemModel * StudentModel;
    QStandardItemModel * CourseModel;
};
#endif // MAINWINDOW_H
