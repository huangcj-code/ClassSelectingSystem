#include "selectwidget.h"
SelectWidget::SelectWidget(QWidget *parent,QString ClassName,QString ClassID,QString TeacherName,int Capacity,float Credit,int Selected):QWidget(parent)
{
    setupUi(this);
    ClassNameLineedit->setText(ClassName);
    TeacherNameLineedit->setText(TeacherName);
    ClassNameLineedit_4->setText(QString(Capacity));
    ScoreLineedit->setText(QString("%1").arg(Credit));
    SelectedLineedit->setText(QString(Selected));
    ClassIDLineEdit->setText(ClassID);
    connect(SelectButton,SIGNAL(clicked()),this,SLOT(SelectClass()));
    this->show();
}
void SelectWidget::SelectClass(){
    if(!Selected){
    SelectButton->setStyleSheet("background:rgb(255,0,0)");
    SelectButton->setText(QObject::tr("取消"));
    Selected=1;
    }
    else{
        SelectButton->setStyleSheet("background:rgb(255,255,255)");
        SelectButton->setText(QObject::tr("选课"));
        Selected=0;
    }

}
