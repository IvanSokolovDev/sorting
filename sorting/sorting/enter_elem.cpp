#include <iostream>

#include "enter_elem.h"

// ввод элементов
void enter_elem(int* to_max, int n) {
	for (int i = 0; i < n; i++) {
		std::cin >> to_max[i];
	}
}