#include <stdio.h>
#include <string.h>
/*

Ler uma string do usuario e realizar a troca de vogais por X e consoantes minusculas por maiusculas

*/


int main(void) {

 char str[20]; // declaracao de string com no maximo 19 caracteres + '\0' (array com 20 chars indexados de 0 a 19)
 int i, size; // declaracao de dois inteiros, um para percorrer o array str e outro para armazenar o tamanho do
	      // nome digitado 

 printf("Digite um nome: ");
 gets(str); //le caracteres do usuario e os armazena no array str

 size = strlen(str); //le tamanho do nome digitado
 
 for (i=0; i<size; i++) {   // percorre array caractere por caractere 
	if ((str[i] >= 65) && (str[i] <= 122)) { //se o caractere for uma letra maiuscula ou minuscula
		if ((str[i] == 'a') ||
		    (str[i] == 'e') ||
		    (str[i] == 'i') ||
		    (str[i] == 'o') ||
		    (str[i] == 'u') ||
		    (str[i] == 'A') ||
		    (str[i] == 'E') ||
		    (str[i] == 'I') ||
		    (str[i] == 'O') ||
		    (str[i] == 'U')) {   // testa se armazena uma vogal na posicao atual
			str[i] = 'X';  // efetua a troca do caractere na posicao atual por 'X'
		    } else {
			if (str[i] > 97) // se nao for vogal, testa se consoante minuscula
				str[i] = str[i] - 32;  // efetua troca do caractere na posicao atual por maiusculo

		    }
	}
 }
 
 printf("Resultado: %s\n",str);  // exibe a string resultante
 

 
 return 0;
}
