/********************************************************************************
** Form generated from reading UI file 'ChooseDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CHOOSEDIALOG_UI_H
#define CHOOSEDIALOG_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QPushButton>
QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QComboBox *comboBox;
    QLabel *SelectLabel;
    QLabel *WelcomeLabel;
    QPushButton *SelectButton;
    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(294, 200);
        SelectButton=new QPushButton(Dialog);
        SelectButton->setObjectName("SelectButton");
        SelectButton->setGeometry(0,140,255,60);
        QFont font0;
        font0.setPointSize(10);
        SelectButton->setFont(font0);
        SelectButton->setText("确定");
        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(0, 70, 291, 61));
        QFont font;
        font.setPointSize(18);
        comboBox->setFont(font);
        SelectLabel = new QLabel(Dialog);
        SelectLabel->setObjectName(QString::fromUtf8("SelectLabel"));
        SelectLabel->setGeometry(QRect(20, 0, 251, 61));
        SelectLabel->setFont(font);
#ifndef QT_NO_SHORTCUT
        SelectLabel->setBuddy(comboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        SelectLabel->setText(QApplication::translate("Dialog", "\350\257\267\351\200\211\346\213\251\346\202\250\346\203\263\347\273\231\345\210\206\347\232\204\350\257\276\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHOOSEDIALOG_UI_H
