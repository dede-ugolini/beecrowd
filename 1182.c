#include <stdio.h>
#include <stdlib.h>

void main() {

	int size = 12;
	int arr[size][size];
	int i,j,n;
	char o;
	int sum = 0;

	printf("Digite a coluna\n");
	scanf("%d", &n);
	printf("S para soma ou M para media\n");
	scanf(" %c", &o);

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			arr[i][j] = rand() % 100;
		}
	}

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(i = 0; i < size; i++){
		printf("%d\n", arr[i][n]);
	}
	for(i = 0; i < size; i++){	
		sum += arr[i][n];
	}

	if (o == 's' || o == 'S') {
		printf("\nSoma %d\n", sum);
	}
	else if(o == 'm' || o == 'M'){
		printf("\nMedia %d\n", sum / size);
	}
	else {
		printf("\nOperacao invalida\n");
	}
	printf("\n");
}
