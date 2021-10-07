// P1-2.cpp : Defines the entry point for the console application.
//
#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;
double getMB(double x);
double getGB(double x);
//Известен объем информации в байтах. Выразить его в мегабайтах и гигабайтах.//
int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 1234567;
	cout << "Введите объём  в байтах = ";
	cin >> a;
	cout << a << " байт = " << getMB(a) << " мегабайт = " << getGB(a) << " гигобайт ";
	return 0;
}
double getMB(double x)
{
	return x / 1024 / 1024;
}double getGB(double x)
{
	return x / 1024 / 1024 / 1024;
}