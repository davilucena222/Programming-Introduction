#include <stdio.h>

int main(void) {
  char* nomeArquivo = "texto.txt";
  char buf[40];
  char str[10];
  int var_i_1, var_i_2;
  float var_f_1;
  FILE *arquivo;
  int resultado;
  char c;

  arquivo = fopen(nomeArquivo, "a+");

  fputs("UKJJO 3000 0.2 44", arquivo);
  fputs("IKJSA 2000 2.3 99", arquivo);

  fclose(arquivo);

  //abre arquivo, insere duas strings e fecha arquivo

  arquivo = fopen(nomeArquivo, "r");

  if (arquivo == NULL) { 
    printf("ERRO: arquivo %s nao existe!\n", 
            nomeArquivo);
    return 0;
  } else {
    printf("Arquivo %s existe!\n", nomeArquivo);

    do {
      //MXTYU 1000 0.9 14"
      fscanf(arquivo, "%s %d %f %d", str, &var_i_1, 
            &var_f_1, &var_i_2);
      printf("Codigo: %s\n", str);
      printf("Quantidade: %d\n", var_i_1);
      printf("Peso: %f kg\n", var_f_1);
      printf("Versao: %d\n", var_i_2);
      printf("-------\n");
    } while(!feof(arquivo));
  }

  printf("\n---- FIM DO ARQUIVO! ----\n");

  return 0;
}