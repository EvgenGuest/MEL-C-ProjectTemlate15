//������������ ������ ������� �++
#include <iostream>
#include "function.h"
#include "structures.h"
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
	person Tom = { "Tom Smith", {1, 1, 1970} };
	showObj(Tom);

	return 0;
}
