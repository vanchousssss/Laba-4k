#include "Triad.h"
#include <iostream>
#include"Date.h"
int k;
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "=============================";
	cout << "\n�������� � ������� Triad\n";
	cout << "������� ���� ������� ������ Triad\n";
	Triad a;
	cin >> a;
	cout << "=============================" << endl;
	cout << "\n������ A: ";
	cout << a;
	Triad b(4, 3, 2);
	cout << "\n������ B: ";
	cout << b;
	cout << "=============================";
	cout << endl;
	if (a > b)
	{
		cout << "a > b" << endl << "=============================";
	}
	if (a < b)
		cout << "a < b" << endl << "=============================" << endl;
	if (a == b)
		cout << "a = b" << endl << "=============================";
	cout << "\n�������� ������� 'a' ���� ������� 'b'";
	a = b;
	cout << "\n������ A: ";
	cout << a;
	cout << "=============================" << endl;

	cout << "\n�������� � ������� Data\n";
	Date d;
	cout << "\n������� ���-�� �������: ";
	cin >> k;
	cin >> d;
	cout << "\n������ D: ";
	cout << d;
	Date c(12, 3, 21);
	cout << "\n������ C: ";
	cout << c;
	cout << endl;
	cout << "=============================" << endl;
	d.foo_month(k);
	cout << "\n������ 'd' ����� ����������� � ���� " << k << " �������: ";
	cout << d;
	cout << endl;
	if (d > c)
	{
		cout << "d > c" << endl;
	}
	if (d < c)
		cout << "d < c" << endl;
	if (d == c)
		cout << "d = c" << endl;


}