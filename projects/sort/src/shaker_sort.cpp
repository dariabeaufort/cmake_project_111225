#include <iostream>

#include "shaker_sort.hpp"

void shaker_sort(int* const arr, const int size) {
	int begin = 0;
	int end = size - 1;
	bool is_swapped = true;
	
	while(is swapped) {
		is_swapped = false;
		for (int i = begin; i < end; i++) {
			if (arr[i] > a[i + 1]) {
				int t = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = t;
				is_swapped = true;
			}
		}
		end --;
		
		if (!is_swapped) break;
		
		is_swapped = false;
		for (int i = end; i > begin; i--) {
			if (arr[i] < arr[i - 1]) {
				int t = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = t;
				is_swapped = true;
			}
		}
		begin++;
	}
}