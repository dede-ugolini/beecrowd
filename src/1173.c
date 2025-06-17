#include <stdio.h>
#include <stdlib.h>

void main(){

	int arr[10];
	int x = rand() % 50;
	arr[0] = x;
	printf("%d\n", arr[0]);
	for (int i = 1; i < 10; i++){
		arr[i] = 2 * arr[i-1];
		printf("%d\n", arr[i]);
	}
}
