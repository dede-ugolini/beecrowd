#include <stdio.h>

int factorial(int n){
	for(int i = 1; i < 5;i++)
		n *= i;
	printf("%d\n", n);
}

void main(){

	factorial(5);
}
