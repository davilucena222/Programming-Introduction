#include <stdio.h>

int main(void) {

	int senha, valorInserido;

	senha = 1234;

	printf("Digite a senha: ");
	scanf("%d",&valorInserido);

	if (valorInserido == senha) {
		printf("Acesso permitido\n");
	} else {
		printf("Acesso negado\n");
	}

	return 0;
}
