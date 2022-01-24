// Task3-1.

#include <iostream>
#include <cmath>
/**
*\ brief  The volume of the Parallelepiped
*\ param width,length,height
*\ return volume
*/
double funct(double x);
/**
*\ brief  The area of the Parallelepiped
*\ param width,length,height
*\ return  area
*/
int main()
{   
    double x;
    for (int i=0;i<=10;i++)
    {
        x = 1.0 + 0.1 * i;
        std::cout << "For x=" << x << " y= " << funct(x) << "\n";
    }
    return 1;
}
double funct(double x)
{
    return 0.1 * x * x - x * log(x);
}
