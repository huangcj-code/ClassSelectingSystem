#ifndef TEACHERMAINWINDOW_H
#define TEACHERMAINWINDOW_H
#include "MainTeacher_UI.h"

class teacherMainwindow:public QMainWindow,public Ui_MainWindow
{
    Q_OBJECT
public:
    teacherMainwindow(QString ClassName=nullptr,QString ClassID=nullptr);
};

#endif // TEACHERMAINWINDOW_H
