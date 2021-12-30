// Task3-3.

#include <iostream>
#include <cmath>
/**
*\ brief  Calculate f(x) = e^2x natively
*\ param x
*\ return f(x)
*/
double funct(const double x);
/**
*\ brief  Factorial of k: k!
*\ param k
*\ return  k!
*/
int fact(const int k);
/**
*\ brief  Calculate ~f(x) = e^2x using series
*\ param x
*\ return ~f(x)
*/
double approximate_funct(const double x);
int main()
{
    double x=0.1;
    while (x < 1)
    {
    std::cout << "x="<<x<<" y="<<funct(x)<<" ryd="<<approximate_funct(x)<<"\n";
    x += 0.1;
    }
}
double funct(const double x)
{
    return exp(2 * x);
}
double approximate_funct(const double x)
{
    // Вообще говоря формула в задании не является рекурентной
    // https://ru.wikipedia.org/wiki/Рекуррентная_формула
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
int fact(const int k)
{
    int temp = 1;
    for (int i = 1; i <= k; i++)
    {
        temp = temp * i;
    }
    return temp;
}
