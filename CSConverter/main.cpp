#include <QtGui/QApplication>
#include "mainwindow.h"
#include "converterhandler.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ConverterHandler convHandler;
	MainWindow w;

	QObject::connect(&w, SIGNAL(SignalFromCSType(CSTypes::ColorSpace)),
			&convHandler, SLOT(SlotGetFromCSType(CSTypes::ColorSpace)));

	QObject::connect(&w, SIGNAL(SignalToCSType(CSTypes::ColorSpace)),
			&convHandler, SLOT(SlotGetToCSType(CSTypes::ColorSpace)));

	QObject::connect(&w, SIGNAL(SignalStartConvertion(QStringList)),
			&convHandler, SLOT(SlotReciveCoordsToConvert(QStringList)));

	QObject::connect(&convHandler, SIGNAL(SignalSendResultCoords(QStringList)),
			&w, SLOT(SlotRecieveConvertionResult(QStringList)));

	QObject::connect(&convHandler, SIGNAL(SignalConvertionFailed()),
			&w, SLOT(SlotConvertionFailed()));

	w.show();

	return a.exec();
}
