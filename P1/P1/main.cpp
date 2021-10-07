// Ex1.cpp : Defines the entry point for the console application.
//

#include <cstdio>
#include <iostream>
#include <cmath>

int  main()
{
	const double x = 2;
	const double y = 0.7;
	const double z = -1;
	std::cout<<"a="<<pow(x * y * z + abs(z * sin(y)), 1 / 3)<<" b="<< y * cos(x * z * sin(y)) + 3;
	return 0;
}
