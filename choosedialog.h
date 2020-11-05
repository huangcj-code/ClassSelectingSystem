#ifndef CHOOSEDIALOG_H
#define CHOOSEDIALOG_H
#include <QVector>
#include "ChooseDialog_UI.h"
#include "teachermainwindow.h"
class ChooseDialog:public QDialog,public Ui_Dialog
{
    Q_OBJECT
public:
    ChooseDialog(QWidget *parent=0,QString UserID=nullptr);
    QVector <QString> ClassIDVector;
    QString ClassID;
    teacherMainwindow *t;
private slots:
    void Select();
};

#endif // CHOOSEDIALOG_H
