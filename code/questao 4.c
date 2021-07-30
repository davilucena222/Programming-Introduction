Questão 4:

#include <stdio.h>
#include <string.h>

int main (){
char caixa[10];
int criptografando[40];
int troca1, troca2, troca3;
int i;


printf ("forneça a entrada: \n");
gets (caixa);

for (i = 0; i < strlen(caixa); i++){
//utilizamos um for para poder percorrer uma string
troca1 = caixa[i];
//em seguida converti um valor de caracter para um inteiro e utilizei a variável troca1 para armazenar esse valor
troca2 = troca1 - 2;
//daqui, substitui a variável troca1 por 2, para poder saber por qual letra ela será substituída

if (troca2 < 65){ //caso o valor seja menor que 65, onde 65 é a letra A 
  troca3 = 65 - troca2;
  //utilizei a variável troca3 para achar a diferença entre os caracteres digitados, para sabermos qual letra representa o A e assim subtraindo o valor digitado pelo que existe na tabela e fazer a substituição
  troca2 = 91 - troca3;
}

criptografando[i] = troca2;
//armazenando o valor que é referente ao array criptografando

}

printf ("\n entrada que é criptografada: \n");

for (i = 0; i < strlen(caixa); i++ ){
  //no fim usamos um for para exibir os dados que são criptografados 
  printf ("%c", criptografando[i]);
  //aqui convertemos o valor que é inteiro para caracter e assim podermos exibir ele em string
}


  return 0;
}