#include "convertlab2rgb.h"

ConvertLab2Rgb::ConvertLab2Rgb(QObject *parent) :
	QObject(parent)
{
}

QList<int> ConvertLab2Rgb::Convert(const double &t_LL,
								   const double &t_AA,
								   const double &t_BB)
{
	double L = 0.5774*t_LL + 0.4082*t_AA + 0.7071*t_BB;
	double M = 0.5774*t_LL + 0.4082*t_AA - 0.7071*t_BB;
	double S = 0.5774*t_LL - 0.8165*t_AA;

	L = pow(10, L);
	M = pow(10, M);
	S = pow(10, S);

	int R = 4.4679*L - 3.5873*M + 0.1193*S;
	int G = (-1.2186)*L + 2.3809*M - 0.1624*S;
	int B = 0.0497*L - 0.2439*M + 1.2045*S;

	if(R < 0)
	{
		R = 0;
	}
	else if( 255 < R )
	{
		R = 255;
	}

	if(G < 0)
	{
		G = 0;
	}
	else if( 255 < G )
	{
		G = 255;
	}

	if(B < 0)
	{
		B = 0;
	}
	else if( 255 < B )
	{
		B = 255;
	}

	QList<int> massRGB;
	massRGB << R << G << B;

	return massRGB;
}
