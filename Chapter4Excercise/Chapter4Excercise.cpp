// Chapter4Excercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "myheader.h"

struct Distance // ����� � ���������� �������
{
	int feet;
	float inches;
};

int main()
{

	Distance d1, d3; // ����������� ���� ����������
	Distance d2 = { 11, 6.25 }; // ����������� � ��������������
								// ���� ����� ���������� d1
	cout << "\n1st - Please, enter the number in feet: "; cin >> d1.feet;
	cout << "1st - Please, enter the number in inches: "; cin >> d1.inches;
	cout << "2nd - Please, enter the number in feet: "; cin >> d2.feet;
	cout << "2nd - Please, enter the number in inches: "; cin >> d2.inches;
	// �������� ���� d1 � d2 � ���������� ���������� d3
	d3.inches = d1.inches + d2.inches; // �������� ������
	d3.feet = 0; // � ��������� ������
	if (d3.inches >= 12.0) // ���� ����� ������ 12.0,
	{ // �� ���������
		d3.inches -= 12.0; // ����� ������ �� 12.0 �
		d3.feet++; // ����������� ����� ����� �� 1
	}
		d3.feet += d1.feet + d2.feet; // �������� �����
									  // ����� ���� ���� �� �����
	cout << d1.feet << "\'- " << d1.inches << "\" + ";
	cout << d2.feet << "\'- " << d2.inches << "\" = ";
	cout << d3.feet << "\'- " << d3.inches << "\"\n";
	return 0;
}