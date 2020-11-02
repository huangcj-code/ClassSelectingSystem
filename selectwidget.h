#ifndef SELECTWIDGET_H
#define SELECTWIDGET_H
#include "SelectWidgetUi.h"
#include <QString>
class SelectWidget:public QWidget,public Ui_Form
{
    Q_OBJECT
public:
    SelectWidget(QWidget *parents=0,QString ClassName=0,QString ClassID=0,QString TeacherName=0,int Capacity=0,float Credit=0,int Selected=0);
    int Selected=0;
private slots:
    void SelectClass();
};

#endif // SELECTWIDGET_H
