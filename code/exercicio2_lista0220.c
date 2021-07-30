/*
2) Faça um programa que leia um conjunto de 5 números reais, armazenando-os em um array. Depois solicite ao usuário um número real e exiba se e em qual(is) posição(ões) este número está presente no array digitado.
*/
#include <stdio.h>

int main(void) {
	double conjunto[5];
	double busca;
	int i;

	for (i = 0; i < 5; i++) {
		printf("Digite o %d-esimo elemento: ", i);
		scanf("%lf", &conjunto[i]);
	}

	printf("\nDigite o numero para buscar: ");
	scanf("%lf", &busca);

	for (i = 0; i < 5; i++) {
		if (conjunto[i] == busca) {
			printf("Numero %lf encontrado na posicao %d\n", busca, i);
		}
	}
	
	return 0;
}

