#include <iostream>

#include "count_sort.h"
#include "out_toMax.h"

void count_sort(int* to_max, int n)
{
	std::cout << "\nСортировка подсчетом:\n";

	int max = INT_MIN;
	int min = INT_MAX;
	int k = 0;

	for (int i = 0; i < n; i++)
	{
		if (to_max[i] > max)
		{
			max = to_max[i];
		}

		if (to_max[i] < min)
		{
			min = to_max[i];
		}
	}

	int allElemCount = max - min + 1;
	int* sortedmas = new int[allElemCount];

	for (int i = 0; i < allElemCount; i++)
	{
		sortedmas[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		sortedmas[to_max[i] - min]++;
	}

	for (int i = 0; i < allElemCount; i++)
	{
		for (int j = 0; j < sortedmas[i]; j++)
		{
			to_max[k] = i + min;
			k++;
		}
	}

	out_toMax(to_max, n);
}