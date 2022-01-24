// Task3-3.

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
int fact(int k);
double ryd(double x);
int main()
{
    double x=0.1;
    while (x < 1)
    {
    std::cout << "x="<<x<<" y="<<funct(x)<<" ryd="<<ryd(x)<<"\n";
    x += 0.1;
    }
}
double funct(double x)
{
    return exp(2*x);
}
double ryd(double x)
{
    const double e = 0.002;
    double s = 1;
    double temp = 0;
    int n = 1;
    do
    {
        temp= pow(2 * x, n) / fact(n);
        s += temp;
        n++;
            
    } while (abs(temp) > e);
    return s;
}
int fact(int k)
{
    int temp = 1;
    for (int i = 1; i <= k; i++)
    {
        temp = temp * i;
    }
    return temp;
}