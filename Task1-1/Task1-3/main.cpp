// Task 1-3
//
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
/**
*\brief ���������������� ������������� 3-� ����������
*\param  - ������������� 1,2,3 ���������
*\return ������������� �������������
*/
double resistance(const double resistance1, const double resistance2, const double resistance3);
/**
* \ brief ������� main
* \ param
* \return 0,���� ��������� ���������
*/
int main()
{
	double resistance1, resistance2, resistance3;
	std::cout << "R1 = "; std::cin >> resistance1; 
	std::cout << "R2 = "; std::cin >> resistance2; 
	std::cout << "R3 = "; std::cin >> resistance3;
	std::cout << "Rquivalent=" << resistance(resistance1, resistance2, resistance3);
	return 0;
}
double resistance (const double resistance1, const double resistance2, const double resistance3)
{
	return(resistance1 + resistance2 + resistance3);
}