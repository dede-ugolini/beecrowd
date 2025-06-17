#include <stdio.h>

void main() {
	int x,y;
	int arr[46];
	x = 0;
	y = 1;
	for(int i = 0; i < 45; i++){
		arr[i] = x + y;
		x = y;
		y = arr[i];
		printf("%d\n", arr[i]);
	}

}
