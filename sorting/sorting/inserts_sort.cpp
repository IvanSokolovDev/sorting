#include <iostream>

#include "inserts_sort.h"
#include "out_toMax.h"

// сортировка вставками
void inserts_sort(int* to_max, int n) {
	std::cout << "\nСортировка вставками:\n";

	// сортировка по неубыванию
	for (int i = 1; i < n; i++) {
		int j = i - 1;

		while (j >= 0 and to_max[j] > to_max[j + 1]) {
			std::swap(to_max[j], to_max[j + 1]);
			j--;
		}
	}

	out_toMax(to_max, n);
}