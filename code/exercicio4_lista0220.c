/*

4) Faça um programa que leia 10 números inteiros e os armazene em um array. Finalmente, faça o programa exibir: o maior e o menor valor digitado (e o índice onde se encontram).

*/

#include <stdio.h>

int main(void) {

	int a[10];
	int i;
	int maior, menor;
	int posMaior, posMenor;

	for (i = 0; i < 10; i++) {
		printf("Digite o %d-esimo elemento: ", i);
		scanf("%d",&a[i]);
	}

        maior = a[0];
        menor = a[0];
        posMaior = 0;
        posMenor = 0;

	for (i = 1; i < 10; i++) {
			if (a[i] > maior) {
				maior = a[i];
				posMaior = i;
			}
			if (a[i] < menor) {
				menor = a[i];
				posMenor = i;
			}
	}
	
	printf("O maior elemento: %d que esta na posicao %d\n",
		maior, posMaior);

	printf("O menor elemento: %d que esta na posicao %d\n",
                menor, posMenor);


	return 0;
}
