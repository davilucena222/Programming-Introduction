/* #include <stdio.h>

int main(void) {
  float A,B,C, perimetro, perimetroTrapezio;
  scanf ("%f %f %f", &A, &B, &C);


  if ((A+B>C) && (A+C>B) && (B+C>A)) {
    perimetro=A+B+C;
    printf("o perimetro é: %f", perimetro);
    scanf ("%f", &perimetro);
  } else {
    perimetroTrapezio = A+B*C/2;
    printf ("a area é: %f", perimetroTrapezio);
    scanf("%f", &perimetroTrapezio);
  }
  return 0;
 }*/

 #include <stdio.h>

int main(void) {
  int v1,v2,v3,v4,v5;
  double MEDIA;

scanf ("%d %d %d %d %d", &v1, &v2, &v3, &v4, &v5);
MEDIA = (double) v1+v2+v3+v4+v5/5;
printf ("a media é %lf\n", MEDIA);







#include <stdio.h>
#define arrays
int main () ;
  int vet[5], i;
  double soma=0;

    for (i=0; i<5;i++);
 
printf ("digite o elemento %d:\n ", i);
scanf ("%d", &vet[i] );


  for (i=0; i<5; i++) {
   soma = soma + vet[i];
  }
  printf ("MEDIA: %lf\n", soma/5);