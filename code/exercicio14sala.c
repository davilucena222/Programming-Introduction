#include <stdio.h>

int main() {
	double soma, num, media;
	int quant;

	num = 0;
	quant = 0;

	printf("Digite um valor negativo para encerrar a insercao\n");

	do {
		printf("Digite um numero: ");
		scanf("%lf",&num);

		if (num > 0) {
			soma = soma + num;
			quant++;
		} 	
	} while (num > 0);

	media = soma / quant;

	printf("Voce digitou %d numeros\n",quant);

	printf("A media dos numeros digitados: %.2lf\n",media);

	return 0;

}
