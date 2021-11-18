// Task4-1.
#include <iostream>
#include <cmath>
#include <string> 
#include <random>
using namespace std;
/**
*\ brief находит индексы тех элементов,значения которых больше значений последующего элемента
*\ param массив а,количество элементов массива
*\ return индексы тех элементов,значения которых больше значений последующего элемента
*/
string index(int *a, int quantity);
/**
*\ brief находит сумму элементов,значения которых по модулю меньше 10
*\ param массив а,количество элементов массива
*\ return сумма элементов,значения которых по модулю меньше 10
*/
double summa(int *a, int quantity);
/**
*\ brief  Функция ввода элементов многомерного массива,как случайными числами, так и с помощью клавиатуры по желанию пользователя
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*/
void enter1(int * a, int quantity);
/**
*\ brief Умножает все элементы массива,кратные 3,на третий элемент массива
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*/
int krat3(int * a, int quantity);
/**
*\ brief  Функция ввода элементов
*\ param сообщение о том,что нужно ввести
*/
int enter(const string & message);
int main()
{
    const int quantity = 81;
    int a[81];
    enter1(a, quantity);
cout << "the sum of elements whose values are modulo less than 10= " << summa(a, quantity) << "\n";
cout << "indexes of those elements whose values are greater than the value of the subsequent element= "<<index(a,quantity)<<"\n";
cout << "elements of array kratnue 3= " << krat3(a, quantity) << "\n";
         for (int i = 0; i < quantity; i++)
    {
             cout << ("a[")<<i<<"]="<<a[i] << "\n";
    }
}
int enter(const string & message)
{
    cout << message;
    int temp;
    cin >> temp;
    return temp;
}
double summa(int * a, int quantity)
{
    double s = 0;
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
int krat3(int * a, int quantity)
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
 string zap = " ";
    cout << "Will you be entering array elements, or filling the array randomly?(write either enter or randomly)"; std::cin >> zap;
    // zap = "randomly";              //---
    if (zap == "either enter")
    {
        for (int i = 0; i < quantity; i++)
            a[i] = enter("Enter an array element");
    }
    else
    {
        if (zap == "randomly")
        {
            for (int i = 0; i < quantity; i++)
            { 
                a[i] =-40 + (rand() % 81);
            }
        }
        else
        {
            cout << ("write either enter or randomly");
        } 
    }
}









































































































































































































































































