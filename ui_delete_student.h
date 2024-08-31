/********************************************************************************
** Form generated from reading UI file 'delete_student.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_STUDENT_H
#define UI_DELETE_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_delete_student
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_name;
    QTextEdit *textEdit_name;

    void setupUi(QDialog *delete_student)
    {
        if (delete_student->objectName().isEmpty())
            delete_student->setObjectName("delete_student");
        delete_student->resize(370, 213);
        buttonBox = new QDialogButtonBox(delete_student);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 160, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_name = new QLabel(delete_student);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(40, 90, 40, 12));
        textEdit_name = new QTextEdit(delete_student);
        textEdit_name->setObjectName("textEdit_name");
        textEdit_name->setGeometry(QRect(80, 80, 181, 31));

        retranslateUi(delete_student);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, delete_student, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, delete_student, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(delete_student);
    } // setupUi

    void retranslateUi(QDialog *delete_student)
    {
        delete_student->setWindowTitle(QCoreApplication::translate("delete_student", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        label_name->setText(QCoreApplication::translate("delete_student", "\345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_student: public Ui_delete_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_STUDENT_H
