// Task4-2.
#include <iostream>
#include <cmath>
#include <string> 
#include <vector>
using namespace std;
/**
*\ brief Из элементов массива D формирует массив A той же размерности по правилу: элементы с 3-го по 12-й находятся по формуле Ai = -Di2, остальные по формуле Ai = Di-1
*\ param вектор a,вектор d
*/
void newarray(vector<int> & d, vector<int> & a);
/**
*\ brief Замена минимального по модулю положительного элемента массива нулем.
*\ param вектор a
*/
void replacement(vector<int> &  a);
/**
*\ brief Умножает все элементы массива,кратные 3,на третий элемент массива
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*/
void enter1(vector<int>& a, int quantity);
/**
*\ brief УдАляет все элементы массива,кратные 2
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*/
void multipleOfTwoo(vector<int>& a);
/**
*\ brief  Функция ввода элементов
*\ param сообщение о том,что нужно ввести
*/
int enter(string message);
/**
*\ brief Функция вывода элементов
*\ param сообщение о том,что нужно ввести
*/
void conclusion(vector<int>& a, vector<int>& d);
int main()
{
    system("chcp 1251");    //вывод в консоль русского шрифта
    vector<int> d(81);
    int quantity = 81;
    enter1(d,quantity);
    replacement(d);
    multipleOfTwoo(d);
    vector<int> a(d.size());
    newarray(d,a);
    conclusion(a,d);
}
int enter(const string message)
{
    cout << message;
    int temp;
    cin >> temp;
    return temp;
}
void replacement(vector<int> & d)
{    
    int min1= 1000000;
    for (int i = 0; i < d.size(); i++)
    {
        if ( d[i] < min1 && d[i]>0 )
        {    
            min1 = abs(d[i]);
        }
    }
    for (int i = 0; i < d.size(); i++)
    {
        if (d[i] == min1)
        {
            d[i] = 0;
        }
    }
}
void newarray (vector<int> & d, vector<int>& a)
{
    for (int i = 0; i < d.size(); i++)
    {
        if (i >= 2 && i <= 11)
        {
            a[i] = -d[i] * d[i];
        }
        else
        {
            a[i] = d[i] - 1;
        }
    }
}
void multipleOfTwoo(vector<int>& d)
{
    int i = 0;
    while(i < d.size())
    {
        int temp =abs(d[i]);
        if (temp > 10)
        {
            if (((temp / 10) % 2) == 0 && (temp % 2 == 0))
            {
                vector<int>::iterator pos = d.begin() + i;
                d.erase(pos);
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
void enter1(vector<int>& a, int quantity)
{
    enum input_selection
    {
        randomly = 0,
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
                a[i] = (rand() % quantity) - quantity / 2;
            }
        }
        else
        {
            cout << ("Введите 0 или 1");
        }
    }
}
void conclusion (vector<int>& a, vector<int>& d)
{
cout << "Массив D \n";
    for (int i = 0; i < d.size(); i++)
    {
        cout << "array d["<< i << "]" << d[i] << "\n";
    }
    cout << "Массив A \n";
    for (int i = 0; i < d.size(); i++)
    {
        cout << "array a[" << i <<"]"<<a[i] << "\n";
    }
}