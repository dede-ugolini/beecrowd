#include <stdio.h>

void main() {

	int arr[] = {5,4,3,2,10,321,213,4321,1,43124312,1423412,43123412};
	int size = sizeof(arr) / sizeof(arr[0]);
	int menor = arr[0];
	int posicao;
	for (int i = 1; i < size; i++){
		if( menor > arr[i]){
			menor = arr[i];
			posicao = i;
		}
	}
		printf("%d %d\n", menor, posicao);
}
