/*Questão 1
#include <stdio.h>

int main() {
 
 //declaração de variáveis
 int i;
 char x[26];

//um laço de repetição para exibir o alfabeto de A até Z
 for (i = 0; i < 26; i++) {
     x[i] = 65 + i;
     //exibição na tela das letras
     printf("%c\n", x[i]);
}

printf ("\n");

/laõ de repetição para exibir o alfabeto de  de forma contrária, de Z até A
for (i = 26; i > 0; i--) {
  //por fim, a exibição na tela das letras
}

//por fim a exibição na tela 
printf("%c\n", x[i - 1]);
  

  return 0;
}*/



/*Questão 2:

#include <stdio.h>
 int main (void){

//declaração de variáveis
int soma[4][5]; 
int i, j;
int impar;


//dois laços de repetição para solicitar ao usuário os números do array
for (i = 0; i < 4; i++){
  for (j = 0; j < 5; j++){
    printf ("digite os números: ");
    scanf ("%d", &soma[i][j]);
  }
}


//dois laços de repetição para fazer a soma dos números ímpares
for (i = 0; i < 4; i++){
  for (j = 0; j < 5; j++){
    //condição estabelecida para identificar quais números são ímpares e fazer a operação
    if (soma[i][j] % 2 == 1){
      //operação a ser realizada com os números que são ímpares
     impar = impar + soma[i][j];
    
    } 
  }
}
//exibição dos resultados
printf ("a soma dos impares: \n%d\n", impar);
   return 0;

 }*/




/*Questão 4:*/
 #include <stdio.h>

//declarando as variaveis
typedef struct {
int matriculaAluno;
float media;
} informacoesAluno;

