#include <stdio.h>

/* 

A relacao entre funcoes e arrays

*/

void preencheArrayBiDimensional(int arr[][2], int i) {
  int ii, jj;

  for (ii = 0; ii < i; ii++) {
    for (jj = 0; jj < 2; jj++) {
      printf("Digite o elemento [%d][%d]: ", ii, jj);
      scanf("%d", &arr[ii][jj]);
    }
  }

}

void exibirArrayBiDimensional(int arr[][2], int i) {
  int ii, jj;

  for (ii = 0; ii < i; ii++) {
    for (jj = 0; jj < 2; jj++) {
       printf("%d\n",arr[ii][jj]);
    }
  }

}

int main(void) {
  int numeros[2][2] = {{0}};

  preencheArrayBiDimensional(numeros, 2);
  exibirArrayBiDimensional(numeros, 2);

}
