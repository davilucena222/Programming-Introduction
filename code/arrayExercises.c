/*1) Faça um programa que leia um conjunto de 10 números reais, armazenando-os em um array. Calcule o quadrado de cada um dos componentes desse array, armazenando o resultado em outro array de mesmo tamanho. Exiba os elementos dos dois arrays.*/

/*#include <stdio.h>

int main(void) {
  double array_a[10], array_b[10];
  int i;
  for(int i=0; i<10; i++){
    printf ("digite o %d-esimo elemento:\n", i);
    scanf ("%lf", &array_a[i]);
  }

  for (int i=0; i<10; i++){
    array_b[i] = (array_a[i]) * (array_a[i]);

  }
  
  for (int i=0; i<10; i++){
    printf ("elemento %d do array A: %lf\n", i, array_a[i]);
    
  }
  
   for (int i=0; i<10; i++){
   
    printf ("elemento %d do array B: %lf\n", i, array_b[i]);
  }

  return 0;
}*/

/*2) Faça um programa que leia um conjunto de 5 números reais, armazenando-os em um array. Depois solicite ao usuário um número real e exiba se e em qual(is) posição(ões) este número está presente no array digitado. */

/*#include <stdio.h>

int main(void) {
    double conjunto [5];
    double busca;
    int i;

    for (i=0; i<5; i++){
      printf ("digite o %d-esimo elemento: ",i);
      scanf ("%lf", &conjunto[i]);
    }

    printf ("digite o numero para buscar:\n");
    scanf ("%lf", &busca);

    for (i=0; i<5; i++){
      if (conjunto[i] == busca){
        printf ("o número %lf encontrado na posição %d\n", busca, i);
      }
    }

  return 0;
}*/




/*3) Faça um programa que leia 5 números inteiros e os armazene em um array. Depois faça o programa ler mais 5 números inteiros e armazene em outro array. Finalmente, faça o programa exibir na tela os conjuntos união e interseção gerados a partir dos dois arrays. 
obs: CONSIDERE QUE O USUARIO NAO IRÁ INSERIR NUMEROS REPETIDOS NO MESMO ARRAY

#include <stdio.h>

int main(void) {
      int a[5], b[5];
      int i, j, encontrou;

      for (i=0; i<5; i++){
        printf ("a[%d]=", i);
        scanf ("%d", &a[i]);
      }

      for (i=0; i<5; i++){
        printf ("b[%d]=", i);
        scanf ("%d", &b[i]);
      }

     /*A União B */
     /* printf ("\n A União B = ");


     for (i=0; i<5; i++){
       printf ("%d,",a[i]);
       }


     for (i = 0; i<5; i++){
          for (j=0; j<5; j++){
         if (b[i] == a[j])
           encontrou = 1;
         } if (encontrou == 0){
           printf ("%d,", b[i]);
         } 
         encontrou = 0;
       } 

       printf("\n Interseção B = "); 

       for (i=0; i<5; i++){
         for (j=0; j<5; j++){

          if (a[i] == b[j]){
            printf ("%d,", b[j]);
          }
         }
       }
  return 0;
}*/


/*4) Faça um programa que leia 10 números inteiros e os armazene em um array. Finalmente, faça o programa exibir: o maior e o menor valor digitado (e o índice onde se encontram).


#include <stdio.h>
int main (void) {

  int a[10];
  int i;
  int maior, menor;
  int posMaior, posMenor;

  for (i = 0; i<10; i++){
    printf ("digite o %d-esimo elemento: ", i);
    scanf ("%d", &a[i]);
  }

  for (i = 0; i<10; i++){
    if (i == 0){
      maior = a[0];
      menor = a[0];
      posMaior = 0;
      posMenor = 0;


    } else {
      if (a[i] > maior){
        maior = a[i];
        posMaior = i;
      }


    } if (a[i] < menor){
      menor = a[i];
      posMenor = i;
    }
  }


printf ("o maior elemento: %d que está na poseção %d\n", maior, posMaior);
printf ("o menor elemento: %d que está na poseção %d\n", menor, posMenor);
  return 0;
}
*/

