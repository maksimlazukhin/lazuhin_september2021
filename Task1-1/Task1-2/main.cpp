// Task 1-2
//
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
/**
* \ breaf bytes to megabytes
* \ param x - bytes
* \return megabytes
*/
double getMB(const double x);
/**
* \ breaf bytes to gigabytes
* \ param x -  bytes
* \return gigabytes
*/
double getGB(const double x);
/**
* \ breaf bytes to megabytes and gigabytes
* \ param 
* \return 
*/
int  main()
{
	system("chcp 1251");    //input output to the console in Russian
	double b;
	std::cout << "bytes "; std::cin >> b;
	std::cout << " bytes = " << b << " megabytes = " << getMB(b) << " gigabytes ò= " << getGB(b);
	return 0;
}
double getMB(const double x)
{
	const double A = 1024 * 1024;
	return(x / A);
}
double getGB(const double x)
{
	const double A = 1024 * 1024 * 1024;
	return(x / A);
}
