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













 #define tam 5
 int main () ;
 int a[tam], b[tam], c[tam], d[tam];
 int x;


 for (x=0;x<tam;x++) {
   printf ("digite o elemento %d", i);
   scanf ("%d", &a[i]);
 }

 for (x=0;x<tam;i++) {
   printf ("digite o elemento %d", i);
   scanf ("%d", &b[i]);
   c[x] = a[x] + b[x];
 }
 for (x=0;x<tam;x++) {
   printf ("digite o elemento %d", i);
   scanf ("%d", &c[x]);
 }

int j=tam-1;
for (x=0; x<tam;x++) {
  d[i] = c[j];
  j--;
}
 
 return 0;
 }


 /*int v[5];
  int x;
  v[0]=10;
  printf ("%d", v[0]);
  x=v[0];
  v[4]=1000;

  define items 100
  int arr[items]*/