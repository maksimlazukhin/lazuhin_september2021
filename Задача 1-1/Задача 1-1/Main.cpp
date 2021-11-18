// Task1-1.
//зАДАНИЕ1-2
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
/**
* \ brief  вычисление заданной функции a(x,y,z)
* \ param переменные функции x,y,z
* \ return вычмсленное значение функции A
*/
double getA(const double x, const double y, const double z);
/**
* \ brief вычисление заданной функции b(x,y,z)
* \ param переменные функции x,y,z
* \ return вычмсленное значение функции B
*/
double getB(const double x, const double y, const double z);
/**
* \ brief функция  main
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
	if (ss < 0.)	// wт.к получили отрицательное число, то функция вохзвращает ошибку
	{				//поэтому если подкоренное выражение отрицательно0, то извлекаем корень из модуля и меням знак перед корнем
		ss = -pow(-ss, 1. / 3.);	// корень 3 степени из отрицательного числа существует - он отрицательный
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
