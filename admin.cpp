#include "admin.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
Admin::Admin(QWidget *parent):QMainWindow(parent)
{
    setupUi(this);
    connect(StudentAction,SIGNAL(triggered()),this,SLOT(editStudentSlot()));
    connect(TeacherAction,SIGNAL(triggered()),this,SLOT(editTeacherSlot()));
    connect(TeachingSecretaryAction,SIGNAL(triggered()),this,SLOT(editTeachingSecretarySlot()));
    connect(AdministratorAction,SIGNAL(triggered()),this,SLOT(editAdminSlot()));
}

void Admin::editStudentSlot(){
    StudentTableWidget->setVisible(true);
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
    int curRow;
    query.exec("SELECT * FROM student");
    while (query.next()) {
        curRow=StudentTableWidget->rowCount();
        StudentTableWidget->insertRow(curRow);
        StudentTableWidget->setItem(curRow,0,new QTableWidgetItem(query.value(0).toString()));
        StudentTableWidget->setItem(curRow,1,new QTableWidgetItem(query.value(1).toString()));
        StudentTableWidget->setItem(curRow,2,new QTableWidgetItem(query.value(2).toString()));
        StudentTableWidget->setItem(curRow,3,new QTableWidgetItem(query.value(3).toString()));
        StudentTableWidget->setItem(curRow,4,new QTableWidgetItem(query.value(4).toString()));
        StudentTableWidget->setItem(curRow,5,new QTableWidgetItem(query.value(5).toString()));
    }
    db.close();
}

void Admin::editTeacherSlot(){
    TeacherTableWidget->setVisible(true);
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
    int curRow;
    query.exec("SELECT * FROM teacher");
    while (query.next()) {
        curRow=TeacherTableWidget->rowCount();
        TeacherTableWidget->insertRow(curRow);
        TeacherTableWidget->setItem(curRow,0,new QTableWidgetItem(query.value(0).toString()));
        TeacherTableWidget->setItem(curRow,1,new QTableWidgetItem(query.value(1).toString()));
        TeacherTableWidget->setItem(curRow,2,new QTableWidgetItem(query.value(2).toString()));
    }
    db.close();
}

void Admin::editTeachingSecretarySlot(){
    TeachingSecretaryViewTable->setVisible(true);
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
    query.exec("SELECT * FROM teachingsecretary");
    int curRow;
    while (query.next()){
        curRow=TeachingSecretaryViewTable->rowCount();
        TeachingSecretaryViewTable->insertRow(curRow);
        TeachingSecretaryViewTable->setItem(curRow,0,new QTableWidgetItem(query.value(0).toString()));
        TeachingSecretaryViewTable->setItem(curRow,1,new QTableWidgetItem(query.value(1).toString()));
        TeachingSecretaryViewTable->setItem(curRow,2,new QTableWidgetItem(query.value(2).toString()));
    }
    db.close();
}

void Admin::editAdminSlot(){
    tableWidget->setVisible(true);
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
    int curRow;
    QSqlQuery query;
    query.exec("SELECT * FROM systemadmin");
    while(query.next()){
        curRow=tableWidget->rowCount();
        tableWidget->insertRow(curRow);
        tableWidget->setItem(curRow,0,new QTableWidgetItem(query.value(0).toString()));
        tableWidget->setItem(curRow,1,new QTableWidgetItem(query.value(1).toString()));
        tableWidget->setItem(curRow,2,new QTableWidgetItem(query.value(2).toString()));
    }
    db.close();
}
