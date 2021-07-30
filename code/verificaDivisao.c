#include <stdio.h>

int main(void) {
	
	int num;

	printf("Digite um numero: ");
	scanf("%d",&num);

	if (((num%3) == 0) || ((num%5)==0)) {
		printf("O numero %d eh divisivel por 3 ou 5\n",num);
	} else {
		printf("O numero %d nao eh divisivel por 3 ou 5\n",num);
	}
	
	return 0;
}
