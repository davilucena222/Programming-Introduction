#include <stdio.h>

int main(void) {

	int dia, mes, ano;
	int tentDia, tentMes, tentAno;
	int dataValida = 0;

	tentDia = 0;
	tentMes = 0;
	tentAno = 0;


	do {
		if (tentDia > 0) { 
			printf("[%d] Valor %d invalido; digite novamente\n",tentDia,dia);
		}
		printf("Digite o dia: ");
		scanf("%d",&dia);
		tentDia++;

	} while((dia<1)||(dia>31));

	do {
		if (tentMes > 0) {
                        printf("[%d] Valor %d invalido; digite novamente\n",tentMes,mes);
		}
		printf("Digite o mes: ");
		scanf("%d",&mes);
		tentMes++;
	} while((mes<1)||(mes>12));

	do {
		if (tentAno > 0) {
                        printf("[%d] Valor %d invalido; digite novamente\n",tentAno,ano);
		}
		printf("Digite o ano: ");
		scanf("%d",&ano);	
		tentAno++;
	} while((ano<1900)||(ano>2100));

	printf("A data digitada: %d/%d/%d\n",dia,mes,ano);

	return 0;
}
