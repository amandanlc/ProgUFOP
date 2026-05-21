#include <stdio.h>

int main(){
    long long int num1, num2, soma;

    printf("Escreva um número: ");
    scanf("%lld", &num1);

    printf("Escreva um número: ");
    scanf("%lld", &num2);

    soma = num1 + num2;

    printf("SOMA \n%lld", soma);

    return 0;
}