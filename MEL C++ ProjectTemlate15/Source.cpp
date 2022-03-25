//Персональный шаблон проекта С++
#include <iostream>
#include "function.h"
#include "structures.h"
#include "data.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	//Работа с function
	/*int n, m;
	cout << "Введите 2 числа:";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;

	int arr[10];
	fillArr(arr, 10, 1, 101);
	cout << "Изначальный массив:\n";
	showArr(arr, 10);*/

	//Работа с striuctures.h
	/*person Tom = { "Tom Smith", {1, 1, 1970} };
	showObj(Tom);*/

	//Работа с data.h
	cout << "Введите 2 числа: ";
	cin >> _X >> _Y;
	showXY();
	cout << _X << " + " << _Y << " = " << sum(_X, _Y) << endl;

	cout << "Введите радиус окружности: ";
	double r;
	cin >> r;
	cout << "Площадь окружности = " << _PI * r * r << endl;

	cout << "Изначальный массив:\n";
	fillArr(_A, 10, 10, 21);
	showArr(_A, 10);

	return 0;
}
