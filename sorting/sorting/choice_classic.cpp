#include <iostream>

#include "choice_classic.h"
#include "out_toMax.h"

// сортировка выбором
void choice_classic(int* to_max, int n) {
	std::cout << "\nСортировка выбором:\n";

	// сортировка по неубыванию

	int change_index = -1;

	for (int i = 0; i < n - 1; i++) {
		int change_elem = to_max[i];
		bool val = false;

		for (int j = i + 1; j < n; j++) {
			if (to_max[j] < change_elem) {
				change_elem = to_max[j];
				change_index = j;
				val = true;
			}
		}

		if (val == true) {
			to_max[change_index] = to_max[i];
			to_max[i] = change_elem;
		}
	}

	out_toMax(to_max, n);
}