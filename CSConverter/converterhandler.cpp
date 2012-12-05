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

}
