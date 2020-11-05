#include "Login.h"
#include <QDebug>
#include <QString>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "global.h"
#include "changepwd.h"
#include "mainwindow.h"
#include "choosedialog.h"
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
    QSqlQuery quary;
    switch(IdentityCombox->currentIndex()){
    case 0:
        indentity="student";
        quary.exec("SELECT SystemPassword FROM "+indentity+" WHERE StudentID="+username);
        break;
    case 1:
        indentity="teacher";
        quary.exec("SELECT SystemPassword FROM "+indentity+" WHERE TeacherID="+username);
        break;
    case 2:
        indentity="teachingSecretary";
        quary.exec("SELECT SystemPassword FROM "+indentity+" WHERE SecretaryID="+username);
        break;
    case 3:
        indentity="systemadmin";
        quary.exec("SELECT SystemPassword FROM "+indentity+" WHERE AdminID="+username);
    }
    /*开始查表，固定ID核对密码确定是否登录成功*/
    if(quary.next()){
        if(quary.value(0).toString()!=password){
            qDebug()<<"Login Failed";
            return 0;
        }
        else{
            qDebug()<<"Login Success";
            User=username;
            db.close();
            if(indentity=="student"){
                w=new MainWindow;
                w->show();
            }
            else if(indentity=="teacher"){
                ChooseDialog *choosedialog=new ChooseDialog(0,username);
                choosedialog->show();
                choosedialog->exec();
            }
            else if (indentity=="teachingSecretary"){

            }
            else if(indentity=="systemadmin"){
                adw=new Admin();
                adw->show();
            }
            this->setVisible(false);
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
