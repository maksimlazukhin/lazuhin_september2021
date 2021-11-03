// Task2-3.
#include <iostream>
#include <string> 
/**
*\ brief  greeting from the hour
*\ param hour
*\ return greeting
*/
std::string vremy(int a);
/**
*\ brief  data entry
*\ param temp
*\ return temp
* */
int vvod(std::string ss);
int main()
{
    double  a = vvod("enter the time");
    std::cout << vremy(a);
}
int vvod(std::string ss)
{
    std::cout << ss;
    double temp;
    std::cin >> temp;
    return temp;
}
std::string vremy(int a)
{
    if (a>=12 && a<=18)
    {
        return  "good afternoon";
    }
    if (a<12 && a>=5)
    {
        return  "good morning";
    }
        if (a>18 && a<=21)
        {
            return "good evening";
        }
        if (a>21 || a<5)
        {
            return "good night";
        }
}
