#include <stdio.h>

int main(void) {

	int dia, mes, ano;

	printf("Digite o dia da data: ");
	scanf("%d",&dia);

	printf("Digite o mes da data: ");
	scanf("%d",&mes);

	printf("Digite o ano da data: ");
	scanf("%d",&ano);

	if ((dia<=31)&&(mes<=12)&&(ano<=2019)) {
		printf("A data %d/%d/%d eh valida!\n",dia, mes, ano); 
	} else {
		printf("A data %d/%d/%d nao eh valida\n",dia, mes, ano);
	}

	return 0;
}
