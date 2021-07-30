/*questão 1
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
     printf("%c\n", x[i - 1]);
}
  

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