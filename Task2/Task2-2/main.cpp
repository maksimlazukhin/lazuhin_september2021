// Task2-2.
#include <iostream>
#include <cmath>
/**
*\ brief  the specified function
*\ param a,x
*\ return y
*/
double y(const double a,const double x);
/**
*\ brief  data entry
*\ param request
*\ return data
*/
double vvod(std::string ss);
int main()
{
    const double a = 0.9;
    const double x = vvod("Enter x=");
    std::cout<<"y="<<y(a, x);
}
double vvod(const std::string ss)
{
    std::cout << ss;
    double temp;
    std::cin >> temp;
    return temp;
}
double y(const double a, const double x)
{
    if (x > 1)
    {
        return  a * log10(x) + pow(x, 0.5);
    }
    else
    {
        return  2 * a * cos(x) + 3 * x * x;
    }
}
