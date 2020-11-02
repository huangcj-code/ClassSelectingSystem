#include "changepwd.h"
#include "global.h"
#include <QDebug>
#include <QSqlQuery>
changepwd::changepwd(QWidget *parent):QDialog(parent){
    setupUi(this);
    connect(okButton,SIGNAL(clicked()),this,SLOT(ChangePassword()));
    label->setVisible(false);
}

void changepwd::ChangePassword(){
    QString username=UserNameLineedit->text();
    QString originpwd=OriginPasswordLineedit->text();
    QString newpwd=NewPasswordLineedit->text();
    QString ensurenewpwd=EnsureNewPasswordLineedit->text();
    QString indentity;
    switch(comboBox->currentIndex()){
    case 0:
        indentity="student";
    }
    QSqlQuery quary;
    quary.exec("SELECT SystemPassword FROM "+indentity+" WHERE StudentID="+username);
    if(quary.next()){
        if(quary.value(0).toString()!=originpwd){
            label->setText(QObject::tr("用户名或密码错误"));
        }
        else{
            if(newpwd!=ensurenewpwd){
                label->setText(QObject::tr("Hello"));
            }
            else{
                quary.exec("UPDATE student SET SystemPassword=\'"+newpwd+"\' WHERE StudentID="+username);
                label->setText(QObject::tr("密码修改成功"));
            }
        }
    }
    else{
        label->setText(QObject::tr("用户名或密码错误"));
    }
    label->show();
    label->setVisible(true);
}
