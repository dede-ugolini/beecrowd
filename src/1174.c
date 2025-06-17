#include <stdio.h>
#include <stdlib.h>


void main() {

	int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 99;
		if (arr[i] <= 10) {
			printf("arr[%d] = %d\n", i,arr[i]);
		}
	}

}
