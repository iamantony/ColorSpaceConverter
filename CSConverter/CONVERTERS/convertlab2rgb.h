#ifndef CONVERTLAB2RGB_H
#define CONVERTLAB2RGB_H

#include <QObject>
#include <math.h>

class ConvertLab2Rgb : public QObject
{
	Q_OBJECT
public:
	explicit ConvertLab2Rgb(QObject *parent = 0);
	QList<int> Convert(const double &t_LL,
					   const double &t_AA,
					   const double &t_BB);
};

#endif // CONVERTLAB2RGB_H
