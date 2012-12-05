/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 5. Dec 15:25:21 2012
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
    QComboBox *fromTypeCB;
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
    QPushButton *convertBtn;
    QLabel *fromLbl;
    QLabel *toLbl;
    QComboBox *toTypeCB;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(168, 434);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        fromTypeCB = new QComboBox(centralWidget);
        fromTypeCB->setObjectName(QString::fromUtf8("fromTypeCB"));
        fromTypeCB->setGeometry(QRect(70, 30, 81, 22));
        typeLbl = new QLabel(centralWidget);
        typeLbl->setObjectName(QString::fromUtf8("typeLbl"));
        typeLbl->setGeometry(QRect(10, 10, 181, 16));
        firstCoordLE = new QLineEdit(centralWidget);
        firstCoordLE->setObjectName(QString::fromUtf8("firstCoordLE"));
        firstCoordLE->setGeometry(QRect(40, 140, 111, 20));
        firstCoordLbl = new QLabel(centralWidget);
        firstCoordLbl->setObjectName(QString::fromUtf8("firstCoordLbl"));
        firstCoordLbl->setGeometry(QRect(10, 145, 31, 16));
        secondCoordLbl = new QLabel(centralWidget);
        secondCoordLbl->setObjectName(QString::fromUtf8("secondCoordLbl"));
        secondCoordLbl->setGeometry(QRect(10, 175, 21, 16));
        thirdCoordLbl = new QLabel(centralWidget);
        thirdCoordLbl->setObjectName(QString::fromUtf8("thirdCoordLbl"));
        thirdCoordLbl->setGeometry(QRect(10, 205, 21, 16));
        secondCoordLE = new QLineEdit(centralWidget);
        secondCoordLE->setObjectName(QString::fromUtf8("secondCoordLE"));
        secondCoordLE->setGeometry(QRect(40, 170, 111, 20));
        thirdCoordLE = new QLineEdit(centralWidget);
        thirdCoordLE->setObjectName(QString::fromUtf8("thirdCoordLE"));
        thirdCoordLE->setGeometry(QRect(40, 200, 111, 20));
        inputLbl = new QLabel(centralWidget);
        inputLbl->setObjectName(QString::fromUtf8("inputLbl"));
        inputLbl->setGeometry(QRect(10, 115, 131, 16));
        resultLbl = new QLabel(centralWidget);
        resultLbl->setObjectName(QString::fromUtf8("resultLbl"));
        resultLbl->setGeometry(QRect(10, 280, 71, 16));
        secondResultLbl = new QLabel(centralWidget);
        secondResultLbl->setObjectName(QString::fromUtf8("secondResultLbl"));
        secondResultLbl->setGeometry(QRect(10, 335, 21, 16));
        thirdResultLE = new QLineEdit(centralWidget);
        thirdResultLE->setObjectName(QString::fromUtf8("thirdResultLE"));
        thirdResultLE->setGeometry(QRect(40, 360, 111, 20));
        thirdResultLbl = new QLabel(centralWidget);
        thirdResultLbl->setObjectName(QString::fromUtf8("thirdResultLbl"));
        thirdResultLbl->setGeometry(QRect(10, 365, 21, 16));
        firstResultLbl = new QLabel(centralWidget);
        firstResultLbl->setObjectName(QString::fromUtf8("firstResultLbl"));
        firstResultLbl->setGeometry(QRect(10, 305, 31, 16));
        secondResultLE = new QLineEdit(centralWidget);
        secondResultLE->setObjectName(QString::fromUtf8("secondResultLE"));
        secondResultLE->setGeometry(QRect(40, 330, 111, 20));
        firstResultLE = new QLineEdit(centralWidget);
        firstResultLE->setObjectName(QString::fromUtf8("firstResultLE"));
        firstResultLE->setGeometry(QRect(40, 300, 111, 20));
        convertBtn = new QPushButton(centralWidget);
        convertBtn->setObjectName(QString::fromUtf8("convertBtn"));
        convertBtn->setGeometry(QRect(50, 240, 75, 23));
        fromLbl = new QLabel(centralWidget);
        fromLbl->setObjectName(QString::fromUtf8("fromLbl"));
        fromLbl->setGeometry(QRect(10, 35, 46, 13));
        toLbl = new QLabel(centralWidget);
        toLbl->setObjectName(QString::fromUtf8("toLbl"));
        toLbl->setGeometry(QRect(10, 75, 46, 13));
        toTypeCB = new QComboBox(centralWidget);
        toTypeCB->setObjectName(QString::fromUtf8("toTypeCB"));
        toTypeCB->setGeometry(QRect(70, 70, 81, 22));
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
        QWidget::setTabOrder(fromTypeCB, toTypeCB);
        QWidget::setTabOrder(toTypeCB, firstCoordLE);
        QWidget::setTabOrder(firstCoordLE, secondCoordLE);
        QWidget::setTabOrder(secondCoordLE, thirdCoordLE);
        QWidget::setTabOrder(thirdCoordLE, convertBtn);
        QWidget::setTabOrder(convertBtn, firstResultLE);
        QWidget::setTabOrder(firstResultLE, secondResultLE);
        QWidget::setTabOrder(secondResultLE, thirdResultLE);

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
        convertBtn->setText(QApplication::translate("MainWindow", "Convert", 0, QApplication::UnicodeUTF8));
        fromLbl->setText(QApplication::translate("MainWindow", "From:", 0, QApplication::UnicodeUTF8));
        toLbl->setText(QApplication::translate("MainWindow", "To:", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
