#include "Triad.h"
#include <iostream>
#include"Date.h"
int k;
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "=============================";
	cout << "\nРаботаем с классом Triad\n";
	cout << "Введите поля объекта класса Triad\n";
	Triad a;
	cin >> a;
	cout << "=============================" << endl;
	cout << "\nОбъект A: ";
	cout << a;
	Triad b(4, 3, 2);
	cout << "\nОбъект B: ";
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
	cout << "\nПрисвоим объекту 'a' поля объекта 'b'";
	a = b;
	cout << "\nОбъект A: ";
	cout << a;
	cout << "=============================" << endl;

	cout << "\nРаботаем с классом Data\n";
	Date d;
	cout << "\nВведите кол-во месяцев: ";
	cin >> k;
	cin >> d;
	cout << "\nОбъект D: ";
	cout << d;
	Date c(12, 3, 21);
	cout << "\nОбъект C: ";
	cout << c;
	cout << endl;
	cout << "=============================" << endl;
	d.foo_month(k);
	cout << "\nОбъект 'd' после прибавления к нему " << k << " месяцев: ";
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