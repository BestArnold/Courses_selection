/********************************************************************************
** Form generated from reading UI file 'display.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_H
#define UI_DISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_display
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *lable_name;
    QTextEdit *textEdit_name;

    void setupUi(QDialog *display)
    {
        if (display->objectName().isEmpty())
            display->setObjectName("display");
        display->resize(385, 184);
        buttonBox = new QDialogButtonBox(display);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(0, 130, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        lable_name = new QLabel(display);
        lable_name->setObjectName("lable_name");
        lable_name->setGeometry(QRect(40, 50, 40, 12));
        textEdit_name = new QTextEdit(display);
        textEdit_name->setObjectName("textEdit_name");
        textEdit_name->setGeometry(QRect(70, 50, 221, 21));

        retranslateUi(display);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, display, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, display, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(display);
    } // setupUi

    void retranslateUi(QDialog *display)
    {
        display->setWindowTitle(QCoreApplication::translate("display", "Dialog", nullptr));
        lable_name->setText(QCoreApplication::translate("display", "\345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class display: public Ui_display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_H
