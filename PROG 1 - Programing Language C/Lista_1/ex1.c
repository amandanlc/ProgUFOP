#include <stdio.h>

int main() {

    long long int num;

    printf("Escreva um número: ");
    scanf("%lld", &num);

    if (num % 2 == 0) {
        printf("O número %lld é par", num);
    } else {
        printf("O número %lld é ímpar", num);
    }

    return 0;
}
