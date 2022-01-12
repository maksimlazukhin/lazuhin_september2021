// Task3-1.
#include <iostream>
#include <cmath>
/**
*\ brief вычисляет значение заданной функции f(x) = 0.1x^2 - xln(x)
*\ param x - аргумент
*\ return значение функции
*/
double funct(const double x);
/**
*\ brief проверяет корректность аргументф X для функции funct()
*\ param x
*\ return true если корректный аргумент, иначе false
*/
bool checkValid(const double x);
/**
*\ brief табудирует функцию funct() заданную на интерваое LEFT_X  - RIGHT_X с шагом  DELTA
*\ param x
*\ return вычислима ли f(x) = 0.1x^2 - xln(x)
*/
int main()
{
    const double LEFT_X = 1.0;
    const double RIGHT_X = 2.001;
    const double DELTA = 0.1;
    double x = LEFT_X;
    while (x <= RIGHT_X)
    {
        if (checkValid(x))
            std::cout << "For x=" << x << " y= " << funct(x) << "\n";
        else
            std::cout << "Invalid x: " << x << "\n";
        x += DELTA;
    }
    return 0;
}
double funct(const double x)
{
    return 0.1 * x * x - x * log(x);
}
bool checkValid(const double x)
{
    return x > 0;
}
