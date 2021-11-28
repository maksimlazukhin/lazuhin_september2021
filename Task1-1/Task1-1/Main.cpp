// Task1-1.

#include <cmath>
#include <iostream>
#define _USE_MATH_DEFINES
/**
* \ brief ���������� �������� ������� a(x,y,z)
* \ param ���������� ������� x,y,z
* \ return ����������� �������� ������� A
*/
double getA(const double x, const double y, const double z);
/**
* \ brief ���������� �������� ������� b(x,y,z)
* \ param ���������� ������� x,y,z
* \ return ����������� �������� ������� B
*/
double getB(const double x, const double y, const double z);
/**
* \brief ������� main
* \param
* \return 0,���� ��������� ���������
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
	return cbrt(x * y * z + abs(z * sin(y)));
}
double getB(const double x, const double y, const double z)
{
	return y * cos(x * z * sin(y)) + 3;
}