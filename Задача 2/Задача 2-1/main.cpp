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
double enter_double(const std::string& message);

/// <summary>
/// Что будем считать
/// </summary>
enum class kind {
    VOLUME = 0,
    AREA = 1
};


int main()
{
    std::string message = "Enter the width ";
    const double widthP = enter_double(message);
    message = "Enter the length ";
    const double lengthP = enter_double(message);
    message = "Enter the  height ";
    const double heightP = enter_double(message);
    std::cout << "Choose what you want to get (volume: " << static_cast<int>(kind::VOLUME) 
        << ", area: " << static_cast<int>(kind::AREA) << "): ";
    int choice;
    std::cin >> choice;
    switch (static_cast<kind>(choice)) {
    case kind::VOLUME: std::cout << "Volume=" << getVolume(widthP, lengthP, heightP); break;
    case kind::AREA: std::cout << " Area =" << getArea(widthP, lengthP, heightP); break;
    }
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

