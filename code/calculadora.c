#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b;
	char op;

        printf("Digite a operacao: ");
        op = getchar();

	printf("Digite o primeiro numero: ");
	scanf("%d",&a);

	printf("Digite o segundo numero: ");
	scanf("%d",&b);

	printf("Operacao selecionada: %c\n",op);

/*
	// Codigo equivalente ao switch usando ifs aninhados
	if (op == '+') {
		printf("Soma: %d\n",(a+b));
	} else 	if (op == '-') {
                printf("Subtracao: %d\n",(a-b));
		} else 	if (op == '*') {
                printf("Mult: %d\n",(a*b));
        	} else 	printf("Operacao invalida!");
*/ 
	switch (op) {
		case '+':{
			printf("Soma: %d\n",(a+b));
			break;
		}
		case '-':{
			printf("Subtracao: %d\n",(a-b));
			break;
		}
		case '*':{
			printf("Multiplicacao: %d\n",(a*b));
			break;
		}
		case '/':{
			printf("Divisao: %d\n",(a/b));
			break;
 		}
		case '^':{ 
			printf("Exponenciacao: %d\n",(int)pow(a,b));
			break;
		} 
		default: printf("Operacao invalida!\n");
	}
		
	
	return 0;
}

