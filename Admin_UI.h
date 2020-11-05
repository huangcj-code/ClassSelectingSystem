/********************************************************************************
** Form generated from reading UI file 'Admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ADMIN_UI_H
#define ADMIN_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class UiMainWindow
{
public:
    QAction *SaveFileAction;
    QAction *RunFileAction;
    QAction *AdministratorAction;
    QAction *StudentAction;
    QAction *TeacherAction;
    QAction *TeachingSecretaryAction;
    QWidget *centralwidget;
    QTableWidget *StudentTableWidget;
    QTableWidget *TeacherTableWidget;
    QTableWidget *tableWidget;
    QTableWidget *TeachingSecretaryViewTable;
    QMenuBar *menubar;
    QMenu *EditMenu;
    QMenu *FileMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        SaveFileAction = new QAction(MainWindow);
        SaveFileAction->setObjectName(QString::fromUtf8("SaveFileAction"));
        RunFileAction = new QAction(MainWindow);
        RunFileAction->setObjectName(QString::fromUtf8("RunFileAction"));
        AdministratorAction = new QAction(MainWindow);
        AdministratorAction->setObjectName(QString::fromUtf8("AdministratorAction"));
        StudentAction = new QAction(MainWindow);
        StudentAction->setObjectName(QString::fromUtf8("StudentAction"));
        TeacherAction = new QAction(MainWindow);
        TeacherAction->setObjectName(QString::fromUtf8("TeacherAction"));
        TeachingSecretaryAction = new QAction(MainWindow);
        TeachingSecretaryAction->setObjectName(QString::fromUtf8("TeachingSecretaryAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        StudentTableWidget = new QTableWidget(centralwidget);
        if (StudentTableWidget->columnCount() < 6)
            StudentTableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        StudentTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        StudentTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        StudentTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        StudentTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        StudentTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        StudentTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        StudentTableWidget->setObjectName(QString::fromUtf8("StudentTableWidget"));
        StudentTableWidget->setGeometry(QRect(0, 0, 811, 591));
        StudentTableWidget->setColumnWidth(0,100);
        StudentTableWidget->setColumnWidth(1,100);
        StudentTableWidget->setColumnWidth(2,100);
        StudentTableWidget->setColumnWidth(3,100);
        StudentTableWidget->setColumnWidth(4,100);
        StudentTableWidget->setColumnWidth(5,100);
        TeacherTableWidget = new QTableWidget(centralwidget);
        if (TeacherTableWidget->columnCount() < 3)
            TeacherTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TeacherTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        TeacherTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        TeacherTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        TeacherTableWidget->setObjectName(QString::fromUtf8("TeacherTableWidget"));
        TeacherTableWidget->setGeometry(QRect(0, 0, 811, 581));
        TeacherTableWidget->setColumnWidth(0,200);
        TeacherTableWidget->setColumnWidth(1,200);
        TeacherTableWidget->setColumnWidth(2,200);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 801, 561));
        tableWidget->setColumnWidth(0,200);
        tableWidget->setColumnWidth(1,200);
        tableWidget->setColumnWidth(2,200);
        TeachingSecretaryViewTable = new QTableWidget(centralwidget);
        if (TeachingSecretaryViewTable->columnCount() < 3)
            TeachingSecretaryViewTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        TeachingSecretaryViewTable->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        TeachingSecretaryViewTable->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        TeachingSecretaryViewTable->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        TeachingSecretaryViewTable->setObjectName(QString::fromUtf8("TeachingSecretaryViewTable"));
        TeachingSecretaryViewTable->setGeometry(QRect(0, 0, 801, 561));
        TeachingSecretaryViewTable->setColumnWidth(0,200);
        TeachingSecretaryViewTable->setColumnWidth(1,200);
        TeachingSecretaryViewTable->setColumnWidth(2,200);
        MainWindow->setCentralWidget(centralwidget);
        TeacherTableWidget->raise();
        TeachingSecretaryViewTable->raise();
        tableWidget->raise();
        StudentTableWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        EditMenu = new QMenu(menubar);
        EditMenu->setObjectName(QString::fromUtf8("EditMenu"));
        FileMenu = new QMenu(menubar);
        FileMenu->setObjectName(QString::fromUtf8("FileMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(EditMenu->menuAction());
        menubar->addAction(FileMenu->menuAction());
        EditMenu->addAction(AdministratorAction);
        EditMenu->addAction(StudentAction);
        EditMenu->addAction(TeacherAction);
        EditMenu->addAction(TeachingSecretaryAction);
        FileMenu->addAction(SaveFileAction);
        FileMenu->addAction(RunFileAction);
        TeacherTableWidget->setVisible(false);
        StudentTableWidget->setVisible(false);
        TeachingSecretaryViewTable->setVisible(false);
        tableWidget->setVisible(false);
        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        SaveFileAction->setText(QApplication::translate("MainWindow", "\350\275\254\345\202\250\344\270\272sql\346\226\207\344\273\266", nullptr));
        RunFileAction->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214sql\346\226\207\344\273\266", nullptr));
        AdministratorAction->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        StudentAction->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237", nullptr));
        TeacherAction->setText(QApplication::translate("MainWindow", "\350\200\201\345\270\210", nullptr));
        TeachingSecretaryAction->setText(QApplication::translate("MainWindow", "\346\225\231\345\255\246\347\247\230\344\271\246", nullptr));
        QTableWidgetItem *___qtablewidgetitem = StudentTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = StudentTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = StudentTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = StudentTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = StudentTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\255\246\351\231\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = StudentTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\271\264\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = TeacherTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\346\225\231\345\270\210\345\267\245\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = TeacherTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\346\225\231\345\270\210\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = TeacherTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\345\267\245\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = TeachingSecretaryViewTable->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\346\225\231\345\255\246\347\247\230\344\271\246\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = TeachingSecretaryViewTable->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\346\225\231\345\255\246\347\247\230\344\271\246\345\267\245\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = TeachingSecretaryViewTable->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\345\257\206\347\240\201", nullptr));
        EditMenu->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        FileMenu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public UiMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ADMIN_UI_H
