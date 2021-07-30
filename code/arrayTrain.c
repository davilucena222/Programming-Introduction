/*#include <stdio.h>


int main () {
  double mediasAlunos[10];
  double mediaTurma;
  double total;
  mediasAlunos[2] = 3;
  mediasAlunos[0] = 0;
  mediasAlunos[1] = 1;

  for(int i = 3; i<10;i++){
    mediasAlunos[i] = 2;

  }

  for(int i = 0; i<10; i++){
    printf("Aluno %i = %lf pontos\n", i+1, mediasAlunos[i]);



  }
  for(int i = 0; i<10; i++){
    total+=mediasAlunos[i];

  }
  mediaTurma = total/10;
  printf("%lf", mediaTurma);




return 0;
}*/
  
// #include <stdio.h>


// int main () {
//   int idades[5];
//   int idadesEmOrdem[5];
//   for(int i = 0; i <5; i++){
//     idadesEmOrdem[i] = 0;

//   }

//   printf ("digite a idade de 5 usuaarios de drogas\n");
// for (int i=0; i<5; i++){
//   scanf ("%i", &idades[i]);
// } 


// for (int i = 0; i<5;i++){
//   if(idades[i]>idadesEmOrdem[4]){
//     idadesEmOrdem[4] = idades[i];
//   }
// }


// for(int i = 0; i<5; i++){
//   if(idades[i]<idadesEmOrdem[4]){
//     if(idadesEmOrdem[3]<idades[i])
//     {
//       idadesEmOrdem[3] = idades[i];
//     }
//   }
// }

// for(int i = 0; i<5; i++){
//   if(idades[i]<idadesEmOrdem[3]){
//     if(idadesEmOrdem[2]<idades[i])
//     {
//       idadesEmOrdem[2] = idades[i];
//     }
//   }
// }

// for(int i = 0; i<5; i++){
//   if(idades[i]<idadesEmOrdem[2]){
//     if(idadesEmOrdem[1]<idades[i])
//     {
//       idadesEmOrdem[1] = idades[i];
//     }
//   }
// }

// for(int i = 0; i<5; i++){
//   if(idades[i]<idadesEmOrdem[1]){
//     if(idadesEmOrdem[0]<idades[i])
//     {
//       idadesEmOrdem[0] = idades[i];
//     }
//   }
// }

// printf("\n\n\n");

// printf ("%i\n", idadesEmOrdem[0]);
// printf ("%i\n", idadesEmOrdem[1]);
// printf ("%i\n", idadesEmOrdem[2]);
// printf ("%i\n", idadesEmOrdem[3]);
// printf ("%i\n", idadesEmOrdem[4]);


// return 0;
// }

#include <stdio.h>

int main(){

  int qtPrints = 0;
  scanf("%i", &qtPrints);

  for (int i = 0; i<=qtPrints; i++){
    printf("Seboso\n");
  }

  return 0;
}