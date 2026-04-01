#include <stdio.h>

int main(){

    long long int num;

    printf("Escreva um número: ");
    scanf("%lld", &num);

    if (num % 2 == 0)
    {
        long long int P = num;
        printf("O número %lld é par", P);
    } else
    {
        long long int I = num;
        printf("O número %lld é ímpar", I);
    }

    return 0;
}