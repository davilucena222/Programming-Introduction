#include <stdio.h>

/* 

A relacao entre funcoes e arrays

*/

/* funcao recebe o endereco para o primeiro elemento de um array
   e a quantidade de elementos a varrer para exibir */

/* para exibir o array inteiro, portanto, usa-se 
   exibirArrayInt(nomeArray, tamanhoArray) 
*/
void exibirArrayInt(int arr[], int n) {
  int i;

  for (i = 0; i < n; i++)
    printf("%d\n", arr[i]);

}

/* funcao recebe o endereco para o primeiro elemento de um array
   e a quantidade de elementos a varrer e calcular a media */

/* para calcular a media do array inteiro, portanto, usa-se 
   mediaArrayInt(nomeArray, tamanhoArray) 
*/

float mediaArrayInt(int arr[], int n) {
  float soma = 0;
  int i;

  for (i = 0; i < n; i++)
    soma += arr[i];

  return (soma/n);
}

/*
  funcao que retorna array declarado no escopo local dela 

*/
/*
warning: address of stack memory associated with
      local variable 'arr' returned [-Wreturn-stack-address]
*/
int* retornaArray(void) {
  int arr[3] = {3,6,9};
  return arr;
}

/*
  funcao que recebe um array (previamente declarado/alocado) como parametro,
  a quantidade de elementos (como parametro inteiro)
  e o preenche de acordo com a logica array[i] = 2*i;

*/

void preencherArray(int arr[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    arr[i] = i*2;
  }
}
/*
  funcao que recebe um array (previamente declarado/alocado) como parametro,
  a quantidade de elementos (como parametro inteiro)
  e realiza a modificacao dos valores dos elementos desse array, duplicando seus
  valores

*/
void dobrarArray(int arr[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    arr[i] = (arr[i]*2);
  }
}


int main(void) {
  int numeros[10] = {10,20,30,43,50,61,100,209,1000,2000};
                 // {0 , 1, 2, 3, 4, 5, 6 , 7 , 8  ,  9 }

  int sequencia[10];

  preencherArray(sequencia, 10);

  dobrarArray(sequencia, 10);

  exibirArrayInt(sequencia, 10);


  int *p;
  p = retornaArray();
  printf("%d\n",p[2]);

  printf("Array todo:\n");
// EXIBIR TODO O ARRAY (10 ELEMENTOS)
  exibirArrayInt(numeros, 10); 
// CALCULAR MEDIA DO ARRAY TODO (10 ELEMENTOS)
  printf("Media dos numeros: %f\n", mediaArrayInt(numeros, 10));

  printf("3 Primeiros elementos do Array:\n");
// EXIBIR 3 PRIMEIROS elementos
  exibirArrayInt(numeros, 3); 
// CALCULAR MEDIA DOS 3 PRIMEIROS ELEMENTOS 
  printf("Media dos numeros: %f\n", mediaArrayInt(numeros, 3));
  
  printf("5 elementos a partir do indice 3:\n");
// EXIBIR 5 ELEMENTOS A PARTIR DO ELEMENTO DE INDICE 3 (4o elemento)
  exibirArrayInt(&numeros[3], 5); 
// CALCULAR MEDIA DE 5 ELEMENTOS A PARTIR DO ELEMENTO DE INDICE 3 (4o elemento)
  printf("Media dos numeros: %f\n", mediaArrayInt(&numeros[3], 5));
*/
  return 0;

}
i#include <stdio.h>

/* 

A relacao entre funcoes e arrays

*/

/* funcao recebe o endereco para o primeiro elemento de um array
   e a quantidade de elementos a varrer para exibir */

/* para exibir o array inteiro, portanto, usa-se 
   exibirArrayInt(nomeArray, tamanhoArray) 
*/
void exibirArrayInt(int arr[], int n) {
  int i;

  for (i = 0; i < n; i++)
    printf("%d\n", arr[i]);

}

/* funcao recebe o endereco para o primeiro elemento de um array
   e a quantidade de elementos a varrer e calcular a media */

/* para calcular a media do array inteiro, portanto, usa-se 
   mediaArrayInt(nomeArray, tamanhoArray) 
*/

float mediaArrayInt(int arr[], int n) {
  float soma = 0;
  int i;

  for (i = 0; i < n; i++)
    soma += arr[i];

  return (soma/n);
}

/*
  funcao que retorna array declarado no escopo local dela 

*/
/*
warning: address of stack memory associated with
      local variable 'arr' returned [-Wreturn-stack-address]
*/
int* retornaArray(void) {
  int arr[3] = {3,6,9};
  return arr;
}

/*
  funcao que recebe um array (previamente declarado/alocado) como parametro,
  a quantidade de elementos (como parametro inteiro)
  e o preenche de acordo com a logica array[i] = 2*i;

*/

void preencherArray(int arr[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    arr[i] = i*2;
  }
}
/*
  funcao que recebe um array (previamente declarado/alocado) como parametro,
  a quantidade de elementos (como parametro inteiro)
  e realiza a modificacao dos valores dos elementos desse array, duplicando seus
  valores

*/
void dobrarArray(int arr[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    arr[i] = (arr[i]*2);
  }
}


int main(void) {
  int numeros[10] = {10,20,30,43,50,61,100,209,1000,2000};
                 // {0 , 1, 2, 3, 4, 5, 6 , 7 , 8  ,  9 }

  int sequencia[10];

  preencherArray(sequencia, 10);

  dobrarArray(sequencia, 10);

  exibirArrayInt(sequencia, 10);


  int *p;
  p = retornaArray();
  printf("%d\n",p[2]);

  printf("Array todo:\n");
// EXIBIR TODO O ARRAY (10 ELEMENTOS)
  exibirArrayInt(numeros, 10); 
// CALCULAR MEDIA DO ARRAY TODO (10 ELEMENTOS)
  printf("Media dos numeros: %f\n", mediaArrayInt(numeros, 10));

  printf("3 Primeiros elementos do Array:\n");
// EXIBIR 3 PRIMEIROS elementos
  exibirArrayInt(numeros, 3); 
// CALCULAR MEDIA DOS 3 PRIMEIROS ELEMENTOS 
  printf("Media dos numeros: %f\n", mediaArrayInt(numeros, 3));
  
  printf("5 elementos a partir do indice 3:\n");
// EXIBIR 5 ELEMENTOS A PARTIR DO ELEMENTO DE INDICE 3 (4o elemento)
  exibirArrayInt(&numeros[3], 5); 
// CALCULAR MEDIA DE 5 ELEMENTOS A PARTIR DO ELEMENTO DE INDICE 3 (4o elemento)
  printf("Media dos numeros: %f\n", mediaArrayInt(&numeros[3], 5));
*/
  return 0;

}

