//Суслов Иван, лабораторная по классам №4 (Простое наследование. Принцип подстановки), 8 вариант 

#include "Triad.h"
#include <iostream>
#include"Date.h"
int k;
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "\nРаботаем с классом Triad\n";
	cout << "Заполните поля объекта класса Triad\n";
	Triad a;
	cin >> a;
	cout << "\nОбъект 'a': ";
	cout << a;
	Triad b(4, 3, 2);
	cout << "\nОбъект 'b': ";
	cout << b;
	if (a > b)
	{
		cout << "a > b" << endl;
	}
	else if (a < b)
		cout << "a < b" << endl;
	else
		cout << "a = b" << endl;
	cout << "\nПрисвоим объекту 'a' поля объекта 'b'";
	a = b;
	cout << "\nОбъект 'a': ";
	cout << a;
	b++;
	cout << "Применим операцию ++ к обекту 'b'";
	cout << "\nОбъект 'b': ";
	cout << b;
	cout << "\nРаботаем с классом Data\n";
	Date A;
	Date B;

M:

	cout << "\nЗаполните объект Date A:";
	cin >> A;
	cout << "\nЗаполните объект Date B:";
	cin >> B;
	cout << "\nОбъект Date A:";
	cout << A;
	cout << "\nОбъект Date B:";
	cout << B;
	cout << "\nСравним А и В:\n";

	cout << "\nA > B - ";
	if (A > B) cout << "истина\n";
	else cout << "ложь\n";

	cout << "\nA < B - ";
	if (A < B) cout << "истина\n";
	else cout << "ложь\n";

	cout << "\nA <= B - ";
	if (A <= B) cout << "истина\n";
	else cout << "ложь\n";

	cout << "\nA >= B - ";
	if (A >= B) cout << "истина\n";
	else cout << "ложь\n";

	cout << "\nA == B - ";
	if (A == B) cout << "истина\n";
	else cout << "ложь\n";

	int choose;

	cout << "\nПовтор - 1\nВыход - 0\n";
	cin >> choose;
	if (choose == 1) goto M;
}
