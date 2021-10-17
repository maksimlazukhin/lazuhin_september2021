// Task1-1.
//
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
/**
* \ breaf  a(x,y,z)
* \ param x,y,z
* \ return A
*/
double getA(const double x, const double y, const double z);
/**
* \ breaf  b(x,y,z)
* \ param x,y,z
* \ return B
*/
double getB(const double x, const double y, const double z);
/**
* \ breaf  main
* \ param 
* \return 0 if success
*/
int  main()
{
	const double x = 2;
	const double y = 0.7;
	const double z = -1;
	std::cout << "x = " << x << " y = " << y << " z = " << z << " a = " << getA(x, y, z) << " b = " << getB(x, y, z);
	return 0;
}
double getA(const double x, const double y, const double z)
{
	double ss;
	ss = x * y * z + abs(z * sin(y));
	if (ss < 0.)	// when extracting the root of the 3rd degree from the negative - an error
	{				//in excel incorrectly calculates negative numbers. we take the root of a positive number
		ss = -pow(-ss, 1. / 3.);	// then we change the sign
	}
	else
	{
		ss = pow(ss, 1. / 3. );
	}
	return ss;
}
double getB(const double x, const double y, const double z)
{
	return y * cos(x * z * sin(y)) + 3;
}