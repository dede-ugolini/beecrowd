#include <stdio.h>
#include <stdlib.h>

int isprime(int x[], int n){

	for (int i = 0; i < n; i++) {
		if ( x[i] % 2 == 0|| x[i] % 3 == 0 || x[i] % 5 == 0){
			printf("%d nao eh primo\n", x[i]);
		}
		else {
			printf("%d eh primo\n", x[i]);
			}
		}
	}

void main(){
	int n;
	scanf("%d", &n);
	int x[n];
	for(int i = 0; i < n; i++){
	x[i] =  (rand() % 999); 
	}
	isprime(x, n);
}
