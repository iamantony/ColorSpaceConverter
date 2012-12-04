#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>
#include <QPushButton>
#include <QList>
#include <QDebug>

namespace Ui {
	class MainWindow;
}

namespace CSTypes
{
	enum ColorSpace
	{
		RGB = 0,
		LAB,
		DEFAULT_LAST
	};
}

struct Color
{
	CSTypes::ColorSpace m_type;
	QString m_typeStr;
	QList<QString> m_coordNames;
};

class MainWindow : public QMainWindow
{
	Q_OBJECT

	// == DATA ==
private:
	Ui::MainWindow *ui;

	QComboBox *m_fromCB;
	QComboBox *m_toCB;

	QLabel *m_firstCoordLbl;
	QLabel *m_secondCoordLbl;
	QLabel *m_thirdCoordLbl;
	QLineEdit *m_firstCoordLE;
	QLineEdit *m_secondCoordLE;
	QLineEdit *m_thirdCoordLE;

	QLabel *m_firstResultLbl;
	QLabel *m_secondResultLbl;
	QLabel *m_thirdResultLbl;
	QLineEdit *m_firstResultLE;
	QLineEdit *m_secondResultLE;
	QLineEdit *m_thirdResultLE;

	QPushButton *m_convertBtn;

	QList<Color *> m_colorSpaceTypes;


	// == METHODS ==
public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	void Init();
	void SetDefaults();
	void FindGUIElements();
	void FillColorTypesCombos();

};

#endif // MAINWINDOW_H
