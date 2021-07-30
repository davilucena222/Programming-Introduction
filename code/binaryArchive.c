#include <stdio.h>
#define TAMANHO_TURMA 2

/*
 Tipo/Estrutura com tres campos 
*/

typedef struct {
  char nome[40];
  int idade;
  float cra;
} tAluno; 

int main(void) {
  tAluno liDoUsuario[TAMANHO_TURMA]; //array que o usuario define

  tAluno liDoArquivo[TAMANHO_TURMA]; //array que o arquivo define

  int i;
  FILE *arquivo;  //file descriptor

  //arquivo = fopen("arquivo.bin","wb");

  /*
    Solicita informacoes ao usuario e as armazena em
    liDoUsuario[]
  */
  for (i = 0; i < TAMANHO_TURMA; i++) {
    printf("Digite a idade do aluno %d: ", i);
    scanf("%d", &liDoUsuario[i].idade);
    printf("Digite o CRA do aluno %d: ", i);
    scanf("%f", &liDoUsuario[i].cra);
    printf("Digite o nome do aluno %d: ", i);
    gets();
    gets(liDoUsuario[i].nome);
    //fwrite(&liDoUsuario[i], sizeof(tAluno), 1, arquivo);
  }

  arquivo = fopen("arquivo.bin","wb"); //abre arquivo.bin para escrita em formato binario

  fwrite(liDoUsuario, sizeof(tAluno), sizeof(liDoUsuario), arquivo); // escreve o array liDoUsuario[] no arquivo arquivo.bin

  fclose(arquivo); //fechar o arquivo

  arquivo = fopen("arquivo.bin", "rb"); //abre arquivo.bin para leitura binaria

  i = 0; 

  while (!feof(arquivo)) {
    fread(&liDoArquivo[i], sizeof(tAluno), 1, arquivo);
    //le item a item to tipo tAluno armazenado no arquivo
    //copia cada item para array liDoArquivo[]
    i++;
  }

  //exibe conteudo de liDoArquivo[]
  for (i = 0; i < TAMANHO_TURMA; i++) {
    printf("Nome do aluno %d: %s\n", i, liDoArquivo[i].nome);
    printf("Idade do aluno %d: %d\n", i, liDoArquivo[i].idade);
    printf("CRA do aluno %d: %f\n", i, liDoArquivo[i].cra);
  }

  fclose(arquivo);   //fecha arquivo.bin 

  return 0;

}