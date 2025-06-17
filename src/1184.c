#include <stdio.h>
#include <stdlib.h>

void main() {
	int size = 12;
	int arr[size][size]; 
	int i,j;

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++)
			arr[i][j] = rand() % 99;
	}

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(i=0; i < size;i++){
		for(j=0;j < size; j++){
			if(i < j ){
				printf("    ");
			}
			else {
				printf("%2d ", arr[i][j]);
			}
		}
		printf("\n");
	}
}
