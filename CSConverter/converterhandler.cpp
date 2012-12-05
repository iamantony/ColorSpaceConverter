#include "converterhandler.h"

ConverterHandler::ConverterHandler(QObject *parent) :
	QObject(parent)
{
	SetDefaults();
}

void ConverterHandler::SetDefaults()
{
	m_fromCS = CSTypes::RGB;
	m_toCS = CSTypes::RGB;
	m_inputValues.clear();
}

void ConverterHandler::ChooseConverter()
{
	switch (m_fromCS)
	{
		case CSTypes::RGB:
			ChooseConverterForRGB();
			break;
		case CSTypes::LAB:
			ChooseConverterForLAB();
			break;
		default:
		{
			qDebug() << "ConverterHandler::ChooseConverter(): Error - undefined color space";
			NullConverter();
		}
	}
}

void ConverterHandler::ChooseConverterForRGB()
{
	switch (m_toCS)
	{
		case CSTypes::RGB:
			NullConverter();
			break;
		case CSTypes::LAB:
			RGB2LAB();
			break;
		default:
		{
			qDebug() << "ConverterHandler::ChooseConverterForRGB(): Error - undefined color space";
			NullConverter();
		}
	}
}

void ConverterHandler::ChooseConverterForLAB()
{
	switch (m_toCS)
	{
		case CSTypes::RGB:
			LAB2RGB();
			break;
		case CSTypes::LAB:
			NullConverter();
			break;
		default:
		{
			qDebug() << "ConverterHandler::ChooseConverterForLAB(): Error - undefined color space";
			NullConverter();
		}
	}
}

void ConverterHandler::RGB2LAB()
{
	if ( (true == m_inputValues.isEmpty()) || ( 3 != m_inputValues.size() ) )
	{
		qDebug() << "ConverterHandler::RGB2LAB(): Error - invalid arguments";
		emit SignalConvertionFailed();
		return;
	}

	bool firstOk = false;
	bool secondOk = false;
	bool thirdOk = false;

	int red = m_inputValues.at(FIRST).toInt(&firstOk);
	int green = m_inputValues.at(SECOND).toInt(&secondOk);
	int blue = m_inputValues.at(THIRD).toInt(&thirdOk);

	if ( (false == firstOk) ||
		 (false == secondOk) ||
		 (false == thirdOk) )
	{
		qDebug() << "ConverterHandler::RGB2LAB(): Error - can't convert coords";
		emit SignalConvertionFailed();
		return;
	}

	ConvertRgb2Lab *converter = new ConvertRgb2Lab();
	QList<double> result = converter->Convert(red, green, blue);
	delete converter;
	if ( (true == result.isEmpty()) || ( 3 != result.size() ) )
	{
		qDebug() << "ConverterHandler::RGB2LAB(): Error - convertion failed";
		emit SignalConvertionFailed();
		return;
	}

	QStringList resultStrings;
	resultStrings << QString::number(result.at(FIRST)) <<
					 QString::number(result.at(SECOND)) <<
					 QString::number(result.at(THIRD));

	emit SignalSendResultCoords(resultStrings);
}

void ConverterHandler::LAB2RGB()
{
	if ( (true == m_inputValues.isEmpty()) || ( 3 != m_inputValues.size() ) )
	{
		qDebug() << "ConverterHandler::LAB2RGB(): Error - invalid arguments";
		emit SignalConvertionFailed();
		return;
	}

	bool firstOk = false;
	bool secondOk = false;
	bool thirdOk = false;

	double L = m_inputValues.at(FIRST).toDouble(&firstOk);
	double A = m_inputValues.at(SECOND).toDouble(&secondOk);
	double B = m_inputValues.at(THIRD).toDouble(&thirdOk);

	if ( (false == firstOk) ||
		 (false == secondOk) ||
		 (false == thirdOk) )
	{
		qDebug() << "ConverterHandler::LAB2RGB(): Error - can't convert coords";
		emit SignalConvertionFailed();
		return;
	}

	ConvertLab2Rgb *converter = new ConvertLab2Rgb();
	QList<int> result = converter->Convert(L, A, B);
	if ( (true == result.isEmpty()) || ( 3 != result.size() ) )
	{
		qDebug() << "ConverterHandler::LAB2RGB(): Error - convertion failed";
		emit SignalConvertionFailed();
		return;
	}

	QStringList resultStrings;
	resultStrings << QString::number(result.at(FIRST)) <<
					 QString::number(result.at(SECOND)) <<
					 QString::number(result.at(THIRD));

	emit SignalSendResultCoords(resultStrings);
}

// Don't convert coords
void ConverterHandler::NullConverter()
{
	emit SignalSendResultCoords(m_inputValues);
}

void ConverterHandler::SlotGetFromCSType(CSTypes::ColorSpace t_type)
{
	m_fromCS = t_type;
}

void ConverterHandler::SlotGetToCSType(CSTypes::ColorSpace t_type)
{
	m_toCS = t_type;
}

void ConverterHandler::SlotReciveCoordsToConvert(QStringList t_input)
{
	if ( true == t_input.isEmpty() )
	{
		qDebug() << "ConverterHandler::SlotReciveCoordsToConvert(): Error - invalid arguments";
		emit SignalConvertionFailed();
		return;
	}

	m_inputValues = t_input;

	ChooseConverter();
}
