#include <stdio.h>

void main() {
	int x = 8;
	int arr[46] = {0,1};
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	for(int i = 2; i < 46; i++){
		arr[i] = arr[i-1] + arr[i-2];
		printf("%d\n", arr[i]);
	}
  for(int i = 0; i < 46; i++)
		if (arr[i] == x){
			printf("%d na posicao %d\n", x, i);
		}
}
