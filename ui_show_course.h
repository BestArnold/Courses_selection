/********************************************************************************
** Form generated from reading UI file 'show_course.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_COURSE_H
#define UI_SHOW_COURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Show_course
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_name;
    QTextEdit *textEdit_name;

    void setupUi(QDialog *Show_course)
    {
        if (Show_course->objectName().isEmpty())
            Show_course->setObjectName("Show_course");
        Show_course->resize(400, 300);
        buttonBox = new QDialogButtonBox(Show_course);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_name = new QLabel(Show_course);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(30, 80, 40, 12));
        textEdit_name = new QTextEdit(Show_course);
        textEdit_name->setObjectName("textEdit_name");
        textEdit_name->setGeometry(QRect(60, 70, 211, 31));

        retranslateUi(Show_course);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Show_course, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Show_course, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Show_course);
    } // setupUi

    void retranslateUi(QDialog *Show_course)
    {
        Show_course->setWindowTitle(QCoreApplication::translate("Show_course", "\346\230\276\347\244\272\350\257\276\347\250\213", nullptr));
        label_name->setText(QCoreApplication::translate("Show_course", "\345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Show_course: public Ui_Show_course {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_COURSE_H
