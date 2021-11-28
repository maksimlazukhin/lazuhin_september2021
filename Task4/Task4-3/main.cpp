// Task4-3.
#include <iostream>
#include <cmath>
#include <string> 
#include <vector>    
const int quantity = 81;
using namespace std;
/**
*\ brief  вывод многомернго массива nˣm из n целых чисел
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*\ return многомерный массив nˣm из n целых чисел
*/
void conclusion(int n, int m, vector<vector<int>>& a);
/**
*\ brief вставляет после каждой строки,содержащей максимальный по модулю элемент, последнюю строку.
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*/
void newarray(int & n, int m, vector<vector<int>>& a);
/**
*\ brief находит максимальный элемент
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*\ return максимальный элемент
*/
int maxal(int n, int m, vector<vector<int>>& a);
/**
*\ brief  Заменяет минимальный элемент каждого столбца нулем.
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*/
void replacement(int n,int m,vector<vector<int>>& a);
/**
*\ brief  Функция ввода элементов многомерного массива,как случайными числами, так и с помощью клавиатуры по желанию пользователя
*\ param кол-во строк(n),кол-во столбцов(m),многомерный массив nˣm из n целых чисел
*/
void enter1(int n, int m, vector<vector<int>>& a);
/**
*\ brief  Функция ввода элементов 
*\ param сообщение о том,что нужно ввести
*/
int enter(const string message);
int main()
{
    int n , m ;
    cout << "Enter the number of rows "; cin >> n;
    cout << "Enter the number of columns "; cin >> m;
    vector < vector <int>> a(n, vector <int>(m));
    enter1(n, m, a);
    conclusion(n, m, a);

    replacement(n,m,a);
    conclusion(n, m, a);

    newarray(n,m,a);
    conclusion(n, m, a);
}
void conclusion(int n, int m, vector<vector<int>>& a)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
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
void replacement(int n,int m,vector<vector<int>>& a)
{
    for (int j = 0; j < m; j++)
    {
        int ind = 0;
        int min = a[0][j];
        for  (int i = 1; i < n; i++)
        { 
            if (a[i][j] < min)
            { 
                min = a[i][j];
                ind = i;
            }   
        }
        a[ind][j] = 0;
    }
}
int maxal(int n, int m, vector<vector<int>>& a)
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
void newarray(int  & n, int m, vector<vector<int>>& a)
{
    int max1 = maxal(n, m, a);
    int i = 0;
    while ( i < a.size() )
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(a[i][j]) == max1)
            {
                a.insert(a.begin()+i+1,a[n-1]);
                break;
            }
        }
        if (n != a.size())
        {
            i += 2;
            n = a.size();
        }
        else
        {
            i++;
        }
    }
}
void enter1(int n, int m, vector<vector<int>>& a)
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
        for (int i = 0; i < n; i++)
            for (int j=0;j<m;j++)
            a[i][j] = enter("Enter an array element");
    }
    else
    {
        if (zap == randomly)
        {
            for (int i = 0; i < n ; i++)
            { 
                for (int j = 0; j < m; j++)
                a[i][j] =(rand() % quantity) - quantity / 2;
            }
        }
        else
        {
            cout << ("Введите 0 или 1");
        } 
    }
}