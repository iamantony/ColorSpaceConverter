#ifndef CONVERTERHANDLER_H
#define CONVERTERHANDLER_H

#include <QObject>
#include <QStringList>
#include <QDebug>
#include "DEFINES/enums.h"
#include "DEFINES/commons.h"
#include "CONVERTERS/convertrgb2lab.h"
#include "CONVERTERS/convertlab2rgb.h"

class ConverterHandler : public QObject
{
	Q_OBJECT

	// == DATA ==
private:
	CSTypes::ColorSpace m_fromCS;
	CSTypes::ColorSpace m_toCS;
	QStringList m_inputValues;

	// == METHODS ==
public:
	explicit ConverterHandler(QObject *parent = 0);

private:
	void SetDefaults();
	void ChooseConverter();
	void ChooseConverterForRGB();
	void ChooseConverterForLAB();
	void NullConverter();
	void RGB2LAB();
	void LAB2RGB();

signals:
	void SignalSendResultCoords(QStringList t_results);
	void SignalConvertionFailed();

public slots:
	void SlotGetFromCSType(CSTypes::ColorSpace t_type);
	void SlotGetToCSType(CSTypes::ColorSpace t_type);
	void SlotReciveCoordsToConvert(QStringList t_input);
};

#endif // CONVERTERHANDLER_H
