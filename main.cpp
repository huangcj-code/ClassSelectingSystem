#include "mainwindow.h"
#include "Login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Login login;
    login.show();
    w.show();
    return a.exec();
}
