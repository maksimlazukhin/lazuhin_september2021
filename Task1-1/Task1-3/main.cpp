// Task 1-3
//
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
/**
* \ breaf serial connection of 3 resistors
* \ param r1,r2,r3 - resistors
* \return equivalent resistor
*/
double sop(const double r1,const double r2,const double r3);
/**
* \ breaf input 3 resistors
* \ param 
* \return equivalent resistor
*/
int main()
{
	double r1, r2, r3;
	std::cout << "r1="; std::cin >> r1; std::cout << "r2="; std::cin >> r2; std::cout << "r3="; std::cin >> r3;
	std::cout << "R=" << sop(r1, r2, r3);
	return 0;
}
double sop(const double r1, const double r2, const double r3)
{
	return(r1 + r2 + r3);
}
