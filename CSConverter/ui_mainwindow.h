/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 4. Dec 18:30:13 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QComboBox *convTypeCB;
    QLabel *typeLbl;
    QLineEdit *firstCoordLE;
    QLabel *firstCoordLbl;
    QLabel *secondCoordLbl;
    QLabel *thirdCoordLbl;
    QLineEdit *secondCoordLE;
    QLineEdit *thirdCoordLE;
    QLabel *inputLbl;
    QLabel *resultLbl;
    QLabel *secondResultLbl;
    QLineEdit *thirdResultLE;
    QLabel *thirdResultLbl;
    QLabel *firstResultLbl;
    QLineEdit *secondResultLE;
    QLineEdit *firstResultLE;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(168, 382);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        convTypeCB = new QComboBox(centralWidget);
        convTypeCB->setObjectName(QString::fromUtf8("convTypeCB"));
        convTypeCB->setGeometry(QRect(10, 30, 141, 22));
        typeLbl = new QLabel(centralWidget);
        typeLbl->setObjectName(QString::fromUtf8("typeLbl"));
        typeLbl->setGeometry(QRect(10, 10, 181, 16));
        firstCoordLE = new QLineEdit(centralWidget);
        firstCoordLE->setObjectName(QString::fromUtf8("firstCoordLE"));
        firstCoordLE->setGeometry(QRect(40, 90, 111, 20));
        firstCoordLbl = new QLabel(centralWidget);
        firstCoordLbl->setObjectName(QString::fromUtf8("firstCoordLbl"));
        firstCoordLbl->setGeometry(QRect(10, 95, 31, 16));
        secondCoordLbl = new QLabel(centralWidget);
        secondCoordLbl->setObjectName(QString::fromUtf8("secondCoordLbl"));
        secondCoordLbl->setGeometry(QRect(10, 125, 21, 16));
        thirdCoordLbl = new QLabel(centralWidget);
        thirdCoordLbl->setObjectName(QString::fromUtf8("thirdCoordLbl"));
        thirdCoordLbl->setGeometry(QRect(10, 155, 21, 16));
        secondCoordLE = new QLineEdit(centralWidget);
        secondCoordLE->setObjectName(QString::fromUtf8("secondCoordLE"));
        secondCoordLE->setGeometry(QRect(40, 120, 111, 20));
        thirdCoordLE = new QLineEdit(centralWidget);
        thirdCoordLE->setObjectName(QString::fromUtf8("thirdCoordLE"));
        thirdCoordLE->setGeometry(QRect(40, 150, 111, 20));
        inputLbl = new QLabel(centralWidget);
        inputLbl->setObjectName(QString::fromUtf8("inputLbl"));
        inputLbl->setGeometry(QRect(10, 65, 131, 16));
        resultLbl = new QLabel(centralWidget);
        resultLbl->setObjectName(QString::fromUtf8("resultLbl"));
        resultLbl->setGeometry(QRect(10, 230, 71, 16));
        secondResultLbl = new QLabel(centralWidget);
        secondResultLbl->setObjectName(QString::fromUtf8("secondResultLbl"));
        secondResultLbl->setGeometry(QRect(10, 285, 21, 16));
        thirdResultLE = new QLineEdit(centralWidget);
        thirdResultLE->setObjectName(QString::fromUtf8("thirdResultLE"));
        thirdResultLE->setGeometry(QRect(40, 310, 111, 20));
        thirdResultLbl = new QLabel(centralWidget);
        thirdResultLbl->setObjectName(QString::fromUtf8("thirdResultLbl"));
        thirdResultLbl->setGeometry(QRect(10, 315, 21, 16));
        firstResultLbl = new QLabel(centralWidget);
        firstResultLbl->setObjectName(QString::fromUtf8("firstResultLbl"));
        firstResultLbl->setGeometry(QRect(10, 255, 31, 16));
        secondResultLE = new QLineEdit(centralWidget);
        secondResultLE->setObjectName(QString::fromUtf8("secondResultLE"));
        secondResultLE->setGeometry(QRect(40, 280, 111, 20));
        firstResultLE = new QLineEdit(centralWidget);
        firstResultLE->setObjectName(QString::fromUtf8("firstResultLE"));
        firstResultLE->setGeometry(QRect(40, 250, 111, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 190, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 168, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Color Space Converter", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        typeLbl->setText(QApplication::translate("MainWindow", "Type of convertion:", 0, QApplication::UnicodeUTF8));
        firstCoordLbl->setText(QApplication::translate("MainWindow", "R:", 0, QApplication::UnicodeUTF8));
        secondCoordLbl->setText(QApplication::translate("MainWindow", "G:", 0, QApplication::UnicodeUTF8));
        thirdCoordLbl->setText(QApplication::translate("MainWindow", "B:", 0, QApplication::UnicodeUTF8));
        inputLbl->setText(QApplication::translate("MainWindow", "Input coordinates:", 0, QApplication::UnicodeUTF8));
        resultLbl->setText(QApplication::translate("MainWindow", "Get result:", 0, QApplication::UnicodeUTF8));
        secondResultLbl->setText(QApplication::translate("MainWindow", "A:", 0, QApplication::UnicodeUTF8));
        thirdResultLbl->setText(QApplication::translate("MainWindow", "B:", 0, QApplication::UnicodeUTF8));
        firstResultLbl->setText(QApplication::translate("MainWindow", "L:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Convert", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
