// Task 1-2
//
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
const double Kconv_Gb = 0x40000000;
const double Kconv_Mb = 0x100000;
/**
* \brief ������� ���-�� ������ � ������
* \param bytes - �����,������� �� ����� ���������� � ���������
* \return ���������
*/
double getMB(const double bytes);
/**
* \brief ������� ���-�� ������ � ������
* \param bytes - �����,������� �� ����� ���������� � ���������
* \return ���������
*/
double getGB(const double bytes);
/**
* \ brief ������� main
* \ param
* \return return 0,���� ��������� ���������
*/
int  main()
{
	system("chcp 1251"); //input output to the console in Russian 
	double bytes;
	std::cout << "bytes "; std::cin >> bytes;
	std::cout << " bytes = " << bytes << " megabytes = " << getMB(bytes) << " gigabytes = " << getGB(bytes);
	return 0;
}
double getMB(const double bytes)
{
	return(bytes / Kconv_Mb);
}
double getGB(const double bytes)
{
	return(bytes / Kconv_Gb);
}
