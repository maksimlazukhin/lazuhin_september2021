// Task2-3.
#include <iostream>
#include <string> 
/**
*\ brief приветствие в зависимости от часа
*\ param час
*\ return приветствие
*/
std::string mytime(int hour);
/**
*\ brief ввод часа
*\ param строка запроса ввода
*\ return час
* */
int input_int(std::string& message);
int main()
{
    std::string message = "enter the time  ";
    const auto hour = input_int(message);
    std::cout << mytime(hour);
}
int input_int(std::string& message)
{
    std::cout << message;
    int temp;
    std::cin >> temp;
    return temp;
}
std::string mytime(int hour)
{
    /*
    enum {
        morning_start = 5,
        afternoon_start = 12,
        evening_start = 18,
        night_start = 21
    };*/
    switch (hour) {
    case 12: case 13: case 14: case 15: case 16: case 17: return  "good afternoon"; break;
    case 5: case 6: case 7: case 8: case 9: case 10: case 11: return  "good morning"; break;
    case 18: case 19: case 20: case 21: return "good evening"; break;
    case 22: case 23: case 24: case 0: case 1: case 2: case 3: case 4: return "good night"; break;
    }
    return "Error!";
}
