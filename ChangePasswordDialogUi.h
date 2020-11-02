/********************************************************************************
** Form generated from reading UI file 'ChangPasswordDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CHANGEPASSWORDDIALOGUI_H
#define CHANGEPASSWORDDIALOGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswordDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *UserIndentity;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *UserNameLineedit;
    QLineEdit *OriginPasswordLineedit;
    QLineEdit *NewPasswordLineedit;
    QLineEdit *EnsureNewPasswordLineedit;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *UserNameabel;
    QLabel *OriginPassword;
    QLabel *NewPassword;
    QLabel *EnsureNewPassword;
    QLabel *label;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ChangePasswordDialog)
    {
        if (ChangePasswordDialog->objectName().isEmpty())
            ChangePasswordDialog->setObjectName(QString::fromUtf8("ChangePasswordDialog"));
        ChangePasswordDialog->resize(459, 329);
        layoutWidget = new QWidget(ChangePasswordDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 170, 144, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        UserIndentity = new QLabel(layoutWidget);
        UserIndentity->setObjectName(QString::fromUtf8("UserIndentity"));

        horizontalLayout->addWidget(UserIndentity);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        layoutWidget1 = new QWidget(ChangePasswordDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 60, 135, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        UserNameLineedit = new QLineEdit(layoutWidget1);
        UserNameLineedit->setObjectName(QString::fromUtf8("UserNameLineedit"));

        verticalLayout_2->addWidget(UserNameLineedit);

        OriginPasswordLineedit = new QLineEdit(layoutWidget1);
        OriginPasswordLineedit->setObjectName(QString::fromUtf8("OriginPasswordLineedit"));
        OriginPasswordLineedit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(OriginPasswordLineedit);

        NewPasswordLineedit = new QLineEdit(layoutWidget1);
        NewPasswordLineedit->setObjectName(QString::fromUtf8("NewPasswordLineedit"));
        NewPasswordLineedit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(NewPasswordLineedit);

        EnsureNewPasswordLineedit = new QLineEdit(layoutWidget1);
        EnsureNewPasswordLineedit->setObjectName(QString::fromUtf8("EnsureNewPasswordLineedit"));
        EnsureNewPasswordLineedit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(EnsureNewPasswordLineedit);

        layoutWidget2 = new QWidget(ChangePasswordDialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 60, 62, 141));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        UserNameabel = new QLabel(layoutWidget2);
        UserNameabel->setObjectName(QString::fromUtf8("UserNameabel"));

        verticalLayout->addWidget(UserNameabel);

        OriginPassword = new QLabel(layoutWidget2);
        OriginPassword->setObjectName(QString::fromUtf8("OriginPassword"));

        verticalLayout->addWidget(OriginPassword);

        NewPassword = new QLabel(layoutWidget2);
        NewPassword->setObjectName(QString::fromUtf8("NewPassword"));

        verticalLayout->addWidget(NewPassword);

        EnsureNewPassword = new QLabel(layoutWidget2);
        EnsureNewPassword->setObjectName(QString::fromUtf8("EnsureNewPassword"));

        verticalLayout->addWidget(EnsureNewPassword);

        label = new QLabel(ChangePasswordDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 240, 81, 21));
        okButton = new QPushButton(ChangePasswordDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(190, 240, 75, 23));
        cancelButton = new QPushButton(ChangePasswordDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(310, 240, 75, 23));
#ifndef QT_NO_SHORTCUT
        UserIndentity->setBuddy(comboBox);
        UserNameabel->setBuddy(UserNameLineedit);
        OriginPassword->setBuddy(OriginPasswordLineedit);
        NewPassword->setBuddy(NewPasswordLineedit);
        EnsureNewPassword->setBuddy(EnsureNewPasswordLineedit);
#endif // QT_NO_SHORTCUT

        retranslateUi(ChangePasswordDialog);

        QMetaObject::connectSlotsByName(ChangePasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangePasswordDialog)
    {
        ChangePasswordDialog->setWindowTitle(QApplication::translate("ChangePasswordDialog", "Dialog", nullptr));
        UserIndentity->setText(QApplication::translate("ChangePasswordDialog", "\347\224\250\346\210\267\350\272\253\344\273\275", nullptr));
        comboBox->setItemText(0, QApplication::translate("ChangePasswordDialog", "\345\255\246\347\224\237", nullptr));
        comboBox->setItemText(1, QApplication::translate("ChangePasswordDialog", "\346\225\231\345\270\210", nullptr));
        comboBox->setItemText(2, QApplication::translate("ChangePasswordDialog", "\346\225\231\345\255\246\347\247\230\344\271\246", nullptr));
        comboBox->setItemText(3, QApplication::translate("ChangePasswordDialog", "\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230", nullptr));

        UserNameabel->setText(QApplication::translate("ChangePasswordDialog", "&\347\224\250\346\210\267\345\220\215", nullptr));
        OriginPassword->setText(QApplication::translate("ChangePasswordDialog", "\345\216\237\345\257\206\347\240\201", nullptr));
        NewPassword->setText(QApplication::translate("ChangePasswordDialog", "\346\226\260\345\257\206\347\240\201", nullptr));
        EnsureNewPassword->setText(QApplication::translate("ChangePasswordDialog", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", nullptr));
        label->setText(QApplication::translate("ChangePasswordDialog", "\344\277\256\346\224\271\346\210\220\345\212\237", nullptr));
        okButton->setText(QApplication::translate("ChangePasswordDialog", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QApplication::translate("ChangePasswordDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordDialog: public Ui_ChangePasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHANGEPASSWORDDIALOGUI_H
