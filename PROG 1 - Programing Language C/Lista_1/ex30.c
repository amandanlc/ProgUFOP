#include <stdio.h>

int main(){
    float d, n, div;

    printf("Digite o valor do numerador: ");
    scanf("%f", &n);
    printf("Digite o valor do denominador: ");
    scanf("%f", &d);

    div = n / d;

    printf("O valor de %g/%g = %g", n, d, div);
    
    return 0;
}