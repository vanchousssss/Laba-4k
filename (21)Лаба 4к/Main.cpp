#include "Triad.h"
#include <iostream>
#include"Date.h"
int k;
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n�������� � ������� Triad\n";
	cout << "��������� ���� ������� ������ Triad\n";
	Triad a;
	cin >> a;
	cout << "\n������ 'a': ";
	cout << a;
	Triad b(4, 3, 2);
	cout << "\n������ 'b': ";
	cout << b;
	if (a > b)
	{
		cout << "a > b" << endl;
	}
	else if (a < b)
		cout << "a < b" << endl;
	else
		cout << "a = b" << endl;
	cout << "\n�������� ������� 'a' ���� ������� 'b'";
	a = b;
	cout << "\n������ 'a': ";
	cout << a;
	b++;
	cout << "�������� �������� ++ � ������ 'b'";
	cout << "\n������ 'b': ";
	cout << b;
	cout << "\n�������� � ������� Data\n";
	Date A;
	Date B;

M:

	cout << "\n��������� ������ Date A:";
	cin >> A;
	cout << "\n��������� ������ Date B:";
	cin >> B;
	cout << "\n������ Date A:";
	cout << A;
	cout << "\n������ Date B:";
	cout << B;
	cout << "\n������� � � �:\n";

	cout << "\nA > B - ";
	if (A > B) cout << "������\n";
	else cout << "����\n";

	cout << "\nA < B - ";
	if (A < B) cout << "������\n";
	else cout << "����\n";

	cout << "\nA <= B - ";
	if (A <= B) cout << "������\n";
	else cout << "����\n";

	cout << "\nA >= B - ";
	if (A >= B) cout << "������\n";
	else cout << "����\n";

	cout << "\nA == B - ";
	if (A == B) cout << "������\n";
	else cout << "����\n";

	int choose;

	cout << "\n������ - 1\n����� - 0\n";
	cin >> choose;
	if (choose == 1) goto M;
}