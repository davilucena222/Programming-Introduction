Questão 1:
#include <stdio.h>

int main(void) {
  //declarando varáveis
 int arrayA[5], arrayB[8]; 
 int i ,j , k = 0;
 int arrayC[8] = {0,0,0,0,0,0,0,0};

//pedindo ao usuário a entrada dos dados
 printf ("informe os valores do array A:\n");
 for (i = 0; i < 5; i++){
   scanf ("%d", &arrayA[i]);
 }
 printf ("\n informe os valores do array B:\n");
 for (i = 0; i < 5; i++){
   scanf ("%d", &arrayB[i]);
 }

 //reailizando as comparações

for (i = 0; i < 5; i++){
  //neste primeiro for iremos percorrer o arrayA, para realizar as comparações com o arrayB
for ( j = 0; j < 8; j++){
  //enquanto que no segundo for iremos percorrer o arrayB para comparamos cada valor com o arrayA
  if (arrayA[i] == arrayB[j]){
    //se os valores forem iguais, serão armazenados no arrayC
    //para reconhecer a posição, utilizei a variável k
    //onde ela é incrementada depois de um número a ser adicionado no array
arrayC[k] = arrayA[i];
k++;

  }
 }
}
//saída de dados
printf ("valores iguais:\n ");
for (i = 0; i < 8; i++){
  printf ("%d\n", arrayC[i]);
}

  return 0;
}
