/********************************************************************************
** Form generated from reading UI file 'sdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SDIALOG_H
#define UI_SDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_sdialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_Id;
    QLabel *label_name;
    QLabel *label_class;
    QLabel *label_call;
    QLabel *label_home;
    QLabel *label_birth;
    QTextEdit *textEdit_Id;
    QTextEdit *textEdit_name;
    QTextEdit *textEdit_class;
    QTextEdit *textEdit_home;
    QTextEdit *textEdit_call;
    QDateEdit *dateEdit_birth;

    void setupUi(QDialog *sdialog)
    {
        if (sdialog->objectName().isEmpty())
            sdialog->setObjectName("sdialog");
        sdialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(sdialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_Id = new QLabel(sdialog);
        label_Id->setObjectName("label_Id");
        label_Id->setGeometry(QRect(10, 30, 40, 12));
        label_name = new QLabel(sdialog);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(10, 60, 40, 12));
        label_class = new QLabel(sdialog);
        label_class->setObjectName("label_class");
        label_class->setGeometry(QRect(10, 90, 40, 12));
        label_call = new QLabel(sdialog);
        label_call->setObjectName("label_call");
        label_call->setGeometry(QRect(10, 120, 40, 12));
        label_home = new QLabel(sdialog);
        label_home->setObjectName("label_home");
        label_home->setGeometry(QRect(10, 180, 40, 12));
        label_birth = new QLabel(sdialog);
        label_birth->setObjectName("label_birth");
        label_birth->setGeometry(QRect(10, 150, 40, 12));
        textEdit_Id = new QTextEdit(sdialog);
        textEdit_Id->setObjectName("textEdit_Id");
        textEdit_Id->setGeometry(QRect(40, 30, 191, 21));
        textEdit_name = new QTextEdit(sdialog);
        textEdit_name->setObjectName("textEdit_name");
        textEdit_name->setGeometry(QRect(40, 60, 191, 21));
        textEdit_class = new QTextEdit(sdialog);
        textEdit_class->setObjectName("textEdit_class");
        textEdit_class->setGeometry(QRect(40, 90, 191, 21));
        textEdit_home = new QTextEdit(sdialog);
        textEdit_home->setObjectName("textEdit_home");
        textEdit_home->setGeometry(QRect(40, 180, 261, 41));
        textEdit_call = new QTextEdit(sdialog);
        textEdit_call->setObjectName("textEdit_call");
        textEdit_call->setGeometry(QRect(40, 120, 191, 21));
        dateEdit_birth = new QDateEdit(sdialog);
        dateEdit_birth->setObjectName("dateEdit_birth");
        dateEdit_birth->setGeometry(QRect(40, 150, 110, 22));

        retranslateUi(sdialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, sdialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, sdialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(sdialog);
    } // setupUi

    void retranslateUi(QDialog *sdialog)
    {
        sdialog->setWindowTitle(QCoreApplication::translate("sdialog", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_Id->setText(QCoreApplication::translate("sdialog", "\345\255\246\345\217\267", nullptr));
        label_name->setText(QCoreApplication::translate("sdialog", "\345\247\223\345\220\215", nullptr));
        label_class->setText(QCoreApplication::translate("sdialog", "\347\217\255\347\272\247", nullptr));
        label_call->setText(QCoreApplication::translate("sdialog", "\347\224\265\350\257\235", nullptr));
        label_home->setText(QCoreApplication::translate("sdialog", "\344\275\217\345\235\200", nullptr));
        label_birth->setText(QCoreApplication::translate("sdialog", "\347\224\237\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sdialog: public Ui_sdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SDIALOG_H
