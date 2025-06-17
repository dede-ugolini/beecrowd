#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
srand(time(NULL));
	int arr[5];
	for (int i = 0; i < 5; i++){
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < 5; i++){
		printf("%d %d\n", arr[i], arr[5-1-i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++){
		int tmp = arr[i];
		arr[i] = arr[(5-1)-i];
	 	arr[5-1-i] = tmp;
		printf("%d %d\n", arr[i], arr[5-1-i]);
	}
}
