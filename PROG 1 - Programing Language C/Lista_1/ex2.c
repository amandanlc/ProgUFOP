#include <stdio.h>

int main() {

    long long int num;

    printf("Escreva um número: ");
    scanf("%lld", &num);

    if(num < 1 || num > 9){

        printf("O valor %lld está fora da faixa permitida", num);

    } else
    {
        printf("O valor %lld está na faixa permitida", num);
    };

    return 0;
    
}