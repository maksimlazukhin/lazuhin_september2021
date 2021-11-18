// Task2-2.
#include <iostream>
#include <cmath>
/**
*\ brief вычисление заданной функции
*\ param a,x
*\ return y
*/
double y(const double a,const double x);
/**
*\ brief вычисление заданной функции меньше порогового значения
*\ param a,x
*\ return y
*/
double y_l(const double a,const double x);
/**
*\ brief вычисление заданной функции ,больше порогового значения
*\ param a,x
*\ return y
*/
double y_g(const double a,const double x);
/**
*\ brief  ввод числа по запросу строки
*\ param строка запроса
*\ return введенное значение
*/
double vvod(std::string & ss);
int main()
{
    const double a = 0.9;
    const double x = vvod("Enter x=");
    std::cout << "y=" << y(a, x);
}
double vvod(const std::string & ss)
{
    std::cout << ss;
    double temp;
    std::cin >> temp;
    return temp;
}
double y(const double a, const double x)
{
    double const doorstep=1.;
    if (x > doorstep)
    {
        return y_g(a,x);
    }
    else
    {
        return y_l(a,x);
    }
}
double y_l(const double a,const double x)
{
     return  2 * a * cos(x) + 3 * x * x;
}
double y_g(const double a,const double x)
{
     return  a * log10(x) + sqrt(x);
}
