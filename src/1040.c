#include <stdio.h>

void main() {

	float n1,n2,n3,n4,media,exame;
	printf("Nota 1\n");
	scanf("%f",&n1);
	printf("Nota 2\n");
	scanf("%f",&n2);
	printf("Nota 3\n");
	scanf("%f",&n3);
	printf("Nota 4\n");
	scanf("%f",&n4);

	media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;
	printf("Media %.2f\n", media);

	if(media >= 7){
		printf("Aluno aprovado\n");
	}
	else if(media < 5){
		printf("Aluno reprovado\n");
	}
	else if(media >= 5 && media < 7){
		printf("Aluno em exame\n");
		printf("Qual a nota do exame?\n");
		scanf("%f", &exame);

		media = (media + exame) / 2;

		if (media > 5){
			printf("Aluno aprovado\n");
			printf("Media final %.2f\n", media);
		}
		else {
			printf("Aluno reprovado\n");			
		}
	}
}
