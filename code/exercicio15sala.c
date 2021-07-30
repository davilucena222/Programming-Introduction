#include <stdio.h>

int main(void) {
	int quant, num, soma, i;

	printf("Digite quantos numeros vai inserir: ");
	scanf("%d",&quant);

	for (i = 0; i < quant; i++) {
		printf("Digite o %d-esimo numero: ",i);
		scanf("%d",&num);
		soma += num; //soma = soma + num;
	}
	printf("Soma calculada com for: %d",soma);

	i = 0;
	soma = 0;

	while (i < quant) {
		printf("Digite o %d-esimo numero: ",i);
                scanf("%d",&num);
                soma += num; //soma = soma + num;
		i++;
	}
	printf("Soma calculada com while: %d",soma);	

	i = 0;
	soma = 0;
	do {
                printf("Digite o %d-esimo numero: ",i);
                scanf("%d",&num);
                soma += num; //soma = soma + num;
                i++;
	} while (i < quant);
	printf("Soma calculada com do-while: %d",soma);

	return 0;
}
