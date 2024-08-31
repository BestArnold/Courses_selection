/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *add_student;
    QAction *add_course;
    QAction *show_course;
    QAction *show_studnet;
    QAction *FileSave;
    QAction *FileRead;
    QAction *delete_student;
    QAction *course_student;
    QAction *delete_course;
    QWidget *centralwidget;
    QTableView *ShowView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        add_student = new QAction(MainWindow);
        add_student->setObjectName("add_student");
        add_course = new QAction(MainWindow);
        add_course->setObjectName("add_course");
        show_course = new QAction(MainWindow);
        show_course->setObjectName("show_course");
        show_studnet = new QAction(MainWindow);
        show_studnet->setObjectName("show_studnet");
        FileSave = new QAction(MainWindow);
        FileSave->setObjectName("FileSave");
        FileRead = new QAction(MainWindow);
        FileRead->setObjectName("FileRead");
        delete_student = new QAction(MainWindow);
        delete_student->setObjectName("delete_student");
        course_student = new QAction(MainWindow);
        course_student->setObjectName("course_student");
        delete_course = new QAction(MainWindow);
        delete_course->setObjectName("delete_course");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ShowView = new QTableView(centralwidget);
        ShowView->setObjectName("ShowView");
        ShowView->setGeometry(QRect(20, 80, 601, 291));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(add_student);
        menu->addAction(add_course);
        menu->addAction(show_course);
        menu->addAction(show_studnet);
        menu->addAction(delete_student);
        menu->addAction(course_student);
        menu->addAction(delete_course);
        menu_2->addSeparator();
        menu_2->addAction(FileSave);
        menu_2->addAction(FileRead);
        toolBar->addAction(add_student);
        toolBar->addAction(add_course);
        toolBar->addAction(delete_course);
        toolBar->addAction(show_course);
        toolBar->addAction(show_studnet);
        toolBar->addAction(course_student);

        retranslateUi(MainWindow);
        QObject::connect(add_student, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::show));
        QObject::connect(add_course, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::show));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        add_student->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        add_course->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\257\276\347\250\213", nullptr));
        show_course->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\255\246\347\224\237\350\257\276\350\241\250", nullptr));
        show_studnet->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        FileSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        FileRead->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        delete_student->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        course_student->setText(QCoreApplication::translate("MainWindow", "\347\211\271\345\256\232\350\257\276\347\250\213\345\255\246\347\224\237", nullptr));
        delete_course->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\257\276\347\250\213", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
