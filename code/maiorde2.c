#include <stdio.h>

int main(void) {
	
	int a, b;

	printf("Digite o primeiro numero: ");
	scanf("%d",&a);
	printf("Digite o segundo numero: ");
	scanf("%d",&b);

	if (a > b) {
		printf("O maior numero: %d\n",a);
	}
	else {
		if (a == b) { 
			printf("Os numeros inseridos sao iguais\n");
		} else { 
			printf("O maior numero: %d\n",b);
		}
	}

	return 0;
}
