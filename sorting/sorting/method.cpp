#include <iostream>

#include "method.h"

#include "out_toMax.h"

#include "bubble_sort.h"
#include "choice_classic.h"
#include "Shell_sort.h"
#include "inserts_sort.h"
#include "count_sort.h"
#include "quick_sort.h"
#include "merge_sort.h"

void method(int way, int* to_max, int n) {
	switch (way) {
	case 1:
		bubble_sort(to_max, n);
		break;
	case 2:
		choice_classic(to_max, n);
		break;
	case 3:
		Shell_sort(to_max, n);
		break;
	case 4:
		inserts_sort(to_max, n);
		break;
	case 5:
		count_sort(to_max, n);
		break;
	case 6:
		std::cout << "\nБыстрая сортировка:\n";
		quick_sort(to_max, n);
		out_toMax(to_max, n);
		break;
	case 7:
		std::cout << "\nСортировка двухпутевым слиянием:\n";
		merge_sort(to_max, 1, n);
		out_toMax(to_max, n);
		break;
	}
}