// Task2-3.
#include <iostream>
#include <string> 
/**
*\ brief ����������� � ����������� �� ����
*\ param ���
*\ return �����������
*/
std::string vremy(int a);
/**
*\ brief ���� ����
*\ param ������ ������� �����
*\ return ���
* */
int input_int(std::string& ss);
int main()
{
    std::string message = "enter the time  ";
    double  a = input_int(message);
    std::cout << vremy(a);
}
int input_int(std::string& ss)
{
    std::cout << ss;
    int temp;
    std::cin >> temp;
    return temp;
}
std::string vremy(int a)
{
    int const morning_start = 5;
    int const afternoon_start = 12;
    int const evening_start = 18;
    int const night_start = 21;
    if (a >= 12 && a <= 18)
    {
        return  "good afternoon";
    }
    if (a < afternoon_start && a >= morning_start)
    {
        return  "good morning";
    }
    if (a >= evening_start && a <= night_start)
    {
        return "good evening";
    }
    if (a > night_start || a < morning_start)
    {
        return "good night";
    }
}