#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	Init();
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::Init()
{
	SetDefaults();
	FindGUIElements();
	FillColorTypesCombos();
}

void MainWindow::SetDefaults()
{
	Color *rgb = new Color();
	rgb->m_type = CSTypes::RGB;
	rgb->m_typeStr = "RGB";
	rgb->m_coordNames << "R" << "G" << "B";
	m_colorSpaceTypes.append(rgb);

	Color *lab = new Color();
	lab->m_type = CSTypes::LAB;
	lab->m_typeStr = "LAB";
	lab->m_coordNames << "L" << "A" << "B";
	m_colorSpaceTypes.append(lab);
}

void MainWindow::FindGUIElements()
{
	// Find Combo Boxes
	QList<QComboBox *> fromCBList = this->findChildren<QComboBox *>("fromTypeCB");
	if ( true == fromCBList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find combo box";
		this->close();
	}
	else
	{
		m_fromCB = fromCBList.at(0);
	}

	QList<QComboBox *> toCBList = this->findChildren<QComboBox *>("fromTypeCB");
	if ( true == toCBList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find combo box";
		this->close();
	}
	else
	{
		m_toCB = toCBList.at(0);
	}

	// Find labels for input color coordinates
	QList<QLabel *> firstCoordLblList = this->findChildren<QLabel *>("firstCoordLbl");
	if ( true == firstCoordLblList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find label";
		this->close();
	}
	else
	{
		m_firstCoordLbl = firstCoordLblList.at(0);
	}

	QList<QLabel *> secondCoordLblList = this->findChildren<QLabel *>("secondCoordLbl");
	if ( true == secondCoordLblList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find label";
		this->close();
	}
	else
	{
		m_secondCoordLbl = secondCoordLblList.at(0);
	}

	QList<QLabel *> thirdCoordLblList = this->findChildren<QLabel *>("thirdCoordLbl");
	if ( true == thirdCoordLblList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find label";
		this->close();
	}
	else
	{
		m_thirdCoordLbl = thirdCoordLblList.at(0);
	}

	// Find line edits for input coords
	QList<QLineEdit *> firstCoordLEList = this->findChildren<QLineEdit *>("firstCoordLE");
	if ( true == firstCoordLEList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find line edit";
		this->close();
	}
	else
	{
		m_firstCoordLE = firstCoordLEList.at(0);
	}

	QList<QLineEdit *> secondCoordLEList = this->findChildren<QLineEdit *>("secondCoordLE");
	if ( true == secondCoordLEList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find line edit";
		this->close();
	}
	else
	{
		m_secondCoordLE = secondCoordLEList.at(0);
	}

	QList<QLineEdit *> thirdCoordLEList = this->findChildren<QLineEdit *>("thirdCoordLE");
	if ( true == thirdCoordLEList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find line edit";
		this->close();
	}
	else
	{
		m_thirdCoordLE = thirdCoordLEList.at(0);
	}

	// Find labels for reslut color coordinates
	QList<QLabel *> firstResultLblList = this->findChildren<QLabel *>("firstResultLbl");
	if ( true == firstResultLblList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find label";
		this->close();
	}
	else
	{
		m_firstResultLbl = firstResultLblList.at(0);
	}

	QList<QLabel *> secondResultLblList = this->findChildren<QLabel *>("secondResultLbl");
	if ( true == secondResultLblList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find label";
		this->close();
	}
	else
	{
		m_secondResultLbl = secondResultLblList.at(0);
	}

	QList<QLabel *> thirdResultLblList = this->findChildren<QLabel *>("thirdResultLbl");
	if ( true == thirdResultLblList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find label";
		this->close();
	}
	else
	{
		m_thirdResultLbl = thirdResultLblList.at(0);
	}

	// Find line edits for result coords
	QList<QLineEdit *> firstResultLEList = this->findChildren<QLineEdit *>("firstResultLE");
	if ( true == firstResultLEList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find line edit";
		this->close();
	}
	else
	{
		m_firstResultLE = firstResultLEList.at(0);
	}

	QList<QLineEdit *> secondResultLEList = this->findChildren<QLineEdit *>("secondResultLE");
	if ( true == secondResultLEList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find line edit";
		this->close();
	}
	else
	{
		m_secondResultLE = secondResultLEList.at(0);
	}

	QList<QLineEdit *> thirdResultLEList = this->findChildren<QLineEdit *>("thirdResultLE");
	if ( true == thirdResultLEList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find line edit";
		this->close();
	}
	else
	{
		m_thirdResultLE = thirdResultLEList.at(0);
	}

	// Find button
	QList<QPushButton *> startBtnList = this->findChildren<QPushButton *>("convertBtn");
	if ( true == startBtnList.isEmpty() )
	{
		qDebug() << "MainWindow::FindGUIElements(): Error - can't find push button";
		this->close();
	}
	else
	{
		m_convertBtn = startBtnList.at(0);
	}
}


void MainWindow::FillColorTypesCombos()
{

}
