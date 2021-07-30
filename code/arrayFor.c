    /*#include <stdio.h>

    int main(void) {
      int A [10];
      int B [10];
      int C [10];
      int j;

      //printf ("digite os valores para A:\n");
      for (int i=0; i<10; i++){
        printf ("digite os valores de %i:\n", i);
        scanf ("%i",  &A[i]);
      }

      for (int i=0; i<10; i++){
  // printf ("os valores  de A[%d] = %d\n",i, A[i]);
      B[i] = (2*i) + A[i];
      printf ("B[%d] = (%d) + %d\n",i, (2*i), A[i]);
      printf ("B[%d] = %d\n",i, B[i]);
      }
      printf ("\n");
        j=0;
        for (int i=9; i>=0; i--){
          printf ("B[%d] = %d\n", i, B[i]);
          C[j] = B[i];
          j++;
        }
      return 0;
    }*/

    #include <stdio.h>

    int main(void) {
      int A [10];
      int B [10] = {0,0,0,0,0,0,0,0,0,0};
      int j;
   

      printf ("digite os valores para A:\n");

      for (int i=0; i<10; i++){
      printf ("digite os elemntos %i:\n", i);
      scanf ("%i",  &A[i]);
      }

           j=0;
      for (int i=0; i<10; i++){

        if ((A[i] % 2) == 0) {  
          B[j] = A[i];
          j++;

        // o J adiciona uma posição no B[i], caso o número que o usuário digitou seja par!!!!

        }

        for (int i=0; i<10; i++){
          printf ("B[%d] = %d\n", i, B[i]);
        }

      }


      return 0;
    }
