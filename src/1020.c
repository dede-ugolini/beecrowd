#include <stdio.h>

void main(){
	int dias;
	printf("Digite a sua idade em dias\n");
	scanf("%d", &dias);
	int anos, mes;
	anos = dias / 365;
	mes = (dias % 365);
	dias = mes % 30;
	printf("Anos %d\n", anos);
	printf("Mes %d\n", mes);
	printf("Dias %d\n", dias);
}
