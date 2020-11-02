#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QMainWindow>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>
#include <QVector>
#include <QSqlQuery>
#include "selectwidget.h"
#include "global.h"
#include <QSqlError>
#include <QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QHBoxLayout *horizontalLayout;
    QWidget *layoutWidget;
    QVector <SelectWidget*> Select;
    QPushButton *CommitButton;
    MainWindow(QWidget *parent = nullptr);
    void setupUi(QMainWindow *MainWindow){
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
        layoutWidget = new QWidget(MainWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 170, 144, 24));
        setCentralWidget(layoutWidget);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout=new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->resize(1000,1000);
        setStyleSheet("QLineEdit {border:none}");
        QSqlQuery quary;
        quary.exec("SELECT * FROM class;");
        qDebug()<<quary.lastError();
        SelectWidget *tempWidget;
        while (quary.next()) {
            QString ClassID=quary.value(0).toString();
            QString ClassName=quary.value(1).toString();
            float Credit=quary.value(2).toFloat();
            int Capacity=quary.value(3).toInt();
            int Reserved=quary.value(4).toInt();
            QString TeacherID=quary.value(5).toString();
            tempWidget=new SelectWidget(this,ClassName,ClassID,TeacherID,Capacity,Credit,Reserved);
            horizontalLayout->addWidget(tempWidget);
            Select.push_back(tempWidget);
            db.close();
        }
    }
private slots:
    void Commit();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
