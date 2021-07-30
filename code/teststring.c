#include <stdio.h>
#include <string.h>

int main(){
    char re[80];
    char senha[] = "ABCDEF";
    printf("Digite a senha: ");
    gets(re);

    printf("Voce digitou: %s \n",re);

    int i = strcmp(senha, re);

    printf("Resultado do strcmp: %d\n", i);

    return 0;	
}

