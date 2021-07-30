/*
3) Faça um programa que leia 5 números inteiros e os armazene em um array. Depois faça o programa ler mais 5 números inteiros e armazene em outro array. Finalmente, faça o programa exibir na tela os conjuntos união e interseção gerados a partir dos dois arrays. 
Obs. Considere que o usuario nao inserira numeros repetidos dentro do mesmo
array.

*/

#include <stdio.h>

int main(void) {
	int a[5], b[5];
	int i, j;
	int encontrou = 0;

	for (i = 0; i < 5; i++) {
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}

        for (i = 0; i < 5; i++) {
                printf("B[%d] = ", i);
                scanf("%d", &b[i]);
        }

	//A Uniao B
	printf("\nA Uniao B = ");

	for (i = 0; i < 5; i++) {
		printf("%d, ", a[i]);
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (b[i] == a[j])
				encontrou = 1;
		}
		if (encontrou == 0) {
			printf("%d, ", b[i]);
		}
		encontrou = 0; 
	}

	//A Intersecao B

	printf("\nA Intersecao B = ");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (a[i] == b[j]) {
				printf("%d, ", b[j]);
			}
		}
	}

	printf("\n");

	return 0;
}
