// Task4-3.
#include <iostream>
#include <cmath>
#include <string> 
#include <random>
const int quantity = 81;
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
*\ brief вывод многомернго массива nˣm из n целых чисел
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*\ param massage - информационное сообщение
*\ return
*/
void array_out(const int n, const int m, int** array, const string message);
/**
*\ brief массив array преобразует в массив array2: переносит массив array в array2 при этом вставляет после каждой строки,содержащей максимальный по модулю элемент, последнюю строку.
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*/
void newarray(const int n, const int m, int** array, int** array2, const int max);
/**
*\ brief Заменяет минимальный элемент каждого столбца нулем.
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*/
void replacement(const int n,const int m, int** array);
/**
*\ brief Функция ввода элементов многомерного массива,как случайными числами, так и с помощью клавиатуры по желанию пользователя
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*/
void enter11(const int n, const int m, int** array);
/**
*\ brief Функция ввода элемента
*\ param сообщение о том,что нужно ввести
*/
int enter(const string message);
int number_of_rows(const int n, const int m, int** array, int& max);
int main()
{
    system("chcp 1251");    //вывод в консоль русского шрифта
    int n, m;
    cout << "Enter the number of rows = "; cin >> n;
    cout << "Enter the number of columns = "; cin >> m;
    int** array = new int* [n]; // n строк в массиве    объявлдяется двумерный массив n строк, m столбцов
    for (int i = 0; i < n; i++)
        array[i] = new int[m]; // m столбцов

    enter11(n, m, array);
    array_out(n, m, array, " исходный массив");
    replacement(n, m, array);
    array_out(n, m, array, " после замены min элемента в столбце нулем");
    int max;
    int n2 = number_of_rows(n, m, array, max);
    n2 += n;
    int** array2 = new int* [n2]; // n =temp строк в массиве увеличиваем число строк на кол-во строк имеющих в своем составе max элемент
    for (int i = 0; i < n2; i++)
        array2[i] = new int[m]; // m столбцов
    newarray(n, m, array, array2, max);
    array_out(n2, m, array2, " после вставки последней строки за строкой с max элементом");

}
int number_of_rows(const int n, const int m, int** array, int& max)
{
    max = abs(array[0][0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(array[i][j]) > max)
                max = abs(array[i][j]);
        }
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(array[i][j]) == max)
            {
                temp++;
                break;
            }
        }
    }
    return temp;
}
void array_out(const int n, const int m, int** array, const string message)
{
    cout << message << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
int enter(const string message)
{
    cout << message;
    int temp;
    cin >> temp;
    return temp;
}
void replacement(const int n, const int m, int** array)
{
    for (int j = 0; j < m; j++)
    {
        int min = array[0][j];
        for (int i = 1; i < n; i++)
        {
            if (array[i][j] < min)
                min = array[i][j];
        }
        for (int i = 0; i < n; i++)
        {
            if (array[i][j] == min)
                array[i][j] = 0;
        }
    }
}
int maxal(const int n, const int m, vector<vector<int>>& a)
{
    int max1 = abs(a[0][0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(a[i][j]) > max1)
            {
                max1 = abs(a[i][j]);
            }
        }
    }
    return max1;
}
void newarray(const int n, const int m, int** array, int** array2, const int max)
{
    int i1 = 0;
    for (int i = 0; i < n; i++)
    {
        bool index = false;
        for (int j = 0; j < m; j++)
        {
            array2[i1][j] = array[i][j];
            if (abs(array[i][j]) == max)
                index = true;
        }
        if (index)
        {
            i1++;
            for (int j = 0; j < m; j++)
                array2[i1][j] = array[n - 1][j];
        }
        i1++;
    }
}
void enter11(const int n, const int m, int** array)
{
    enum input_selection
    {
        randomly = 0,
        ither
    };

    int temp;
    cout << "Введите 0 для заполнения массива случайными числами, иначе 1 - "; std::cin >> temp;
    if (temp == ither)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                array[i][j] = enter("Enter an array element");
    }
    else
    {
        if (temp == randomly)
        {
            Rand_int rnd{ -40,40 };
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                    array[i][j] = rnd();
            }
        }
    }
}
