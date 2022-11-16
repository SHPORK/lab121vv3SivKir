#include "stdlib.h"
#include "time.h"
#include "malloc.h"
#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{

	srand(time(NULL));
	int* a;
	int m, n, min = 999, max = 0, dif = 0, ssum = 0, rowsum = 0;
	printf("Enter list size: \n");
	scanf("%d%d", &m, &n); //для двух 

	a = (int*)malloc((m * n) * sizeof(int));

	*(a) = rand() % 100;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			*(a + i * m + j) = rand() % 100;

			printf("%5d ", *(a + i * m + j));
			ssum += *(a + i * m + j);

		}
		printf(" String Sum %d: %d", i, ssum);

		printf("\n");
	}
	for (int k = 0; k < n; k++) {

		for (int l = 0; l < m; l++) {


			if (max < *(a + k * m + l)) {
				max = *(a + k * m + l);

			}
			if (min > *(a + k * m + l)) {
				min = *(a + k * m + l);

			}
		}
	}
	dif = max - min;
	printf("\nMax and Min difference: %d", dif);


	//рандом этого массива +

	//написать программу, вычисляющую разницу между максимальным и минимальным элементами массива. +

	//написать программу, вычисляющую сумму значений в каждом столбце (или строке) двумерного массива.

	free(a);
	getchar();
	getchar();
	return 0;
}
