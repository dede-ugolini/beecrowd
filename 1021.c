#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int qtdMoedas(int parteMoedas, int moedas[]){
	printf("\n");
	int i = 0;
	while(parteMoedas > 0){
		printf("%d Moedas de %d centavos\n", parteMoedas / moedas[i], moedas[i]);
		parteMoedas -= moedas[i] * (parteMoedas / moedas[i]);
		i++;
	}
}

int qtdNotas(int *parteNotas, int notas[]){
	int i = 0;
	while(*parteNotas > 1){
		printf("%d Notas de %d reais\n", *parteNotas / notas[i], notas[i]);
		*parteNotas = *parteNotas % notas[i];
		i++;
	}
}

int main() {
    double valor = 573.22;

    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    int totalCentavos = (int) round(valor * 100);

    int parteNotas = totalCentavos / 100;
    int parteMoedas = totalCentavos % 100;

    printf("Parte inteira (notas): %d\n", parteNotas);
    printf("Parte centavos (moedas): %d\n", parteMoedas);
		
		qtdNotas(&parteNotas, notas);
		printf("\n");
		if(parteNotas ==1){
			qtdMoedas(100 + parteMoedas, moedas);
		}
    return 0;
}

