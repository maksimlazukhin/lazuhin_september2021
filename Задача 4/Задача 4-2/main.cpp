// Task4-2.
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
*\ brief Из элементов массива array_d формирует массив array_a той же размерности по правилу: элементы с 3-го по 12-й находятся по формуле A[i] = -D[i]^2, остальные по формуле A[i] = D[i]-1
*\ param массив array_a,массив array_d
*\ param quantity длина массива
*/
void new_array(int* array_d, int* array_a, const int quantity);
/**
*\ brief Замена минимального по модулю положительного элемента массива array нулем.
*\ param quantity длина массива
*/
void replacement(int* array, const int quantity);
/**
*\ brief  Функция ввода элементов массива,как случайными числами, так и с помощью клавиатуры по желанию пользователя
*\ param array массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*/
void enter1(int* array, const int quantity);
/**
*\ brief  Функция ввода с клавиатуры массива целых чисел array
*\ param array массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*/
void input_array(int* array, const int quantity);
/**
*\ brief Удаляет из массива array все элементы, первая и последняя цифра которых четная
*\ param quantity длина массива, которая изменяется при удалении
*/
void multipleOfTwoo(int* array, int& quantity);
/**
*\ brief Удаляет из массива array элемент с индексом index
*\ param quantity длина массива - уменьшается на 1
*\ param index - номер элемента, который надо удалить
*/
void erase_array(int* array, int& quantity, const int index);
/**
*\ brief  Функция ввода элементов целого типа
*\ param message сообщение о том,что нужно ввести
*/
int enter_int(string message);
/**
*\ brief Функция вывода элементов массива array
*\ param quantity длина массива
*\ param message информационное сообщение
*/
void array_out(int* array, const int quantity, const string message);

int main()
{
    system("chcp 1251"); //вывод в консоль русского шрифта
    int quantity = enter_int("Введите длину массива = ");
    int* array_d = new int[quantity];
    enter1(array_d, quantity);
    array_out(array_d, quantity, "Исходный массив D");
    replacement(array_d, quantity);
    array_out(array_d, quantity, "массив D после замены min по модулю положительного элемента 0");
    multipleOfTwoo(array_d, quantity);
    array_out(array_d, quantity, "массив D после удаления элеметов 1 и последняя цифра которого четные");
    int* array_a = new int[quantity];
    new_array(array_d, array_a, quantity);
    array_out(array_a, quantity, "массив А сформированный по правилу");
}
int enter_int(const string message)
{
    cout << message;
    int temp;
    cin >> temp;
    return temp;
}
void replacement(int* array, const int quantity)
{
    int min1 = 1000000;
    for (int i = 0; i < quantity; i++)
    {
        if (array[i] < min1 && array[i]>0)
        {
            min1 = abs(array[i]);
        }
    }
    for (int i = 0; i < quantity; i++)
    {
        if (array[i] == min1)
        {
            array[i] = 0;
        }
    }
}
void new_array(int* array_d, int* array_a, const int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        if (i >= 2 && i <= 11)
        {
            array_a[i] = -array_d[i] * array_d[i];
        }
        else
        {
            array_a[i] = array_d[i] - 1;
        }
    }
}
void multipleOfTwoo(int* array, int& quantity)
{
    int i = 0;
    while (i < quantity)
    {
        int temp = abs(array[i]);
        if (temp > 10)
        {
            if (((temp / 10) % 2) == 0 && (temp % 2 == 0))
            {
                erase_array(array, quantity, i);
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
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
void array_out(int* array, const int quantity, const string message)
{
    cout << message << "\n";
    for (int i = 0; i < quantity; i++)
    {
        cout << "[" << i << "]" << array[i] << "\n";
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
void erase_array(int* array, int& quantity, const int index)
{
    for (int i = index; i < (quantity - 1); i++)
        array[i] = array[i + 1];
    quantity--;
}
