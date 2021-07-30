//exibição normal
// declarando e varrendo arrays
/*#include <stdio.h>

int main(void) {
  char nome[10];
  for (int i = 0; i<10; i++){
    printf ("%c", nome[i]);
    //acessando o array, invoca o índice que está no for
  }
  return 0;
}*/


//exbição inversa
/*#include <stdio.h>

int main(void) {
  char nome[10];
  for (int i = 9; i>=0; i--){
    printf ("%c", nome[i]);
  }
  return 0;
}*/

/*#include <stdio.h>

int main(void) {
  char nome[10];
  for (int i = 0; i<10; i++){
    scanf ("%c", &nome[i]);
    //passando o enderço para modificá-lo, acessando as opções para modificar
    //nome[3]='d';
    //printf ("%c", nome[2]);
    
  }
  return 0;
}*/

#include <stdio.h>

/*int main(void) {
char nome [] = "ABRACADABRA"; //11 caracteres apenas, mas com o \0 se torna 12 caracteres, sempre adicionando um caractere a mais devido o \0.
//12 elementos, que compõe a string.
//strlen ou gets: diz quantos elementos tem até o barra zero
//se digitar uma quantidade de elementos a mais que o limite, não funcionará o código pois não tem delimitador \0
  }
  return 0;
}*/



/*double formula(int c, int d){
double r;
r = (2*c) + pow (10, d);
return r;

}

int main (void){
  double x;
  int i =10;
  int j = 100;
  x = formula (10,20);
  printf ("%.2lf", formula(2,3));
  //pode declarar dentro da função e no printf, tanto com números ou variáveis, ela calcula do mesmo jeito, porém, para variáveis é necessário repassar o valor a variável antes para ser calculado

  x = formula (i,j);
}
// invocando a função formula, é como se estivesse copiando a função

for (int i = 0; i<10; i++){
  x = formula (i,j);
  i++;
  //refazer!!!!
}*/


// PONTEIROS //
//int x; //4 bytes declarados
//x = 4;
//scanf ("%d", &x); é um operador que faz com que acesse o conteúdo variável guarde e acesse ela;

//declarando ponteiros:
//int x; int y; //declarando variável normal;
//int* p, ptr; //declarando ponteiro; é possível armazenar o endereço de memória de uma variável

//p = &x--> p tem o endereço da variável x;
// i comercial retorna o endereço da variável, recuperando o endereço de memoria de uma variavel
//printf ("%p", p);

//printf ("%p", ptr)
//ptr = &y;
//printf ("%p", ptr)
//*ptr = 10 --> operador * acessa o conteudod de memoria

/*int x; int y;

int* ptr;

x = 10; y = 1;
ptr = &x;
(*ptr)++ // incrementando o valor de x
printf ("%d", ptr); // valor de x passa a ser 11

ptr = &x; //armazenando x em ptr
x = y; //x guardando o valor de y
y++;
printf ("%d", ptr) //conteudo de x aqui é igual a 1, mas o printf exibe o valor de x porque ptr guarda o valor de x... */

// FUNÇÃO ALTERANDO O CONTEUDO DE UMA VARIAVEL //

/*int func (int x){
  x = 100;
  return 0;
}
func (y);*/

//PONTEIROS//
//questão da prova//
void troca (int* a, int* b){
 int aux;
 aux = *a;//acessando o conteudo do endereço de x
 *a = *b;//acessando o conteudo do endereço de y
 *b = aux;
}

int main (void){
  int x = 10; int y = 20;
  troca (&x, &y);
  printf ("%d %d", x,y);
}