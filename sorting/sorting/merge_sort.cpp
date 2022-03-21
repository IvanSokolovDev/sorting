#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#include "merge_sort.h"
#include "out_toMax.h"

// ���������� ����������� ��������
void merge(int* to_max, int first, int last)
{
	int middle, start, final, j;
	int* mas = new int[last];

	middle = (first + last) / 2; //���������� �������� ��������
	start = first; //������ ����� �����
	final = middle + 1; //������ ������ �����

	for (j = first; j <= last; j++) { //��������� �� ������ �� �����
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
	//����������� ���������� � ������
	for (j = first; j <= last; j++) {
		to_max[j] = mas[j];
	}

	delete[]mas;
};

//����������� ��������� ����������
void merge_sort(int* A, int first, int last)
{
	{
		if (first < last)
		{
			merge(A, first, (first + last) / 2); //���������� ����� �����
			merge(A, (first + last) / 2 + 1, last); //���������� ������ �����
			merge_sort(A, first, last); //������� ���� ������
		}
	}
}