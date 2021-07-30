#include <stdio.h>
#include <string.h>

    int main (void){
     char str1 [30], str2 [30];
     int size;

     printf ("digite uma string: \n");
     gets(str1);

     /*size = strlen(str1);
     for (int i = 0; i<size; i++){
       str2 [i] = str1 [i];
     }*/ /*(essa função faz a mesma que a debaixo)*/

    strcpy (str2, str1);

     printf (" conteudo str2: %s\n", str2);

  return 0;
}