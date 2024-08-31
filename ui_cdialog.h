/********************************************************************************
** Form generated from reading UI file 'cdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDIALOG_H
#define UI_CDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Cdialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Cid;
    QLabel *Cname;
    QLabel *Cpoint;
    QLabel *Cterm;
    QLabel *C_room;
    QLabel *C_socre;
    QTextEdit *textEdit_Cid;
    QTextEdit *textEdit_Cpoint;
    QTextEdit *textEdit_Cterm;
    QTextEdit *textEdit_Croom;
    QTextEdit *textEdit_Cscore;
    QTextEdit *textEdit_Cname;
    QLabel *label_name;
    QTextEdit *textEdit_Name;

    void setupUi(QDialog *Cdialog)
    {
        if (Cdialog->objectName().isEmpty())
            Cdialog->setObjectName("Cdialog");
        Cdialog->resize(471, 324);
        buttonBox = new QDialogButtonBox(Cdialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(50, 260, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        Cid = new QLabel(Cdialog);
        Cid->setObjectName("Cid");
        Cid->setGeometry(QRect(10, 40, 40, 12));
        Cname = new QLabel(Cdialog);
        Cname->setObjectName("Cname");
        Cname->setGeometry(QRect(10, 70, 40, 12));
        Cpoint = new QLabel(Cdialog);
        Cpoint->setObjectName("Cpoint");
        Cpoint->setGeometry(QRect(10, 110, 40, 12));
        Cterm = new QLabel(Cdialog);
        Cterm->setObjectName("Cterm");
        Cterm->setGeometry(QRect(10, 150, 40, 12));
        C_room = new QLabel(Cdialog);
        C_room->setObjectName("C_room");
        C_room->setGeometry(QRect(10, 190, 40, 12));
        C_socre = new QLabel(Cdialog);
        C_socre->setObjectName("C_socre");
        C_socre->setGeometry(QRect(10, 230, 40, 12));
        textEdit_Cid = new QTextEdit(Cdialog);
        textEdit_Cid->setObjectName("textEdit_Cid");
        textEdit_Cid->setGeometry(QRect(90, 40, 251, 21));
        textEdit_Cpoint = new QTextEdit(Cdialog);
        textEdit_Cpoint->setObjectName("textEdit_Cpoint");
        textEdit_Cpoint->setGeometry(QRect(90, 100, 251, 21));
        textEdit_Cterm = new QTextEdit(Cdialog);
        textEdit_Cterm->setObjectName("textEdit_Cterm");
        textEdit_Cterm->setGeometry(QRect(90, 140, 251, 21));
        textEdit_Croom = new QTextEdit(Cdialog);
        textEdit_Croom->setObjectName("textEdit_Croom");
        textEdit_Croom->setGeometry(QRect(90, 180, 251, 21));
        textEdit_Cscore = new QTextEdit(Cdialog);
        textEdit_Cscore->setObjectName("textEdit_Cscore");
        textEdit_Cscore->setGeometry(QRect(90, 220, 251, 21));
        textEdit_Cname = new QTextEdit(Cdialog);
        textEdit_Cname->setObjectName("textEdit_Cname");
        textEdit_Cname->setGeometry(QRect(90, 70, 251, 21));
        label_name = new QLabel(Cdialog);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(10, 20, 40, 12));
        textEdit_Name = new QTextEdit(Cdialog);
        textEdit_Name->setObjectName("textEdit_Name");
        textEdit_Name->setGeometry(QRect(90, 10, 251, 21));

        retranslateUi(Cdialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Cdialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Cdialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Cdialog);
    } // setupUi

    void retranslateUi(QDialog *Cdialog)
    {
        Cdialog->setWindowTitle(QCoreApplication::translate("Cdialog", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        Cid->setText(QCoreApplication::translate("Cdialog", "\347\274\226\345\217\267", nullptr));
        Cname->setText(QCoreApplication::translate("Cdialog", "\345\220\215\347\247\260", nullptr));
        Cpoint->setText(QCoreApplication::translate("Cdialog", "\345\255\246\345\210\206", nullptr));
        Cterm->setText(QCoreApplication::translate("Cdialog", "\345\255\246\346\234\237", nullptr));
        C_room->setText(QCoreApplication::translate("Cdialog", "\346\225\231\345\256\244", nullptr));
        C_socre->setText(QCoreApplication::translate("Cdialog", "\346\210\220\347\273\251", nullptr));
        label_name->setText(QCoreApplication::translate("Cdialog", "\345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cdialog: public Ui_Cdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDIALOG_H
