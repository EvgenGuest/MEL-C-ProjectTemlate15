//������������ ������ ������� �++
#include <iostream>
#include "function.h"
#include "structures.h"
#include "data.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	//������ � function
	/*int n, m;
	cout << "������� 2 �����:";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;

	int arr[10];
	fillArr(arr, 10, 1, 101);
	cout << "����������� ������:\n";
	showArr(arr, 10);*/

	//������ � striuctures.h
	/*person Tom = { "Tom Smith", {1, 1, 1970} };
	showObj(Tom);*/

	//������ � data.h
	cout << "������� 2 �����: ";
	cin >> _X >> _Y;
	showXY();
	cout << _X << " + " << _Y << " = " << sum(_X, _Y) << endl;

	cout << "������� ������ ����������: ";
	double r;
	cin >> r;
	cout << "������� ���������� = " << _PI * r * r << endl;

	cout << "����������� ������:\n";
	fillArr(_A, 10, 10, 21);
	showArr(_A, 10);

	return 0;
}
