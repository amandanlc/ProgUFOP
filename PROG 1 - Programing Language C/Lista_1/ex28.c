#include <stdio.h>
#include <math.h>

int main(){
    float V, R, h;

    printf("Escreva o valor do raio da lata de óleo: ");
    scanf("%f", &R);
    printf("Escreva o valor da altura da lata de óleo: ");
    scanf("%f", &h);

    V = 3.14159 * pow(R, 2) * h;

    printf("O volume da lata de óleo é igual a: %g", V);
    
    return 0;
}