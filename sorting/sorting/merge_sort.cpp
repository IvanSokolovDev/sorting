#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#include "merge_sort.h"
#include "out_toMax.h"

// сортировка двухпутевым слиянием
void merge(int* to_max, int first, int last)
{
	int middle, start, final, j;
	int* mas = new int[last];

	middle = (first + last) / 2; //вычисление среднего элемента
	start = first; //начало левой части
	final = middle + 1; //начало правой части

	for (j = first; j <= last; j++) { //выполнять от начала до конца
		if ((start <= middle) && ((final > last) || (to_max[start] < to_max[final])))
		{
			mas[j] = to_max[start];
			start++;
		}

		else
		{
			mas[j] = to_max[final];
			final++;
		}
	}
	//возвращение результата в список
	for (j = first; j <= last; j++) {
		to_max[j] = mas[j];
	}

	delete[]mas;
};

//рекурсивная процедура сортировки
void merge_sort(int* A, int first, int last)
{
	{
		if (first < last)
		{
			merge(A, first, (first + last) / 2); //сортировка левой части
			merge(A, (first + last) / 2 + 1, last); //сортировка правой части
			merge_sort(A, first, last); //слияние двух частей
		}
	}
}