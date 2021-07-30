i#include <stdio.h>

/* 

Em linguagem C podemos passar argumentos através da linha de comando para um programa quando ele inicia.

A função main recebe parâmetros passados via linha de comando e estes podem ser acessados atraves de variaveis definidas em uma assinatura padronizada: 

int main( int argc, char *argv[] )

Onde:

argc – é um valor inteiro que indica a quantidade de argumentos que foram passados quando o programa foi invocado (e.g. no terminal).

argv – é um vetor de char que contém os argumentos, um para cada string passada na invocacao (e.g. linha de comando no terminal).

argv[0] armazena o nome do programa que foi chamado no prompt, sendo assim, argc é pelo menos igual a 1, pois no mínimo existirá um argumento (o proprio executavel).

*/

int main(int argc, char* argv[]) {
  printf("Quantidade de argumentos: %d\n",argc);

  return 0;
}
