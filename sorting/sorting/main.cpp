#include <iostream>

#include "enter_elem.h" // ввод элементов
#include "out_toMax.h" // вывод по неубыванию
#include "method.h" // способ сортировки

#include "bubble_sort.h" // сортировка пузырьком
#include "choice_classic.h" // сортировка выбором
#include "Shell_sort.h" // сортировка Шелла
#include "inserts_sort.h" // сортировка вставками


int main() {
	setlocale(LC_ALL, "Russian");

	int n; // количество элементов в массиве

	std::cout << "Введите количество элементов в последовательности: ";
	std::cin >> n;

	if (n > 0) {
		int* to_max = new int[n];

		std::cout << "\nВведите элементы последовательности:\n";
		
		enter_elem(to_max, n); // ввод элементов

		std::cout << "\nВыберите метод сортировки:\n";

		std::cout << "1. Пузырьком;\n";
		std::cout << "2. Выбором (обычная);\n";
		std::cout << "3. Алгоритм Шелла;\n";
		std::cout << "4. Вставками;\n";
		std::cout << "5. Подсчетом;\n";
		std::cout << "6. Быстрая сортировка;\n";
		std::cout << "7. Двухпутевым слиянием;\n";

		// способ сортировки
		int way;
		std::cin >> way;

		method(way, to_max, n); 
	}

	std::cout << "\n";

	return 0;
}