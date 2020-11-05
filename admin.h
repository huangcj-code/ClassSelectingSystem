#ifndef ADMIN_H
#define ADMIN_H
#include "Admin_UI.h"
#include "global.h"
class Admin:public QMainWindow,public UiMainWindow
{
    Q_OBJECT
public:
    Admin(QWidget *parent=0);
private slots:
    void editStudentSlot();
    void editTeacherSlot();
    void editTeachingSecretarySlot();
    void editAdminSlot();
};

#endif // ADMIN_H
