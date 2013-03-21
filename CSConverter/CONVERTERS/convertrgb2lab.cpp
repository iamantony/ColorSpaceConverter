#include "convertrgb2lab.h"

ConvertRgb2Lab::ConvertRgb2Lab(QObject *parent) :
	QObject(parent)
{

}

QList<double> ConvertRgb2Lab::Convert(const int &t_Red,
									  const int &t_Green,
									  const int &t_Blue)
{
	int R = t_Red;
	if(R < 0)
	{
		R = 0;
	}
	else if( 255 < R )
	{
		R = 255;
	}

	int G = t_Green;
	if(G < 0)
	{
		G = 0;
	}
	else if( 255 < G )
	{
		G = 255;
	}

	int B = t_Blue;
	if(B < 0)
	{
		B = 0;
	}
	else if( 255 < B )
	{
		B = 255;
	}

	double L = 0.3811*R + 0.5783*G + 0.0402*B;
	double M = 0.1967*R + 0.7244*G + 0.0782*B;
	double S = 0.0241*R + 0.1288*G + 0.8444*B;

	if ( L < 0.01 )
	{
		L = 0.01;
	}

	if ( M < 0.01 )
	{
		M = 0.01;
	}

	if ( S < 0.01 )
	{
		S = 0.01;
	}

	L = log10(L);
	M = log10(M);
	S = log10(S);

	double LL = 0.5774*L + 0.5774*M + 0.5774*S;
	double AA = 0.4082*L + 0.4082*M - 0.8165*S;
	double BB = 0.7071*L - 0.7071*M;

	if ( LL < 0.01 )
	{
		LL = 0;
	}

	QList<double> massLAB;
	massLAB << LL << AA << BB;

	return massLAB;
}
