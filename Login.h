#ifndef LOGIN_H
#define LOGIN_H
#include "LoginFrame.h"

class Login: public QFrame,public Ui_LoginFram{
    Q_OBJECT
public:
    Login(QWidget *parents=0);
private slots:
    bool checkUserAndPassword();
    bool changeUserPassword();
};
#endif // LOGIN_H
