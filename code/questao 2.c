Questão 2:

#include <stdio.h>

int main(void) {
 int start, divisao, arrayH[10], i;

 printf ("******Cálculo de Progressão Geométrica********");

 //pedindo ao usuário a entrada de dados

 printf ("\n Digite o valor inicial: \n");
 scanf ("%d", &start);

 printf ("\n Informe a divisão: \n");
 scanf ("%d", &divisao);

 arrayH[0] = start;

 //declarando para poder realizar o cálculo da PG

 for (i = 0; i < 10; i++){
   //preeenchendo o array que vai armazenar os valores da progressão geométrica
   //é preciso armazenar o valor na posição que é [i+1], pois a primeira posição = 0, já está preenchida
   //realizando isso, faz o preenchimento de todos os valores do array
   arrayH [i + 1] = arrayH[i]*divisao;
 } 
//mostrando na tela os valores decrescente
//e a saída de dados
 printf ("\n valores de ordem decrescente: \n");

 for ( i = 10; i > 0; i--){
   //inicializamos o valor de i = 10, pois é o valor do nosso array
   //como o array vai de 0 até 9, subtraímos 1
   //de acordo com o valor i, mostramos na tela o valor que corresponde a cada posição
   printf ("%d\n", arrayH[i-1]);
 }
  return 0;
}
