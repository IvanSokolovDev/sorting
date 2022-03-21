#include <iostream>

#include "quick_sort.h"
#include "out_toMax.h"

void quick_sort(int* to_max, int n) {
    int i = 0;
    int j = n - 1;

    // центральный элемент
    int mid = to_max[n / 2];

    // разделение массива
    do {
        while (to_max[i] < mid) {
            i++;
        }
        //В правой части пропускаем элементы, которые больше центрального
        while (to_max[j] > mid) {
            j--;
        }

        //Меняем элементы местами
        if (i <= j) {
            std::swap(to_max[i], to_max[j]);

            i++;
            j--;
        }
    } while (i <= j);

    if (j > 0) {
        quick_sort(to_max, j + 1);
    }

    if (i < n) {
        quick_sort(&to_max[i], n - i);
    }
}