#include <stdio.h>

int main(void) {

  int posicaoAumento = 0;
  int porcent = 0;

  //criar Array de salarios com 3 espaços
  double salarios[3];


  printf ("digite o salario de 3 usuarios:\n");

  //for pra preencher o array
  //i < que o tamanho do array, para preencher até o ultimo espaço
  for (int i=0; i<3; i++){
    //scanf alterando o array na posicao i do for
    scanf ("%lf", &salarios[i]);
  }

  //for para printar todas as posições do array
  for (int i=0; i<3; i++){
    //o print vai acessar cada posição por meio do indice i, e esse indice será mostrado no print
    printf ("o salario da posição %i é %.2lf\n", i,salarios[i]);
  }



  printf("Digite o indice do salario que deseja aumentar\n");
  scanf("%i", &posicaoAumento);
  printf ("digite a porcentagem de aumento:\n");
  scanf ("%d", &porcent);

  //expressao para aumentar o valor do salario na posição digitada de acordo com a porcentagem também digitada
  salarios[posicaoAumento] += salarios[posicaoAumento] * porcent / 100;
  
  //o mesmo for para printar todos os salarios atualizados
  for (int i=0; i<3; i++){
    printf ("o salario da posição %i é %.2lf\n", i,salarios[i]);
  }


       
  return 0;
}