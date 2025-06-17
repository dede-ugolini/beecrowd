#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
srand(time(NULL));
	int arr[12][12];
	for(int i = 0; i < 12;i++){
		for(int j = 0; j < 12; j++){
			arr[i][j] = rand() % 10;
		}
	}
	int i = 2;
	int soma = 0;
	while(i < 3){
		for(int j = 0; j < 12; j++){
			printf("%d ", arr[i][j]);
			soma += arr[i][j];
		}
		printf("\nsoma: %d\n",  soma);
		float average = soma / 12;
		printf("\naverage: %3f\n", average );
		i++;	
	}
}
