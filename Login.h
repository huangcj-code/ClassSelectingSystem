#ifndef LOGIN_H
#define LOGIN_H
#include "LoginFrame.h"
#include "mainwindow.h"
#include "teachermainwindow.h"
#include "admin.h"
class Login: public QFrame,public Ui_LoginFram{
    Q_OBJECT
public:
    Login(QWidget *parents=0);
private slots:
    bool checkUserAndPassword();
    bool changeUserPassword();
private:
    MainWindow *w;
    Admin *adw;
};
#endif // LOGIN_H
