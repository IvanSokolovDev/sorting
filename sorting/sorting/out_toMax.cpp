#include <iostream>

#include "out_toMax.h"

// ����� �� ����������
void out_toMax(int* to_max, int n)
{
	std::cout << "\n��������������� �� ���������� ������:\n";

	for (int i = 0; i < n; i++) {
		std::cout << to_max[i];
		std::cout << " ";
	}
}