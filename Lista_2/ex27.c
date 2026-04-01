#include <stdio.h>
#include <math.h>

int main(){    
   int num1, num2;
   char letra;
   float A, r, t1, t2, t3;
   
   printf("\nDigite um caractere (T, Q ou H): ");
   scanf("%c", &letra);

   printf("\nDigite o valor do raio: ");
   scanf("%f", &r);

   switch(letra){
    case 'T':
    case 't':
        printf("\nDigite o valor dos lados do triangulo: ");
        scanf("%f %f %f", &t1, &t2, &t3);
        
        A = t1 * t2 * t3 / (4 * r);
        printf("Area triangulo inscrito = %g", A);
        break;
    case 'Q':
    case 'q':
        A = 2 * (r * r);
        printf("Area quadrado inscrito = %g", A);
        break; 
    case 'H':
    case 'h':
        A = (r * r) * 3 * sqrt(3) / 2;
        printf("Area hexagono inscrito = %g", A);
        break;
    default:
        printf("Letra invalida");        
   }
   return 0;
}