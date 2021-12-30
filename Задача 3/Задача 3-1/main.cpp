// Task3-1.
#include <iostream>
#include <cmath>
/**
*\ brief находит 
*\ param x
*\ return значение функции f(x) = 0.1x^2 - xln(x)
*/
double funct(const double x);
/**
*\ brief находит 
*\ param x
*\ return вычислима ли f(x) = 0.1x^2 - xln(x)
*/
bool checkValid(const double x);
int main()
{
    const double LEFT_X = 1.0;
    const double RIGHT_X = 2.0;
    const double DELTA = 0.1;
    int max_counter = (int)((RIGHT_X - LEFT_X)/DELTA);
    for (int counter = 0; counter <= max_counter; counter++)
    {
        double x = LEFT_X + DELTA * counter;
        if (checkValid(x))
            std::cout << "For x=" << x << " y= " << funct(x) << "\n";
        else
            std::cout << "Invalid x: " << x  << "\n";
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
