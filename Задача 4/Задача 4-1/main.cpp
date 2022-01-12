// Task4-1.
#include <sstream>
#include <iostream>
#include <cmath>
#include <string> 
#include <random> 

using namespace std;
//генератор случайных чисеол с равномерным распределением
class Rand_int
{
public:
    Rand_int(int low, int high) :dist{ low,high } {}
    int operator () () { return dist(re); }
    void seed(int s) { re.seed(s); }
private:
    default_random_engine re;
    uniform_int_distribution <> dist;
};

/**
*\ brief находит индексы тех элементов,значения которых больше значений последующего элемента
*\ param array массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*\ return индексы тех элементов,значения которых больше значений последующего элемента
*/
string index(const int* array, const int quantity);
/**
*\ brief находит сумму элементов,значения которых по модулю меньше 10
*\ param array массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*\ return сумма элементов,значения которых по модулю меньше 10
*/
int summa(const int* array, const int quantity);
/**
*\ brief  Функция ввода элементов массива,как случайными числами, так и с помощью клавиатуры по желанию пользователя
*\ param array массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*\ return массив
*/
void enter1(int* array, const int quantity);
/**
*\ brief Умножает все элементы массива,кратные 3,на третий элемент массива
*\ param array a массив из n целых чисел
*\ param quantity кол-во элементов массива
*\ return все элементы массива, кратные 3,умноженные на 3 элемент  третий элемент массива
*/
int multipleOfThree(const int* array, const int quantity);
/**
*\ brief  Функция ввода элементов целого типа
*\ param message сообщение о том,что нужно ввести
*\ return число введенное с клавиатуры по запросу
*/
int enter_int(const string& message);
/**
*\ brief  Функция ввода с клавиатуры массива целых чисел arrayа
*\ param array массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*/
void input_array(int* array, const int quantity);
/**
*\ brief  Функция вывода элементов
*\ param array массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*/
void print_array(const int* array, const int quantity);
int main()
{
    const int quantity = 81;
    system("chcp 1251");    //вывод в консоль русского шрифта
    int* array = new int[quantity];
    enter1(array, quantity);
    cout << "the sum of elements whose values are modulo less than 10= " << summa(array, quantity) << "\n";
    cout << "indexes of those elements whose values are greater than the value of the subsequent element= " << index(array, quantity) << "\n";
    cout << "elements of array kratnue 3= " << multipleOfThree(array, quantity) << "\n";
    print_array(array, quantity);
    delete[] array;
}
int enter_int(const string& message)
{
    cout << message;
    int temp;
    cin >> temp;
    return temp;
}
int summa(const int* array, const int quantity)
{
    int s = 0;
    for (int i = 0; i < quantity; i++)
    {
        if (abs(array[i]) < 10)
        {
            s = s + array[i];
        }
    }
    return s;
}
string index(const int* array, const int quantity)
{
    stringstream ind;
    for (int i = 0; i < (quantity - 1); i++)
    {
        if (array[i] > array[i + 1])
        {
            ind << to_string(i) << ";";
        }
    }
    return ind.str();
}
int multipleOfThree(const int* array, const int quantity)
{
    int temp = array[2];
    for (int i = 0; i < quantity; i++)
    {
        if ((array[i] % 3 == 0) && (i != 2))
        {
            temp *= array[i];
        }
    }
    return temp;
}
void enter1(int* array, const int quantity)
{
    enum input_selection { randomly = 0, ither };
    int temp;
    cout << "Введите 0 для заполнения массива случайными числами, иначе 1 - "; std::cin >> temp;
    if (temp == ither)
    {
        input_array(array, quantity);
    }
    else
    {
        if (temp == randomly)
        {
            Rand_int rnd{ -40,40 };
            for (int i = 0; i < quantity; i++)
            {
                array[i] = rnd();
            }
        }
    }
}
void print_array(const int* array, int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        cout << ("array[") << i << "]=" << array[i] << "\n";
    }
}
void input_array(int* array, const int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        stringstream message;
        message << "Enter array [" << i << "] = ";
        array[i] = enter_int(message.str());
    }
}
