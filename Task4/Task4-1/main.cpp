// Task4-1.
#include <iostream>
#include <cmath>
#include <string> 
#include <random>   
const int quantity = 81;
using namespace std;
/**
*\ brief находит индексы тех элементов,значения которых больше значений последующего элемента
*\ param  кол-во элементов массива,массив состоящий из целых чисел
*\ return индексы тех элементов,значения которых больше значений последующего элемента
*/
string index(int *a, int quantity);
/**
*\ brief находит сумму элементов,значения которых по модулю меньше 10
*\ param  кол-во элементов массива,массив состоящий из целых чисел
*\ return сумма элементов,значения которых по модулю меньше 10
*/
int summa(int *a, int quantity);
/**
*\ brief  Функция ввода элементов многомерного массива,как случайными числами, так и с помощью клавиатуры по желанию пользователя
*\ param  кол-во элементов массива,массив состоящий из целых чисел
*/
void enter1(int * a, int quantity);
/**
*\ brief Умножает все элементы массива,кратные 3,на третий элемент массива
*\ param кол-во строк n,массив из n целых чисел
*\ return все элементы массива, кратные 3,умноженные на 3 элемент  третий элемент массива
*/
int multipleOfThree(int * a, int quantity);
/**
*\ brief  Функция ввода элементов
*\ param сообщение о том,что нужно ввести
*/
int enter(const string & message);
/**
*\ brief  Функция вывода элементов
*\ param  кол-во элементов массива,массив состоящий из целых чисел
*/
void conclusion(int* a, int quantity);
int main()
{
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
int summa(int * a, int quantity)
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
string index(int *a, int quantity)
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
int multipleOfThree(int * a, int quantity)
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
void enter1(int * a, int quantity)
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
void conclusion(int* a, int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        cout << ("a[") << i << "]=" << a[i] << "\n";
    }
}