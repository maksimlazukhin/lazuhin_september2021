// Task4-1.
#include <iostream>
#include <cmath>
#include <string> 
#include <random>   

using namespace std;
/**
*\ brief находит индексы тех элементов,значения которых больше значений последующего элемента
*\ param a массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*\ return индексы тех элементов,значения которых больше значений последующего элемента
*/
string index(const int *a, const int quantity);
/**
*\ brief находит сумму элементов,значения которых по модулю меньше 10
*\ param a массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*\ return сумма элементов,значения которых по модулю меньше 10
*/
int summa(const int *a, const int quantity);
/**
*\ brief  Функция ввода элементов многомерного массива,как случайными числами, так и с помощью клавиатуры по желанию пользователя
*\ param a массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*\ return сумма элементов
*/
void enter1(int * a, const int quantity);
/**
*\ brief Умножает все элементы массива,кратные 3,на третий элемент массива
*\ param a массив из n целых чисел 
*\ param quantity кол-во строк n
*\ return все элементы массива, кратные 3,умноженные на 3 элемент  третий элемент массива
*/
int multipleOfThree(const int * a, const int quantity);
/**
*\ brief  Функция ввода элементов
*\ param message сообщение о том,что нужно ввести
*/
int enter(const string & message);
/**
*\ brief  Функция вывода элементов
*\ param a массив состоящий из целых чисел
*\ param quantity кол-во элементов массива
*/
void conclusion(const int* a, const int quantity);
int main()
{
    const int quantity = 81;
    system("chcp 1251");    //вывод в консоль русского шрифта
    int a[quantity];
    enter1(a,quantity);
cout << "the sum of elements whose values are modulo less than 10= " << summa(a, quantity) << "\n";
cout << "indexes of those elements whose values are greater than the value of the subsequent element= "<<index(a,quantity)<<"\n";
cout << "elements of array kratnue 3= " << multipleOfThree(a,quantity) << "\n";
conclusion(a, quantity);
}
int enter(const string & message)
{
    cout << message;
    int temp;
    cin >> temp;
    return temp;
}
int summa(const int * a, const int quantity)
{
    int s = 0;
    for (int i = 0; i < quantity; i++)
    { 
        if (abs(a[i]) < 10)
        {
            s = s + a[i];
        }
    }
    return s;
}
string index(const int *a, const int quantity)
{
    string ind;
    for (int i = 0; i < (quantity-1); i++)
    { 
        if (a[i] > a[i + 1])
        {
            ind = ind +  to_string(i) + ";";
        }
    }
        return ind;
}
int multipleOfThree(const int * a, const int quantity)
{
    int temp = a[2];
    for (int i = 0; i < quantity; i++)
    {
        if ( (a[i] % 3 == 0) && (i !=2) )
        {
            temp *= a[i];
        }
    } 
    return temp;
}
void enter1(int * a, const int quantity)
{
 
 enum input_selection
 {
    randomly=0,
    ither
    };

 int temp;
    cout << "Введите 0 для заполнения массива случайными числами, иначе 1 - "; std::cin >> temp;
  input_selection zap = static_cast <input_selection>(temp);
    if (zap == ither)
    {
        for (int i = 0; i < quantity; i++)
            a[i] = enter("Enter an array element");
    }
    else
    {
        if (zap == randomly)
        {
            for (int i = 0; i < quantity; i++)
            { 
                a[i] =(rand() % quantity) - quantity / 2;
            }
        }
        else
        {
            cout << ("Введите 0 или 1");
        } 
    }
}
void conclusion(const int* a, int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        cout << ("a[") << i << "]=" << a[i] << "\n";
    }
}
