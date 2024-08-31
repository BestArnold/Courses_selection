/********************************************************************************
** Form generated from reading UI file 'delete_course.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_COURSE_H
#define UI_DELETE_COURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_delete_course
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_sname;
    QLabel *label_cname;
    QTextEdit *textEdit_sname;
    QTextEdit *textEdit_cname;

    void setupUi(QDialog *delete_course)
    {
        if (delete_course->objectName().isEmpty())
            delete_course->setObjectName("delete_course");
        delete_course->resize(400, 300);
        buttonBox = new QDialogButtonBox(delete_course);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_sname = new QLabel(delete_course);
        label_sname->setObjectName("label_sname");
        label_sname->setGeometry(QRect(40, 80, 40, 12));
        label_cname = new QLabel(delete_course);
        label_cname->setObjectName("label_cname");
        label_cname->setGeometry(QRect(40, 160, 40, 12));
        textEdit_sname = new QTextEdit(delete_course);
        textEdit_sname->setObjectName("textEdit_sname");
        textEdit_sname->setGeometry(QRect(100, 80, 221, 21));
        textEdit_cname = new QTextEdit(delete_course);
        textEdit_cname->setObjectName("textEdit_cname");
        textEdit_cname->setGeometry(QRect(100, 160, 221, 21));

        retranslateUi(delete_course);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, delete_course, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, delete_course, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(delete_course);
    } // setupUi

    void retranslateUi(QDialog *delete_course)
    {
        delete_course->setWindowTitle(QCoreApplication::translate("delete_course", "\345\210\240\351\231\244\347\211\271\345\256\232\345\255\246\347\224\237\350\257\276\347\250\213", nullptr));
        label_sname->setText(QCoreApplication::translate("delete_course", "\345\255\246\347\224\237\345\247\223\345\220\215", nullptr));
        label_cname->setText(QCoreApplication::translate("delete_course", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_course: public Ui_delete_course {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_COURSE_H
