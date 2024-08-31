/********************************************************************************
** Form generated from reading UI file 'course_student.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSE_STUDENT_H
#define UI_COURSE_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_course_student
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit_course_name;
    QLabel *labelcourse_name;

    void setupUi(QDialog *course_student)
    {
        if (course_student->objectName().isEmpty())
            course_student->setObjectName("course_student");
        course_student->resize(343, 193);
        buttonBox = new QDialogButtonBox(course_student);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(-30, 120, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        textEdit_course_name = new QTextEdit(course_student);
        textEdit_course_name->setObjectName("textEdit_course_name");
        textEdit_course_name->setGeometry(QRect(130, 60, 191, 21));
        labelcourse_name = new QLabel(course_student);
        labelcourse_name->setObjectName("labelcourse_name");
        labelcourse_name->setGeometry(QRect(30, 60, 40, 12));

        retranslateUi(course_student);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, course_student, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, course_student, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(course_student);
    } // setupUi

    void retranslateUi(QDialog *course_student)
    {
        course_student->setWindowTitle(QCoreApplication::translate("course_student", "\347\211\271\345\256\232\350\257\276\347\250\213\347\232\204\345\255\246\347\224\237", nullptr));
        labelcourse_name->setText(QCoreApplication::translate("course_student", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class course_student: public Ui_course_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSE_STUDENT_H
