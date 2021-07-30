#include <stdio.h>

int main(void) {

	double salario;
	char cargo;

        printf("Digite o cargo: ");
        cargo = getchar();

	printf("Digite o salario: ");
	scanf("%lf",&salario);

	switch (cargo) {
		case 'A':printf("[A] Novo salario: %lf\n",(salario*1.1));break;
		case 'B':printf("[B] Novo salario: %lf\n",(salario*1.15));break;
		case 'C':printf("[C] Novo salario: %lf\n",(salario*1.2));break;
		default: printf("Cargo inexistente!\n");
	}


	return 0;
}
