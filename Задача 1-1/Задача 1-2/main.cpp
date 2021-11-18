// Task 1-2
//
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
/**
* \brief перевод кол-во байтов в Мбайты
* \param x - байты
* \return ьегабайты
*/
double getMB(const double x);
/**
* \brief перевод кол-во байтов в Гбайты
* \param x -  байты
* \return гигабайты	
*/
double getGB(const double x);
/**
* \brief кол-во байтов в Мбайтах и Гбайтах
* \ param 
* \return 
*/
int  main()
{
	system("chcp 1251");    //input output to the console in Russian
	double bait;
	std::cout << "bytes "; std::cin >> bait;
	std::cout << " bytes = " << bait << " megabytes = " << getMB(bait) << " gigabytes = " << getGB(bait);
	return 0;
}
double getMB(const double x)
{
	const double conv_Mb = 0x100000;
	return(x / conv_Mb);
}
double getGB(const double x)
{
	const double conv_Gb = 0x40000000;
	return(x / conv_Gb);
}
