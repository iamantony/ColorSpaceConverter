#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>
#include <QPushButton>
#include <QList>
#include <QDebug>
#include "DEFINES/enums.h"
#include "DEFINES/commons.h"

namespace Ui {
	class MainWindow;
}

namespace States
{
	enum ProgStates
	{
		FREE = 0,
		CALCULATIING,
		DEFAULT_LAST
	};
}

struct Color
{
	CSTypes::ColorSpace m_type;
	QString m_typeStr;
	QStringList m_coordNames;
};

class MainWindow : public QMainWindow
{
	Q_OBJECT

	// == DATA ==
private:
	Ui::MainWindow *ui;
	QList<Color *> m_colorSpaceTypes;
	States::ProgStates m_states;

	// == METHODS ==
public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	void Init();
	void SetDefaults();
	void FillColorTypesCombos();
	void ClearAll();
	QStringList FindColorSpaceCoords(const QString &t_type);
	void SetUpInputZone(const QStringList &t_coords);
	void SetUpOutputZone(const QStringList &t_coords);
	CSTypes::ColorSpace FindCSType(const QString &t_typeStr);

signals:
	void SignalFromCSType(CSTypes::ColorSpace t_type);
	void SignalToCSType(CSTypes::ColorSpace t_type);
	void SignalStartConvertion(QStringList t_inputValues);

public slots:
	void SlotRecieveConvertionResult(QStringList t_results);
	void SlotConvertionFailed();

private slots:
	void on_fromTypeCB_currentIndexChanged(const QString &arg1);
	void on_toTypeCB_currentIndexChanged(const QString &arg1);
	void on_convertBtn_clicked();

};

#endif // MAINWINDOW_H
