#include <stdio.h>
/*
1) Faça um programa que leia um conjunto de 10 números reais, armazenando-os em um array. Calcule o quadrado de cada um dos componentes desse array, armazenando o resultado em outro array de mesmo tamanho. Exiba os elementos dos dois arrays.

*/
int main(void) {
	double array_a[10], array_b[10];
	int i;

	for (i = 0; i < 10; i++) {
		printf("Digite o %d-esimo elemento: ", i);
		scanf("%lf", &array_a[i]);
	}

	for (i = 0; i < 10; i++) {
		array_b[i] = (array_a[i] * array_a[i]);
	}

	for (i = 0; i < 10; i++) {
		printf("Elemento %d do array A: %lf\n", i, array_a[i]);
	}	

        for (i = 0; i < 10; i++) {
                printf("Elemento %d do array B: %lf\n", i, array_b[i]);
        } 

	return 0;
}
