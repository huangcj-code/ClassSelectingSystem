#include "ChangePasswordDialogUi.h"

class ChangePasswordDialog: public QDialog,public Ui_ChangePasswordDialog{
    Q_OBJECT
public:
    ChangePasswordDialog(QWidget *parents=0);
private slots:
    void ChangePassword();
};
