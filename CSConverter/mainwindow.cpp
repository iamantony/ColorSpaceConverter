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
	ClearAll();

	delete ui;
}

void MainWindow::Init()
{
	SetDefaults();
	FillColorTypesCombos();
}

void MainWindow::SetDefaults()
{
	Color *rgb = new Color();
	rgb->m_type = CSTypes::RGB;
	rgb->m_typeStr = "RGB";
	rgb->m_coordNames << "R:" << "G:" << "B:";
	m_colorSpaceTypes.append(rgb);

	Color *lab = new Color();
	lab->m_type = CSTypes::LAB;
	lab->m_typeStr = "LAB";
	lab->m_coordNames << "L:" << "A:" << "B:";
	m_colorSpaceTypes.append(lab);

	m_states = States::FREE;
}

void MainWindow::FillColorTypesCombos()
{
	QStringList colorSpaces;

	for ( int i = 0; i < m_colorSpaceTypes.size(); i++ )
	{
		colorSpaces.append(m_colorSpaceTypes.at(i)->m_typeStr);
	}

	ui->fromTypeCB->addItems(colorSpaces);
	ui->toTypeCB->addItems(colorSpaces);
}

void MainWindow::ClearAll()
{
	for (int i = m_colorSpaceTypes.size() - 1; i >= 0; i--)
	{
		Color *color = m_colorSpaceTypes.takeAt(i);
		delete color;
	}
}

QStringList MainWindow::FindColorSpaceCoords(const QString &t_type)
{
	for ( int i = 0; i < m_colorSpaceTypes.size(); i++ )
	{
		if ( t_type == m_colorSpaceTypes.at(i)->m_typeStr )
		{
			return m_colorSpaceTypes.at(i)->m_coordNames;
		}
	}

	qDebug() << "MainWindow::FindColorSpaceCoords(): Error - can't find list of color coords";
	QStringList emptyList;
	return emptyList;
}

void MainWindow::SetUpInputZone(const QStringList &t_coords)
{
	if ( true == t_coords.isEmpty() )
	{
		qDebug() << "MainWindow::SetUpInputZone(): Error - list of coordinates is empty";
		return;
	}

	if ( 3 != t_coords.size() )
	{
		qDebug() << "MainWindow::SetUpInputZone(): Error - wrong size of list of coordinates";
		return;
	}

	ui->firstCoordLbl->setText(t_coords.at(0));
	ui->secondCoordLbl->setText(t_coords.at(1));
	ui->thirdCoordLbl->setText(t_coords.at(2));

	ui->firstCoordLE->clear();
	ui->secondCoordLE->clear();
	ui->thirdCoordLE->clear();
}

void MainWindow::SetUpOutputZone(const QStringList &t_coords)
{
	if ( true == t_coords.isEmpty() )
	{
		qDebug() << "MainWindow::SetUpInputZone(): Error - list of coordinates is empty";
		return;
	}

	if ( 3 != t_coords.size() )
	{
		qDebug() << "MainWindow::SetUpInputZone(): Error - wrong size of list of coordinates";
		return;
	}

	ui->firstResultLbl->setText(t_coords.at(0));
	ui->secondResultLbl->setText(t_coords.at(1));
	ui->thirdResultLbl->setText(t_coords.at(2));

	ui->firstResultLE->clear();
	ui->secondResultLE->clear();
	ui->thirdResultLE->clear();
}

CSTypes::ColorSpace MainWindow::FindCSType(const QString &t_typeStr)
{
	CSTypes::ColorSpace type = CSTypes::DEFAULT_LAST;

	for ( int i = 0; i < m_colorSpaceTypes.size(); i++ )
	{
		if ( t_typeStr == m_colorSpaceTypes.at(i)->m_typeStr )
		{
			type = m_colorSpaceTypes.at(i)->m_type;
		}
	}

	return type;
}

void MainWindow::on_fromTypeCB_currentIndexChanged(const QString &arg1)
{
	QStringList coords = FindColorSpaceCoords(arg1);
	SetUpInputZone(coords);

	CSTypes::ColorSpace type = FindCSType(arg1);
	emit SignalFromCSType(type);
}

void MainWindow::on_toTypeCB_currentIndexChanged(const QString &arg1)
{
	QStringList coords = FindColorSpaceCoords(arg1);
	SetUpOutputZone(coords);

	CSTypes::ColorSpace type = FindCSType(arg1);
	emit SignalToCSType(type);
}

void MainWindow::on_convertBtn_clicked()
{
	if ( States::CALCULATIING == m_states )
	{
		return;
	}

	m_states = States::CALCULATIING;

	QStringList inputCoords;
	inputCoords.append(ui->firstCoordLE->text());
	inputCoords.append(ui->secondCoordLE->text());
	inputCoords.append(ui->thirdCoordLE->text());

	emit SignalStartConvertion(inputCoords);
}

void MainWindow::SlotRecieveConvertionResult(QStringList t_results)
{
	m_states = States::FREE;

	if ( 3 != t_results.size() )
	{
		qDebug() << "MainWindow::SlotRecieveConvertionResult(): Error - list of results has wrong size";
		return;
	}

	ui->firstResultLE->setText(t_results.at(0));
	ui->secondResultLE->setText(t_results.at(1));
	ui->thirdResultLE->setText(t_results.at(2));
}
