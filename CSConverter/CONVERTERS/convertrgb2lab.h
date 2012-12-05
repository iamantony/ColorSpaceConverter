#ifndef CONVERTRGB2LAB_H
#define CONVERTRGB2LAB_H

#include <QObject>
#include <QList>
#include <math.h>

class ConvertRgb2Lab : public QObject
{
	Q_OBJECT
public:
	explicit ConvertRgb2Lab(QObject *parent = 0);
	QList<double> Convert(const int &t_Red,
						  const int &t_Green,
						  const int &t_Blue);

signals:

public slots:

};

#endif // CONVERTRGB2LAB_H
