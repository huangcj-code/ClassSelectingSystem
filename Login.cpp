#include "Login.h"
#include <QDebug>
#include <QString>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "global.h"
#include "changepwd.h"
/*全局定义*/
Login::Login(QWidget *parent):QFrame(parent){
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
    connect(OkButton,SIGNAL(clicked()),this,SLOT(checkUserAndPassword()));
    connect(ChangePasswordButton,SIGNAL(clicked()),this,SLOT(changeUserPassword()));
}
bool Login::checkUserAndPassword(){
    QSqlError error;
    QString username=lineEdit->text();
    QString password=lineEdit_2->text();
    QString indentity;
    switch(IdentityCombox->currentIndex()){
    case 0:
        indentity="student";
    }
    /*开始查表，固定ID核对密码确定是否登录成功*/
    QSqlQuery quary;
    quary.exec("SELECT SystemPassword FROM "+indentity+" WHERE StudentID="+username);
    if(quary.next()){
        if(quary.value(0).toString()!=password){
            qDebug()<<"Login Failed";
            return 0;
        }
        else{
            qDebug()<<"Login Success";
            User=username;
            db.close();
            return 1;
        }
    }
    else{
        qDebug()<<"Login Failed";
        return 0;
    }
}
bool Login::changeUserPassword(){
    changepwd Changepwd;
    Changepwd.show();
    Changepwd.exec();
    return 0;
}
