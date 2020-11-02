#include "mainwindow.h"
#include <QSqlQuery>
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    setupUi(this);
    CommitButton=new QPushButton(this);
    CommitButton->setObjectName(QString::fromUtf8("CommitButton"));
    CommitButton->setGeometry(QRect(800, 100, 121, 61));
    QFont font;
    font.setFamily(QString::fromUtf8("Arial"));
    font.setPointSize(16);
    CommitButton->setFont(font);
    CommitButton->setText(QObject::tr("保存提交"));
    CommitButton->setEnabled(true);
    connect(CommitButton,SIGNAL(clicked()),this,SLOT(Commit()));
}
void MainWindow::Commit(){
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
    for(int i=0;i<Select.size();i++){
        if(Select[i]->Selected){
            quary.exec("INSERT INTO score (ClassID,StudentID) VALUES (\'"+Select[i]->ClassIDLineEdit->text()+"\',\'"+User+"\')");
        }
    }
    db.close();
}
