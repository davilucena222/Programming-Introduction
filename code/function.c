/*#include <stdio.h>

  //as chaves delimitam onde a função termina e tudo que será executado dentro dela...
 double CalculeAreaRetangulo (double base, double altura){
   return (base*altura);

   //outro modo...
   double area = 0;
   area = base*altura;
   return area;
 }
  int main(void) { 
    double b,a,z;
    scanf ("%lf %lf", &b, &a);
    z = ((CalculeAreaRetangulo(b,a)+10)*2);
    printf ("%lf ", (CalculeAreaRetangulo(b,a)));


    return 0;
   }*/


//CALCULO DE NUMERO MENOR E MAIOR, IMPAR E PAR;
   /*#include <stdio.h>

   int NumeroParImpar (int a){
     if(a>=0){
       printf ("%d é positivo\n", a);
      } else {
       printf ("%d é negativo\n", a);
      } 
     if(a%2==0){
       printf ("%d é par\n", a);
      } else {
         printf ("%d é impar\n",a);
       }
   }
   int main (void){
     int a,x;
      printf ("digite o valor de A:\n");
      scanf ("%d", &a);
      x = NumeroParImpar(a);
    printf ("%d", (NumeroParImpar(a)));

   }*/





//AREA DP RETANGULO
   /*double CalculeAreaRetangulo (double base, double altura){
     double area;
     area = base*altura;
     return (area);
   }

   int main (void){
     double b,a,area;
     printf ("digite a base e altura do retangulo:\n");
     scanf ("%lf %lf", &b, &a);
     area = CalculeAreaRetangulo(b,a);

     printf ("area do retangulo: %lf", CalculeAreaRetangulo(b,a));
     return 0 ;
   }*/

//DIGITAR DOIS NUMEROS DE MOSTRAR QUAL DOS DOIS É O MAIOR...
/*#include <stdio.h>
  FuncaoMenor (int x, int y){
     if (x>y){
       return (y);
     } else {
       return(x);
     } 
   } 

   int main (void){
     int a,b;
     printf ("digite dois valores:\n ");
     scanf ("%d %d", &a, &b);

     printf ("o menor valor: %d", FuncaoMenor(a,b));
     
     return 0;
   }*/


#include <stdio.h>

  //Função que converte celsius em farenheit

double CelsiusFarenheit (double C){
     double f;

     f = (double)(C * 9/5) + 32;
     return (f);
}

   int main (void){
     double c,f;
     for ( c=0; c<=100; c+=10){
       printf ("%lf C = %lf f\n", c,CelsiusFarenheit(c)) ;
     }

    return 0;
 
}