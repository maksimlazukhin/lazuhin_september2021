// P1-2.cpp : Defines the entry point for the console application.
//
#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;
double getMB(double x);
double getGB(double x);
//�������� ����� ���������� � ������. �������� ��� � ���������� � ����������.//
int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 1234567;
	cout << "������� �����  � ������ = ";
	cin >> a;
	cout << a << " ���� = " << getMB(a) << " �������� = " << getGB(a) << " �������� ";
	return 0;
}
double getMB(double x)
{
	return x / 1024 / 1024;
}double getGB(double x)
{
	return x / 1024 / 1024 / 1024;
}