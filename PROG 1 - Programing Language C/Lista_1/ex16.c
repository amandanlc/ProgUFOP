#include <stdio.h>

int main(){
    long long int num, sucessor, antecessor;

    printf("Digite um número: ");
    scanf("%lld", &num);

    sucessor = num + 1;
    antecessor = num - 1;

    printf("O antecessor do número %lld é: %lld, o sucessor é: %lld", num, antecessor, sucessor);

    return 0;
}