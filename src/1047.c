#include <stdio.h>

void main() {

	int hi,hf,mi,mf;
	printf("Hora inicial\n");
	scanf("%d",&hi);
	printf("Hora final\n");
	scanf("%d",&hf);
	printf("Minuto inicial\n");
	scanf("%d",&mi);
	printf("Minuto final\n");
	scanf("%d",&mf);

	printf("O jogo durou %d horas e %d minutos\n",( hf - hi),( mf - mi));
}
