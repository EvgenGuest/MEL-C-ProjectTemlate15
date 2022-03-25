#include "function.h"
#include <stdlib.h>
#include <time.h>

int sum(int a, int b) {
	return a + b;
}

void fillArr(int arr[], int length, int min, int max){
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + min;
}


