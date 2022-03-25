//Персональный шаблон проекта С++
#include <iostream>
#include "function.h"
#include "structures.h"
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
	person Tom = { "Tom Smith", {1, 1, 1970} };
	showObj(Tom);

	return 0;
}
