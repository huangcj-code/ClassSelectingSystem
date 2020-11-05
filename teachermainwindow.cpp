#include "teachermainwindow.h"
#include "global.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
teacherMainwindow::teacherMainwindow(QString ClassName,QString ClassID)
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
    QSqlQuery query;
    query.exec("SELECT StudentID,Name FROM student WHERE StudentID=(SELECT StudentID FROM score WHERE ClassID=\'"+ClassID+"\')");
    int curRow;
    while (query.next()) {
        curRow=tableWidget->rowCount();
        tableWidget->insertRow(curRow);
        tableWidget->setItem(curRow,0,new QTableWidgetItem(query.value(0).toString()));
        tableWidget->setItem(curRow,1,new QTableWidgetItem(query.value(1).toString()));
    }
    lineEdit->setText(ClassName);
    lineEdit->setEnabled(false);
}
