// Task2-1.
#include <iostream>
/**
*\ brief  The volume of the Parallelepiped
*\ param width,length,height
*\ return volume
*/ 
double V(double a, double b, double h);
/**
*\ brief  The area of the Parallelepiped
*\ param width,length,height
*\ return  area
*/
double S(double a, double b, double h);
/**
*\ brief  data entry
*\ param request
*\ return data 
*/
double vvod(std::string ss);
int main()
{
    const double a = vvod("Enter the width ");
    const double b = vvod("Enter the length ");
    const double h = vvod("Enter the  height ");
    std::cout << "V=" << V(a, b, h) << " S =" << S(a, b, h);
}
double vvod(const std::string ss)
{
    std::cout<<ss;
    double temp;
    std::cin >> temp ;
    return temp;
}
double V(const double a, const double b, const double h)
{
    return  a * b * h;
}
double S(const double a, const double b, const double h)
{
    return (a * b + a * h + b * h) * 2.0;
}
