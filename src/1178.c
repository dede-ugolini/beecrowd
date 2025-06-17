#include <stdio.h>

void main() {

	int arr[10];
	int x = 1024;
	for (int i=0; i<10; i++){
		arr[i] = x;
		printf("%d\n", arr[i]);
		x = x/2;
	}
}
