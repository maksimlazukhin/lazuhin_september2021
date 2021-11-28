// Task3-2.
#include <iostream>
#include <cmath>
/**
*\ brief  ����������� ���������� ����� ������ n ������ ������������������ 
*\ param  n - ���������� ������ ������������������
*\ return  �����
*/
double sequenceRec(int n);
/**
*\ brief ����������� ���������� ����� ������ ������ ������������������ �� ������� ��������� ����� e
*\ param e - �������� �����
*\ return �����
*/
double sequenceRec2(double e);
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    double e;
        std::cout << "������� n " ; std::cin >> n;
        std::cout << "������� e "; std::cin >> e;
        std::cout << "����� ������ ������������������ ��� n = " << n <<" "<< sequenceRec(n) << "\n";
        std::cout << "����� ������ ������������������ ��� e = " << e << " " <<sequenceRec2(e) << "\n";
    return 0;
}
double sequenceRec(int n)
{
    double s = 1;
    double member_sequence = 1.;
    for (int k =2; k <= n; k++)
    {
        member_sequence = -member_sequence / (2 * k - 2)/(2 * k - 1);
        s += member_sequence;
    }
    return s;
}
double sequenceRec2(double e)
{
    double s = 1;
    double member_sequence = 1;
    int k = 2;
    do
    {
        member_sequence = -member_sequence / (2 * k - 2) / (2 * k - 1);
        s += member_sequence;
        k++;
    } while (abs(member_sequence) > e);
    return s;
}
