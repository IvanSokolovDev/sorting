#include <iostream>

#include "bubble_sort.h"
#include "out_toMax.h"

// сортировка пузырьком
void bubble_sort(int* to_max, int n)
{
	std::cout << "\nСортировка пузырьком:\n";

	// сортировка по неубыванию
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (to_max[j] > to_max[j + 1]) {
				int change_elem = to_max[j];
				to_max[j] = to_max[j + 1];
				to_max[j + 1] = change_elem;
			}
		}
	}

	out_toMax(to_max, n);
}