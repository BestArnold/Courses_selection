QT       += core gui
greaterThan(QT_MAJOR_VERSION, 5): QT += core5compat
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Course.cpp \
    Ctable.cpp \
    Stable.cpp \
    Student.cpp \
    cdialog.cpp \
    course_student.cpp \
    delete_course.cpp \
    delete_student.cpp \
    main.cpp \
    mainwindow.cpp \
    sdialog.cpp \
    show_course.cpp

HEADERS += \
    Course.h \
    Ctable.h \
    Stable.h \
    Student.h \
    cdialog.h \
    course_student.h \
    delete_course.h \
    delete_student.h \
    mainwindow.h \
    sdialog.h \
    show_course.h

FORMS += \
    cdialog.ui \
    course_student.ui \
    delete_course.ui \
    delete_student.ui \
    mainwindow.ui \
    sdialog.ui \
    show_course.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
