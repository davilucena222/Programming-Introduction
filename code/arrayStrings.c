#include <stdio.h>
#include <string.h>
int main(void) {
     char A[20];
     char B[20];
     char C[20];

     scanf ("%s", A);
     scanf ("%s", B);
     scanf ("%s", C);

     if ((strcmp("vertebrado", A) == 0) && (strcmp("ave", B) ==0 ) && (strcmp("carnivoro", C)==0)) {
       printf ("aguia");
     } if ((strcmp("vertebrado",A)==0) && (strcmp("ave", B)==0) && (strcmp("onivoro", C)==0)) {
       printf ("pomba\n");       
     } if  ((strcmp("vertebrado",A)==0) && (strcmp("mamifero", B)==0) && (strcmp("onivoro", C)==0)) {
       printf ("homem\n");       
     } if  ((strcmp("vertebrado",A)==0) && (strcmp("mamifero", B)==0) && (strcmp("herbivoro", C)==0)) {
       printf ("vaca\n");       
     } if  ((strcmp("invertebrado",A)==0) && (strcmp("inseto", B)==0) && (strcmp("hematofago", C)==0)) {
       printf ("pulga\n");       
     } if  ((strcmp("invertebrado",A)==0) && (strcmp("inseto", B)==0) && (strcmp("herbivoro", C)==0)) {
       printf ("lagarta\n");       
     } if  ((strcmp("invertebrado",A)==0) && (strcmp("anelideo", B)==0) && (strcmp("hematofago", C)==0)) {
       printf ("sanguessuga\n");       
     }  if  ((strcmp("invertebrado",A)==0) && (strcmp("anelideo", B)==0) && (strcmp("onivoro", C)==0)) {
       printf ("minhoca\n"); 
     }


  return 0;
}