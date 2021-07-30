/*(1173) Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

Entrada
A entrada contém um valor inteiro (V<=50).

Saída
Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do vetor e X é o valor armazenado na posição i. O primeiro número do vetor N (N[0]) irá receber o valor de V.*/
/*#include <stdio.h>

int main(void) {
 int v, n[10]={0,0,0,0,0,0,0,0,0,0};
 int i;
 printf ("Digite v: ");
 scanf ("%d", &v);

n[0] = v;

for (i=1; i<10; i++){
  n[i] = 2*n[i-1];
  }

for (i=0; i<10; i++){
  printf ("n[%d] = %d\n", i,n[i]);
}

  return 0;
}*/
/*Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contém um valor inteiro T (2 = T = 50).

Saída
Para cada posição do vetor, escreva "N[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.*/


/*#include <stdio.h>

int main(void) {
int n[1000];
int t;
int i;

printf ("Digite t: ");
scanf ("%d", &t);

for (i=0; i<1000; i++){
  n[i] = (i % t);
  printf ("n[%d] = %d\n", i, n[i]);
}



   return 0;
}*/

/*(1238)
Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, alternando as letras de cada string, começando com a primeira letra da primeira string, seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.

Entrada
A entrada contém vários casos de teste. A primeira linha contém um inteiro N que indica a quantidade de casos de teste que vem a seguir. Cada caso de teste é composto por uma linha que contém duas cadeias de caracteres, cada cadeia de caracteres contém entre 1 e 50 caracteres inclusive.

Saída
Combine as duas cadeias de caracteres da entrada como mostrado no exemplo abaixo e exiba a cadeia resultante.*/


#include <stdio.h>

  int main(void) {
  char primeira[50];
  char segunda[50];
  char destino [100];
  int p, s, i, limite;
  int indice_segundo = 0;

  printf ("Digite a primeira string: ");
  gets (primeira);
  printf ("Digite a segunda string: ");
  gets (segunda);

 p = strlen(primeira);
 s = strlen(segunda);
limite = p + s;
/*
if ( p > s){
  for (i = 0; i < s; i+=2){
    destino [i] = primeira [i];
    destino [i+1] = segunda [i];
  }
} else {
  for (i = 0; i < p; i+=2){
    destino [i] = primeira [i];
    destino [i+1] = segunda [i];
  }
}*/


if (p > s){
for (i = 0; i < limite; i++){
  if (i % 2 == 0) {
    destino[i] = primeira [i];
  } else {
    destino [i] = segunda [indice_segundo++];
  }
}
} 

printf ("%s", )



   return 0;
}