/* 5) Faça um programa que leia 10 números inteiros DIFERENTES a serem armazenados em um array. Caso o usuario digite um número que já foi digitado anteriormente, o programa deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no array, verificando se ele existe entre os numeros que já foram fornecidos. Exibir na tela o array final.*/




/*#include <stdio.h>
int main (void) {
  int a[10];
  int i, j, auxiliar;
  int encontrou = 0;


  i = 0;

  for (i=0; i<10; i++){
    do {
       encontrou = 0;
    printf ("digite o %d-esimo elemento: ", i);
    scanf ("%d", &auxiliar);
      if (i>0){
        for (j=0; j<i; j++){

          if (a[j] == auxiliar)
        encontrou = 1;

          } else  {
        a[i] = auxiliar;
         }
         
    } else {
      a[i] = auxiliar;
    }
  

    } while (encontrou == 1);

  }
    return 0;
  }*/

  /*6) Faça um programa que leia uma string do usuário e exiba quantas vezes cada uma das vogais (A, E, I, O, U) aparece na string digitada.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char nome [30];
  int size;
  int i;
  int quantidade [5] = {0,0,0,0,0};

  printf ("Digite uma string:\n");
  scanf ("%s", nome);

  printf ("String digitada: %s !\n", nome );

  size = strlen(nome);

  for (i=0; i<size; i++){
    switch(nome[i]){
      case 'a':
      case 'A':quantidade [0]++; break;
      case 'e':
      case 'E':quantidade [1]++; break;
      case 'i':
      case 'I':quantidade [2]++; break;
      case 'o':
      case 'O':quantidade [3]++; break;
      case 'u':
      case 'U':quantidade [4]++; break;
    }

  }

  for (i=0; i<5; i++){
    printf ("quantidade de A = %d\n", quantidade[0]);
    printf ("quantidade de E = %d\n", quantidade[1]);
    printf ("quantidade de I = %d\n", quantidade[2]);
    printf ("quantidade de O = %d\n", quantidade[3]);
    printf ("quantidade de U = %d\n", quantidade[4]);

  }
  return 0;
}*/

/*7) Faça um programa que leia uma string do usuário e exiba se esta string representa um PALÍNDROMO (palavra que se pode ler, indiferentemente, da esquerda para a direita ou vice-versa - exemplos: "ANA", "OVO", "SOPAPOS").

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str1 [30];
  char str2 [30];
  int size;
  int i, j;
  j=0;

  printf ("digite uma string:\n ");
  scanf ("%s", str1);

  size = strlen(str1);

    for (i = (size-1); i>=0; i--){
    str2[j] =  str1 [i];
    printf ("str1[%d] = %c = str2[%d]\n", i, str1[i], j);
    j++;
  }


  str2[j] = '\0';
  printf ("string invertida: %s\n", str2);

  if (strcmp(str1, str2)==0){
    printf ("%s e %s são palindromos!\n", str1, str2);
  } else {
    printf ("%s e %s não são palindromos!\n", str1, str2);
  }




  return 0;
}*/

/*8) Faça um programa que leia uma string do usuário e em seguida faça-o ler um caractere (primeiro) e depois outro (segundo). Realize a troca do primeiro caractere pelo segundo na string digitada no início e exiba a string resultante.*/

#include <stdio.h>
#include <string.h>

    int main (void){
      char str1 [30];
      char buscar, modificar;
      int i=0;

      printf ("digite uma string:\n");
      /*scanf ("%s", str1);*/
      gets(str1);

      printf ("digite o caractere a ser buscado:\n ");
      /*scanf ("%c", &buscar);*/
      buscar = getchar();
      getchar();

      printf ("digite o caractere para sunbstituir: \n ");
      /*scanf ("%c", &modificar);*/
      modificar = getchar();

      do {
        if (str1[i] == buscar){
          str1 [i] = modificar;
        }
        i++;

      } while (str1[i] != '\0');

printf("string modificada: %s\n", str1);

  return 0;
}