// Task3-3.

#include <iostream>
#include <cmath>
/**
*\ brief  вычисляет заданную функцию e^2x
*\ param x - аргумент функции
*\ return f(x)
*/
double funct(const double x);
/**
*\ brief  вычисляет заданную функцию e^2x аппроксимацией ряда
*\ param x - аргумент функции
*\ return f(x)
*/
double approximate_funct(const double x);
/**
*\ brief  Factorial of k: k!
*\ param k
*\ return  k!
*/
double approximate_funct(const double x);
/**
*\ brief табулирует функцию на интерваое LEFT_X - RIGHT_X с шагом  DELTA
*\ param x
*\ return вывод на экран значений функции и ее аппроксимации рядом
*/
int main()
{
    const double LEFT_X = 0.1;
    const double RIGHT_X = 1.001;
    const double DELTA = 0.1;
    double x = LEFT_X;
    while (x <= RIGHT_X)
    {
        std::cout << "x=" << x << " y = " << funct(x) << " approximate = " << approximate_funct(x) << "\n";
        x += 0.1;
    }
}
double funct(const double x)
{
    return exp(2 * x);
}
double approximate_funct(const double x)
{
    const double e = 0.002;
    double s = 1;
    double temp = 0;
    temp = 2 * x;
    int n = 2;
    do
    {
        s += temp;
        temp *= 2 * x / n++;
    } while (abs(temp) > e);
    return s;
}
