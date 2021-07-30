/*#include <stdio.h>

int main(void) {
int horainicial, horafinal, minutofinal, minutoinicial,duracao, duracao1;
printf ("digite a hora inicial: \n") ;
scanf ("%d", &horainicial);
printf ("digite a minuto inicial: \n") ;
scanf ("%d", &minutoinicial);
printf ("digite a hora final: \n") ;
scanf ("%d", &horafinal);
printf ("digite o minuto final: \n") ;
scanf ("%d", &minutofinal);

          duracao1 = horafinal - horainicial;
          if (duracao1<0){
          duracao1 = 24 + (horafinal - horainicial);
          } duracao = minutofinal - minutoinicial;
         if (duracao<0) {
            duracao = 60 + (minutofinal - minutoinicial);
          }

          if (horafinal == horainicial && minutofinal == minutoinicial) {
            printf ("O JOGO DUROU 24H E 0 MINUTOS");
          } else {
            printf ("O JOGO DUROU %d HORAS E %d MINUTOS", duracao1, duracao);
          }
          return 0;
          }




          
          /*primeiro jogo*/
*/
/*if (horainicial>=horafinal) { 
duracao = ( 24 - horainicial) + horafinal;
printf ("O JOGO DUROU %d HORAS", duracao);
scanf ("%d", &duracao);
} else (duracao = horafinal - horainicial);{
printf ("O JOGO DUROU %d HORAS", duracao);
}

  return 0;
}*/



segundo codigo:

/*#include <stdio.h>

int main(void) {
  char re [] = "lagarto";
  printf("%c", re []);
  return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
  char re [80];
  printf ("digite seu nome:\n");
  gets (&re);
  printf ("Oi %s\n", re);
system ("pause");
return 0;
}*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void) {
  char re[80];
  char senha[] = "ABCDEF";

  printf ("digite a senha:\n");
  gets(re);


  printf ("voce digitou: %s\n", re);
  int i = strcmp(senha, re);
  printf ("resultado do strcmp: %i\n", i);
  system ("pause");
  return 0;
}