//declaração do array
int main(){
informacoesAluno alunos[10];
int j, reprovado[10], aprovado[10], x = 0, y = 0;

//laço de repetição para imprimir a media
for (j = 0; j < 10; j++){
printf ("informe a media do aluno %d: ", j+1);
//lendo a media do aluno
scanf ("%f", &alunos[j].matricula);

//estabelendo condiciionais para aprovação e reprovação dos alunos

if (alunos[j].media >= 7){
aprovado[x] = aluno[j].matricula;
x++;
} else {
reprovado[y] = aluno[j].matricula;
y++;
}

//fazendo a impressão da matricula dos alunos que conseguiram passa por média
for (j = 0; j < x; j++){
printf ("as matriculas dos alunos que passaram por média %d: %d", j+1, aprovado[j]);
}

//mostrando na tela a matricula dos alunos que não passaram
for (j = 0; j < y; j++){
printf ("as matriculas dos alunos que não conseguiram passar por média %d: %d", j+1, reprovado[j]);
}

return 0;

}

/*Questão 1
#include <stdio.h>

int main() {
 
 //declaração de variáveis
 int i;
 char x[26];

//um laço de repetição para exibir o alfabeto de A até Z
 for (i = 0; i < 26; i++) {
     x[i] = 65 + i;
     //exibição na tela das letras
     printf("%c\n", x[i]);
}

printf ("\n");

/laõ de repetição para exibir o alfabeto de  de forma contrária, de Z até A
for (i = 26; i > 0; i--) {
  //por fim, a exibição na tela das letras
}

//por fim a exibição na tela 
printf("%c\n", x[i - 1]);
  

  return 0;
}*/



/*Questão 2:

#include <stdio.h>
 int main (void){

//declaração de variáveis
int soma[4][5]; 
int i, j;
int impar;


//dois laços de repetição para solicitar ao usuário os números do array
for (i = 0; i < 4; i++){
  for (j = 0; j < 5; j++){
    printf ("digite os números: ");
    scanf ("%d", &soma[i][j]);
  }
}


//dois laços de repetição para fazer a soma dos números ímpares
for (i = 0; i < 4; i++){
  for (j = 0; j < 5; j++){
    //condição estabelecida para identificar quais números são ímpares e fazer a operação
    if (soma[i][j] % 2 == 1){
      //operação a ser realizada com os números que são ímpares
     impar = impar + soma[i][j];
    
    } 
  }
}
//exibição dos resultados
printf ("a soma dos impares: \n%d\n", impar);
   return 0;

 }*/




/*Questão 4:*/
 #include <stdio.h>

//declarando as variaveis
typedef struct {
int matriculaAluno;
float media;
} informacoesAluno;

//declaração do array
int main(){
informacoesAluno alunos[10];
int j, reprovado[10], aprovado[10], x = 0, y = 0;

//laço de repetição para imprimir a media
for (j = 0; j < 10; j++){
printf ("informe a media do aluno %d: ", j+1);
//lendo a media do aluno
scanf ("%f", &alunos[j].matricula);

//estabelendo condiciionais para aprovação e reprovação dos alunos

if (alunos[j].media >= 7){
aprovado[x] = aluno[j].matricula;
x++;
} else {
reprovado[y] = aluno[j].matricula;
y++;
}

//fazendo a impressão da matricula dos alunos que conseguiram passa por média
for (j = 0; j < x; j++){
printf ("as matriculas dos alunos que passaram por média %d: %d", j+1, aprovado[j]);
}

//mostrando na tela a matricula dos alunos que não passaram
for (j = 0; j < y; j++){
printf ("as matriculas dos alunos que não conseguiram passar por média %d: %d", j+1, reprovado[j]);
}

return 0;

}




Questão 1:
#include <stdio.h>

int main(void) {
  //declarando varáveis
 int arrayA[5], arrayB[8]; 
 int i ,j , k = 0;
 int arrayC[8] = {0,0,0,0,0,0,0,0};

//pedindo ao usuário a entrada dos dados
 printf ("informe os valores do array A:\n");
 for (i = 0; i < 5; i++){
   scanf ("%d", &arrayA[i]);
 }
 printf ("\n informe os valores do array B:\n");
 for (i = 0; i < 5; i++){
   scanf ("%d", &arrayB[i]);
 }

 //reailizando as comparações

for (i = 0; i < 5; i++){
  //neste primeiro for iremos percorrer o arrayA, para realizar as comparações com o arrayB
for ( j = 0; j < 8; j++){
  //enquanto que no segundo for iremos percorrer o arrayB para comparamos cada valor com o arrayA
  if (arrayA[i] == arrayB[j]){
    //se os valores forem iguais, serão armazenados no arrayC
    //para reconhecer a posição, utilizei a variável k
    //onde ela é incrementada depois de um número a ser adicionado no array
arrayC[k] = arrayA[i];
k++;

  }
 }
}
//saída de dados
printf ("valores iguais:\n ");
for (i = 0; i < 8; i++){
  printf ("%d\n", arrayC[i]);
}

  return 0;
}

Questão 2:

#include <stdio.h>

int main(void) {
 int start, divisao, arrayH[10], i;

 printf ("******Cálculo de Progressão Geométrica********");

 //pedindo ao usuário a entrada de dados

 printf ("\n Digite o valor inicial: \n");
 scanf ("%d", &start);

 printf ("\n Informe a divisão: \n");
 scanf ("%d", &divisao);

 arrayH[0] = start;

 //declarando para poder realizar o cálculo da PG

 for (i = 0; i < 10; i++){
   //preeenchendo o array que vai armazenar os valores da progressão geométrica
   //é preciso armazenar o valor na posição que é [i+1], pois a primeira posição = 0, já está preenchida
   //realizando isso, faz o preenchimento de todos os valores do array
   arrayH [i + 1] = arrayH[i]*divisao;
 } 
//mostrando na tela os valores decrescente
//e a saída de dados
 printf ("\n valores de ordem decrescente: \n");

 for ( i = 10; i > 0; i--){
   //inicializamos o valor de i = 10, pois é o valor do nosso array
   //como o array vai de 0 até 9, subtraímos 1
   //de acordo com o valor i, mostramos na tela o valor que corresponde a cada posição
   printf ("%d\n", arrayH[i-1]);
 }
  return 0;
}

Questão 3: 

#include <stdio.h>

//declarando a função e suas varíaveis
void mostrar (int y, char* caracter){
  int i;
  for ( i = 0; i < y; i++){
    //usamos um for para exibir o caracteres quantas vezes for preciso
    printf ("%s", caracter);
  }
}


//pedindo ao usuário as infomações da função
int main() {
  //declaração de variáveis
 int valor;
 char caracter[2];

//entrada de dados
 printf ("\n digite um valor: \n");
 scanf ("%d", &valor);
 setbuf(stdin, NULL);
 //fazendo a limpeza do buffer para o gets não receber o \n do teclado

 printf ("\n informe uma letra: \n");
 gets(caracter);

 mostrar (valor, caracter);
 //retornando os valores que foram declarados, para que a função exiba a string
  return 0;
}

Questão 4:

#include <stdio.h>
#include <string.h>

int main (){
char caixa[10];
int criptografando[40];
int troca1, troca2, troca3;
int i;


printf ("forneça a entrada: \n");
gets (caixa);

for (i = 0; i < strlen(caixa); i++){
//utilizamos um for para poder percorrer uma string
troca1 = caixa[i];
//em seguida converti um valor de caracter para um inteiro e utilizei a variável troca1 para armazenar esse valor
troca2 = troca1 - 2;
//daqui, substitui a variável troca1 por 2, para poder saber por qual letra ela será substituída

if (troca2 < 65){ //caso o valor seja menor que 65, onde 65 é a letra A 
  troca3 = 65 - troca2;
  //utilizei a variável troca3 para achar a diferença entre os caracteres digitados, para sabermos qual letra representa o A e assim subtraindo o valor digitado pelo que existe na tabela e fazer a substituição
  troca2 = 91 - troca3;
}

criptografando[i] = troca2;
//armazenando o valor que é referente ao array criptografando

}

printf ("\n entrada que é criptografada: \n");

for (i = 0; i < strlen(caixa); i++ ){
  //no fim usamos um for para exibir os dados que são criptografados 
  printf ("%c", criptografando[i]);
  //aqui convertemos o valor que é inteiro para caracter e assim podermos exibir ele em string
}


  return 0;
}