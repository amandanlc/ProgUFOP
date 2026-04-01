#include <stdio.h>

int main(){
    float num, resultado;

    printf("Digite um número: ");
    scanf("%f", &num);

    resultado = num / 3;
    printf("A terça parte do número %g é igual a %g", num, resultado);

    return 0;
}