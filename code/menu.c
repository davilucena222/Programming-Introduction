#include <stdio.h>

int main(void) {

	int menu;

	printf("Opcao 1: cadastrar usuario\nOpcao 2: buscar usuario\nOpcao 3: remover usuario\n");

	printf("Digite o item do menu: ");
	scanf("%d",&menu);

	switch (menu) {
		case 1: { 
			printf("Opcao 1 selecionada\n");
			break;
		}
		case 2: {
			printf("Opcao 2 selecionada\n");
			break;
		}
		case 3: {
			printf("Opcao 3 selecionada\n");
			break;
		}
		default:printf("Opcao inexistente\n");	
	}


	return 0;
}
