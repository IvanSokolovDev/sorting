#include <iostream>

#include "Shell_sort.h"
#include "out_toMax.h"

// ���������� �����
void Shell_sort(int* to_max, int n) {
	std::cout << "\n���������� �����:\n";
	int d = n / 2;

	// ���������� �� ����������
	while (d > 0) {
		for (int i = 0; i < n - d; i++) {
			int j = i;

			while (j >= 0 and to_max[j] > to_max[j + d]) {
				std::swap(to_max[j], to_max[j + d]);
				j--;
			}
		}

		d /= 2;
	}

	out_toMax(to_max, n);
}