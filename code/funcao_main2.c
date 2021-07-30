#include <stdio.h>
#include <stdlib.h>

/*

Exemplo onde a funcao main recebe uma quantidade arbitraria de numeros e calcula a media deles

*/

int main(int argc, char* argv[]) {
  int i;
  float soma = 0;
  
  /*
  
  char* str = "1000";
  int n;

  n = atoi(str); //n = 1000
  
  */
  
  printf("Quantidade de argumentos: %d\n",argc);

  for (i = 0; i < argc; i++)
    printf("argv[%d] = %s\n", i, argv[i]);

  for (i = 1; i < argc; i++) {
    soma += atof(argv[i]);
    // soma += strtof(argv[i], (char **)NULL); // EQUIVALENTE MAIS SEGURO
    
  }
  if (argc > 1)
    printf("Media dos numeros inseridos: %f\n",(soma/(argc-1)));


  return 0;
}

