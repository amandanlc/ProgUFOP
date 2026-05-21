#include <stdio.h>

int main(){
    float valor, valorD, desconto;

    printf("Escreva o valor do produto: ");
    scanf("%f", &valor);

    desconto = valor * 0.09;
    valorD = valor - desconto;

    printf("O valor com desconto é: %.2f \nO valor do desconto foi de: %.2f", valorD, desconto);

    return 0;
}