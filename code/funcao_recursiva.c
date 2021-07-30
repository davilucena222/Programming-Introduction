#include <stdio.h>


// COM RECURSIVIDADE
int fatorial(int n) {
/* condicao de terminacao (ou solucao trivial) */
  if (n == 0) {
    return 1;
  } else if (n < 0) { //teste para valor invalido - fatorial so de numeros positivos
    return -1;
  }
  return (n * fatorial(n-1)); //chamada recursiva, decrementando n - n chega em 0
}
/*
Ex. fatorial(5) = 120;
fatorial(5) = return 5 * fatorial(4); // 5 * 24 = 120
fatorial(4) = return 4 * fatorial(3); // 4 * 6 = 24
fatorial(3) = return 3 * fatorial(2); // 3 * 2 = 6
fatorial(2) = return 2 * fatorial(1); // 2 * 1 = 2
fatorial(1) = return 1 * fatorial(0); // 1 * 1 = 1
fatorial(0) = return 1;
*/

// SEM RECURSIVIDADE
int fatorialSR(int n) {
  int result = 1;
  int i;
  if (n < 0) { //teste para valor invalido - fatorial so de numeros positivos
    return -1;
  }
  for(i = n; i > 0; i--) {
    result *= i; // result = result * i;
  }
  return result;
}

int main(void) {

  int x = 5;
  printf("Fatorial de %d = %d\n", x, fatorial(x));
  printf("Fatorial de %d = %d\n", x, fatorialSR(x));
  return 0;
}

