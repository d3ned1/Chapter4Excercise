// Chapter4Excercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "myheader.h"

struct Distance // длина в английской системе
{
	int feet;
	float inches;
};

int main()
{

	Distance d1, d2, d3;

	cout << "\n1st - Please, enter the number in feet: ";
	cin >> d1.feet;
	cout << "1st - Please, enter the number in inches: ";
	cin >> d1.inches;
	cout << "2nd - Please, enter the number in feet: ";
	cin >> d2.feet;
	cout << "2nd - Please, enter the number in inches: ";
	cin >> d2.inches;

	
	d3.inches = d1.inches + d2.inches; // сложение дюймов с возможным заемом
	d3.feet = 0;
	
	if (d3.inches >= 12.0) // если сумма больше 12.0, то уменьшаем
	{
		d3.inches -= 12.0; // число дюймов на 12.0 и
		d3.feet++; // увеличиваем число футов на 1
	}
		d3.feet = d1.feet + d2.feet + d3.feet; // сложение футов
									  // вывод всех длин на экран
	cout << d1.feet << "\'- " << d1.inches << "\" + ";
	cout << d2.feet << "\'- " << d2.inches << "\" = ";
	cout << d3.feet << "\'- " << d3.inches << "\"\n";
	return 0;
}