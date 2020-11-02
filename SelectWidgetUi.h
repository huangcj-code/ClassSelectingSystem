/********************************************************************************
** Form generated from reading UI file 'SelectWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SELECTWIDGETUI_H
#define SELECTWIDGETUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *ClassNameLabel;
    QLineEdit *ClassNameLineedit;
    QLabel *ClassIDLabel;
    QLineEdit *ClassIDLineEdit;
    QLabel *TeacherNameLabel;
    QLineEdit *TeacherNameLineedit;
    QLabel *ScoreLabel;
    QLineEdit *ScoreLineedit;
    QLabel *CapacityLabel;
    QLineEdit *ClassNameLineedit_4;
    QLabel *Selected;
    QLineEdit *SelectedLineedit;
    QPushButton *SelectButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(600, 300);
        ClassIDLabel=new QLabel(Form);
        ClassNameLabel = new QLabel(Form);
        ClassIDLabel->setObjectName(QString::fromUtf8("ClassIDLabel"));
        ClassNameLabel->setObjectName(QString::fromUtf8("ClassNameLabel"));
        ClassIDLabel->setGeometry(QRect(0,160,125,21));
        ClassNameLabel->setGeometry(QRect(0, 41, 125, 21));
        QFont font;
        font.setPointSize(13);
        ClassNameLabel->setFont(font);
        ClassIDLabel->setFont(font);
        ClassNameLineedit = new QLineEdit(Form);
        ClassIDLineEdit=new QLineEdit(Form);
        ClassNameLineedit->setObjectName(QString::fromUtf8("ClassNameLineedit"));
        ClassNameLineedit->setGeometry(QRect(140, 40, 200, 25));
        ClassIDLineEdit->setObjectName(QString::fromUtf8("ClassIDLineedit"));
        ClassIDLineEdit->setGeometry(140,160,200,25);
        QFont font1;
        font1.setPointSize(13);
        ClassNameLineedit->setFont(font1);
        ClassNameLineedit->setReadOnly(true);
        ClassIDLineEdit->setFont(font1);
        ClassIDLineEdit->setReadOnly(true);
        TeacherNameLabel = new QLabel(Form);
        TeacherNameLabel->setObjectName(QString::fromUtf8("TeacherNameLabel"));
        TeacherNameLabel->setGeometry(QRect(0, 80, 125, 26));
        QFont font2;
        font2.setPointSize(12);
        TeacherNameLabel->setFont(font2);
        TeacherNameLineedit = new QLineEdit(Form);
        TeacherNameLineedit->setObjectName(QString::fromUtf8("TeacherNameLineedit"));
        TeacherNameLineedit->setGeometry(QRect(140, 80, 200, 25));
        TeacherNameLineedit->setFont(font1);
        TeacherNameLineedit->setReadOnly(true);
        ScoreLabel = new QLabel(Form);
        ScoreLabel->setObjectName(QString::fromUtf8("ScoreLabel"));
        ScoreLabel->setGeometry(QRect(0, 120, 125, 26));
        ScoreLabel->setFont(font);
        ScoreLineedit = new QLineEdit(Form);
        ScoreLineedit->setObjectName(QString::fromUtf8("ScoreLineedit"));
        ScoreLineedit->setGeometry(QRect(50, 120, 51, 26));
        ScoreLineedit->setFont(font1);
        ScoreLineedit->setReadOnly(true);
        CapacityLabel = new QLabel(Form);
        CapacityLabel->setObjectName(QString::fromUtf8("CapacityLabel"));
        CapacityLabel->setGeometry(QRect(110, 120, 63, 26));
        CapacityLabel->setFont(font);
        ClassNameLineedit_4 = new QLineEdit(Form);
        ClassNameLineedit_4->setObjectName(QString::fromUtf8("ClassNameLineedit_4"));
        ClassNameLineedit_4->setGeometry(QRect(160, 120, 51, 26));
        ClassNameLineedit_4->setFont(font1);
        ClassNameLineedit_4->setReadOnly(true);
        Selected = new QLabel(Form);
        Selected->setObjectName(QString::fromUtf8("Selected"));
        Selected->setGeometry(QRect(220, 120, 63, 26));
        Selected->setFont(font);
        Selected->setMidLineWidth(4);
        SelectedLineedit = new QLineEdit(Form);
        SelectedLineedit->setObjectName(QString::fromUtf8("SelectedLineedit"));
        SelectedLineedit->setGeometry(QRect(270, 120, 51, 26));
        SelectedLineedit->setFont(font1);
        SelectedLineedit->setReadOnly(true);
        SelectButton = new QPushButton(Form);
        SelectButton->setObjectName(QString::fromUtf8("SelectButton"));
        SelectButton->setGeometry(QRect(350, 45, 100, 61));
#ifndef QT_NO_SHORTCUT
        ClassNameLabel->setBuddy(ClassNameLineedit);
        ClassIDLabel->setBuddy(ClassIDLineEdit);
        TeacherNameLabel->setBuddy(TeacherNameLineedit);
        ScoreLabel->setBuddy(ScoreLineedit);
        CapacityLabel->setBuddy(ClassNameLineedit_4);
        Selected->setBuddy(SelectedLineedit);
#endif // QT_NO_SHORTCUT

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        ClassNameLabel->setText(QApplication::translate("Form", "\350\257\276\347\250\213\345\220\215", nullptr));
        TeacherNameLabel->setText(QApplication::translate("Form", "\344\273\273\350\257\276\346\225\231\345\270\210", nullptr));
        ScoreLabel->setText(QApplication::translate("Form", "\345\255\246\345\210\206", nullptr));
        ClassIDLabel->setText(QObject::tr("课程编码"));
        CapacityLabel->setText(QApplication::translate("Form", "\345\256\271\351\207\217", nullptr));
        Selected->setText(QApplication::translate("Form", "\345\267\262\351\200\211", nullptr));
        SelectButton->setText(QApplication::translate("Form", "\351\200\211\350\257\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SELECTWIDGETUI_H
