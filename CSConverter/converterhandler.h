#ifndef CONVERTERHANDLER_H
#define CONVERTERHANDLER_H

#include <QObject>
#include "DEFINES/enums.h"
#include "CONVERTERS/defaultconverter.h"

class ConverterHandler : public QObject
{
	Q_OBJECT

	// == DATA ==
private:
	CSTypes::ColorSpace m_fromCS;
	CSTypes::ColorSpace m_toCS;


	// == METHODS ==
public:
	explicit ConverterHandler(QObject *parent = 0);

private:
	void SetDefaults();

signals:
	void SignalSendResultCoords(QStringList t_results);

public slots:
	void SlotGetFromCSType(CSTypes::ColorSpace t_type);
	void SlotGetToCSType(CSTypes::ColorSpace t_type);
	void SlotReciveCoordsToConvert(QStringList t_input);
};

#endif // CONVERTERHANDLER_H
