// Task3-1.
#include <iostream>
#include <cmath>
/**
*\ brief находит 
*\ param x
*\ return значение функции
*/
double funct(double x);
int main()
{   
    double x;
    for (int counter =0; counter <=10; counter++)
    {
        x = 1.0 + 0.1 * counter;
        std::cout << "For x=" << x << " y= " << funct(x) << "\n";
    }
    return 0;
}
double funct(double x)
{
    if (x>0)
    {
    return 0.1 * x * x - x * log(x);
    }
    else
    {
        std::cout << "Неправильный аргумент";
    }
}
