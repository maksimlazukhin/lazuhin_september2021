// Task2-1.
#include <iostream>
/**
*\ brief  Объем паралепипеда
*\ param ширина, длина, высота
*\ return объем
*/ 
double getVolume(double widthP, double lengthP, double heightP);
/**
*\ brief  Площадь поверхности парралепипеда
*\ param ширина, длина, высота
*\ return  площадь
*/
double getArea(double widthP, double lengthP, double heightP);
/**
*\ brief  вводит число двойной точности по приглашению
*\ param строка приглашения
*\ return введенное число
*/
double vvod(std::string & ss);
int main()
{
    const double widthP = vvod("Enter the width ");
    const double lengthP= vvod("Enter the length ");
    const double heightP = vvod("Enter the  height ");
    std::cout << "Volume=" << getVolume(widthP, lengthP, heightP) << " Area =" << getArea(widthP, lengthP, heightP);
}
double vvod(const std::string & ss)
{
    std::cout<<ss;
    double temp;
    std::cin >> temp ;
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
