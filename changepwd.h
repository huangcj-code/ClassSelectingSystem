#ifndef CHAMGEPWD_H
#define CHAMGEPWD_H


#include "ChangePasswordDialogUi.h"

class changepwd: public QDialog,public Ui_ChangePasswordDialog{
    Q_OBJECT
public:
    changepwd(QWidget *parents=0);
private slots:
    void ChangePassword();
};

#endif // CHAMGEPWD_H
