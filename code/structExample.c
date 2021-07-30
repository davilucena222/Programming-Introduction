#include <stdio.h>


typedef struct {
  char* nome;
  int idade;
  int rg;
  float cra;
} tPessoa; // joao, jose, pedro, maria;

tPessoa joao, jose;

void mudaNome(tPessoa* p, char* nom) {
  p->nome = nom;
}

void mudaIdade(tPessoa* p, int idad) {
  p->idade = idad;
}

int main(void) {

  tPessoa pedro, maria;

  maria.nome = "Maria da Silva";
  joao.nome = "Joao dos Santos";

  joao.idade = 18;
  joao.rg = 8923764;
  joao.cra = 8.5;

  jose.idade = 20;
  maria.idade = 19;

  printf("O CRA de joao: %f\n", joao.cra);
  printf("A idade de Maria: %d\n", maria.idade);
  printf("O nome de Maria: %s\n", maria.nome);
  printf("O nome de Joao: %s\n", joao.nome);

  mudaNome(&joao, "Joao da Silva");
  printf("O novo nome de Joao: %s\n", joao.nome);
  mudaIdade(&maria, 22);
  printf("A nova idade de Maria: %d\n", maria.idade);





}
