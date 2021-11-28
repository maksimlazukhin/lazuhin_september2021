// Task2-1.
#include <iostream>
/**
*\ brief  ����� ������������
*\ param ������, �����, ������
*\ return �����
*/
double getVolume(double widthP, double lengthP, double heightP);
/**
*\ brief  ������� ����������� �������������
*\ param ������, �����, ������
*\ return  �������
*/
double getArea(double widthP, double lengthP, double heightP);
/**
*\ brief  ������ ����� ������� �������� �� �����������
*\ param ������ �����������
*\ return ��������� �����
*/
double enter_double(const std::string& message);
int main()
{
    std::string message= "Enter the width ";
    const double widthP = enter_double(message);
    message = "Enter the length ";
    const double lengthP = enter_double(message);
    message = "Enter the  height ";
    const double heightP = enter_double(message);
    std::cout << "Volume=" << getVolume(widthP, lengthP, heightP) << " Area =" << getArea(widthP, lengthP, heightP);
}
double enter_double(const std::string& message)
{
    std::cout << message;
    double temp;
    std::cin >> temp;
    return temp;
}
double getVolume(double widthP, double lengthP, double heightP)
{
    return  widthP * lengthP * heightP;
}
double getArea(double widthP, double lengthP, double heightP)
{
    return (widthP * lengthP + widthP * heightP + lengthP * heightP) * 2.0;
}