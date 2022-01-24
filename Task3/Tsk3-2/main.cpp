// Task3-2.

#include <iostream>
#include <cmath>
/**
*\ brief  The volume of the Parallelepiped
*\ param width,length,height
*\ return volume
*/
int fact(int x);
/**
*\ brief  The area of the Parallelepiped
*\ param width,length,height
*\ return  area
*/
double vvod(std::string ss1);

double posl(int n);
double posl2(double e);
int main()
{
    int n;
    double e;
        std::cout << "Введите n " ; std::cin >> n;
        std::cout << "Введите e "; std::cin >> e;
        std::cout << "Сумма членов последовательности для n = " << n <<" "<< posl(n) << "\n";
        std::cout << "Сумма членов последовательности для e = " << e << " " << posl2(e) << "\n";
    return 0;
}
int fact(int k)
{
    int temp = 1;
    for (int i=1;i<=k;i++)
    {
        temp = temp*i;
    }
    return temp;
}
double posl(int n)
{
    double s = 0;
    for (int k=1;k<=n;k++)
    {
        if ((k % 2) == 0)
        {
          s -= 1. / fact(2 * k - 1);
        }
        else
        {
            s+= 1. / fact(2 * k - 1);
        }
    }
    return s;
}
double posl2(double e)
{
    double s = 0;
    double temp = 0;
    int k = 1;
    do
    {
        if ((k % 2) == 0)
        {
            temp = - 1. / fact(2 * k - 1);
        }
        else
        {
            temp = 1. / fact(2 * k - 1);
        }
        s += temp;
        k++;
    } while (abs(temp) > e);
    return s;
}