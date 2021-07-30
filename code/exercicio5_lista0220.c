/*

5) Faça um programa que leia 10 números inteiros DIFERENTES a serem armazenados em um array. Caso o usuario digite um número que já foi digitado anteriormente, o programa deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no array, verificando se ele existe entre os numeros que já foram fornecidos. Exibir na tela o array final.

*/

#include <stdio.h>

int main(void) {

	int a[10];
	int i, j, aux;
	int encontrou = 0;
	
	i = 0;

	for (i = 0; i < 10; i++) {
		do {
                	encontrou = 0;
                	printf("Digite o %d-esimo elemento: ", i);
                	scanf("%d",&aux);       
                	if (i > 0) {
				for (j = 0; j < i; j++) {
                        		if (a[j] == aux) {
                        	       	 	encontrou = 1;
						break;
                       			 } else {
					   a[i] = aux;
					 }
				}
			} else {
				a[0] = aux;
			}
		} while (encontrou == 1);
	}
	
	printf("\n");

	for (i = 0; i < 10; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}



