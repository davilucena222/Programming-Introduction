#include <stdio.h>

int main (void){
int n, j, i, y;
scanf ("%d", &n);
int x[n];
for (i = 0; i < n; i++)
  scanf ("%d", &x[i]);

y = x[0];
for (i = 0; i < n; i++){
  if (y > x[i]){
    y = x[i];
    j = i;
  }
}
printf ("Menor valor: %d\n ", y);
printf ("Posição: %d\n", j);

  return 0;
}