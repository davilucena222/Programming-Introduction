Questão 3: 

#include <stdio.h>

//declarando a função e suas varíaveis
void mostrar (int y, char* caracter){
  int i;
  for ( i = 0; i < y; i++){
    //usamos um for para exibir o caracteres quantas vezes for preciso
    printf ("%s", caracter);
  }
}


//pedindo ao usuário as infomações da função
int main() {
  //declaração de variáveis
 int valor;
 char caracter[2];

//entrada de dados
 printf ("\n digite um valor: \n");
 scanf ("%d", &valor);
 setbuf(stdin, NULL);
 //fazendo a limpeza do buffer para o gets não receber o \n do teclado

 printf ("\n informe uma letra: \n");
 gets(caracter);

 mostrar (valor, caracter);
 //retornando os valores que foram declarados, para que a função exiba a string
  return 0;
}
