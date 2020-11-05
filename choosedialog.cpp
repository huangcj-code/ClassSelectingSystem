#include "choosedialog.h"
#include "global.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
ChooseDialog::ChooseDialog(QWidget *parent,QString UserID):QDialog(parent)
{
    setupUi(this);
    db.setHostName(HOSTNAME);
    db.setPort(PORT);
    db.setDatabaseName(DATABASE);
    db.setUserName(USER);
    db.setPassword(PASSWORD);
    if(db.open()){
        qDebug()<<"Success";
    }
    else{
        qDebug()<<"Failed";
        qDebug()<<db.lastError();
    }
    QSqlQuery quary;
    quary.exec("SELECT ClassName,ClassID FROM class WHERE TeacherID=\'"+UserID+"\'");
    while (quary.next()) {
        comboBox->addItem(quary.value(0).toString());
        ClassIDVector.push_back(quary.value(1).toString());
    }
    db.close();
    connect(SelectButton,SIGNAL(clicked()),this,SLOT(Select()));
}
void ChooseDialog::Select(){
    ClassID=ClassIDVector[comboBox->currentIndex()];
    t=new teacherMainwindow(comboBox->currentText(),ClassID);
    t->show();
    this->setVisible(false);
}
