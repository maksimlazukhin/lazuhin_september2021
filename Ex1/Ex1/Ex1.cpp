// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <cmath>

int _tmain(int argc, _TCHAR* argv[])
{
	const double x=2;
    const double y=0.7;
	const double z=-1;
	double a,b;
	a=pow(x*y*z+abs(z*sin(y)),1/3);
	b=y*cos(x*z*sin(y))+3;
//cout << "a=" << a << "b=" << b ;
    printf("a=%f b=%f", a, b);
	//scanf("%d", a);//
	return 0;
}

