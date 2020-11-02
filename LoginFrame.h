/********************************************************************************
** Form generated from reading UI file 'LoginFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOGINFRAME_H
#define LOGINFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginFram
{
public:
    QPushButton *OkButton;
    QPushButton *CancelButton;
    QPushButton *ChangePasswordButton;
    QLabel *UserNameLabel;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *PassworlLabel;
    QComboBox *IdentityCombox;
    QLabel *IdentityLabel;

    void setupUi(QFrame *LoginFram)
    {
        if (LoginFram->objectName().isEmpty())
            LoginFram->setObjectName(QString::fromUtf8("LoginFram"));
        LoginFram->resize(957, 537);
        ChangePasswordButton=new QPushButton(LoginFram);
        ChangePasswordButton->setObjectName(QString::fromUtf8("ChangePasswordButton"));
        ChangePasswordButton->setGeometry(QRect(395,410,121,61));
        OkButton = new QPushButton(LoginFram);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));
        OkButton->setGeometry(QRect(160, 410, 121, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(16);
        OkButton->setFont(font);
        CancelButton = new QPushButton(LoginFram);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        CancelButton->setGeometry(QRect(630, 410, 121, 61));
        CancelButton->setFont(font);
        UserNameLabel = new QLabel(LoginFram);
        UserNameLabel->setObjectName(QString::fromUtf8("UserNameLabel"));
        UserNameLabel->setGeometry(QRect(200, 160, 91, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        UserNameLabel->setFont(font1);
        lineEdit = new QLineEdit(LoginFram);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(390, 160, 361, 51));
        lineEdit_2 = new QLineEdit(LoginFram);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(390, 240, 361, 51));
        lineEdit_2->setToolTipDuration(-2);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        PassworlLabel = new QLabel(LoginFram);
        PassworlLabel->setObjectName(QString::fromUtf8("PassworlLabel"));
        PassworlLabel->setGeometry(QRect(200, 250, 91, 51));
        PassworlLabel->setFont(font);
        IdentityCombox = new QComboBox(LoginFram);
        IdentityCombox->addItem(QString());
        IdentityCombox->addItem(QString());
        IdentityCombox->addItem(QString());
        IdentityCombox->addItem(QString());
        IdentityCombox->setObjectName(QString::fromUtf8("IdentityCombox"));
        IdentityCombox->setGeometry(QRect(390, 320, 361, 51));
        IdentityCombox->setFont(font);
        IdentityLabel = new QLabel(LoginFram);
        IdentityLabel->setObjectName(QString::fromUtf8("IdentityLabel"));
        IdentityLabel->setGeometry(QRect(200, 320, 91, 51));
        IdentityLabel->setFont(font);
#ifndef QT_NO_SHORTCUT
        UserNameLabel->setBuddy(lineEdit);
        PassworlLabel->setBuddy(lineEdit_2);
        IdentityLabel->setBuddy(IdentityCombox);
#endif // QT_NO_SHORTCUT

        retranslateUi(LoginFram);

        QMetaObject::connectSlotsByName(LoginFram);
    } // setupUi

    void retranslateUi(QFrame *LoginFram)
    {
        LoginFram->setWindowTitle(QApplication::translate("LoginFram", "Frame", nullptr));
        OkButton->setText(QApplication::translate("LoginFram", "\347\231\273\345\275\225", nullptr));
        CancelButton->setText(QApplication::translate("LoginFram", "\345\217\226\346\266\210", nullptr));
        ChangePasswordButton->setText(QObject::tr("修改密码"));
        ChangePasswordButton->setFlat(1);
        UserNameLabel->setText(QApplication::translate("LoginFram", "&\347\224\250\346\210\267\345\220\215", nullptr));
        PassworlLabel->setText(QApplication::translate("LoginFram", "&\345\257\206\347\240\201", nullptr));
        IdentityCombox->setItemText(0, QApplication::translate("LoginFram", "\345\255\246\347\224\237", nullptr));
        IdentityCombox->setItemText(1, QApplication::translate("LoginFram", "\346\225\231\345\270\210", nullptr));
        IdentityCombox->setItemText(2, QApplication::translate("LoginFram", "\346\225\231\345\255\246\347\247\230\344\271\246", nullptr));
        IdentityCombox->setItemText(3, QApplication::translate("LoginFram", "\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230", nullptr));

        IdentityLabel->setText(QApplication::translate("LoginFram", "&\350\272\253\344\273\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginFram: public Ui_LoginFram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOGINFRAME_H
