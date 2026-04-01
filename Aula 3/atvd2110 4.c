#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    int d1 = num1 / num2;
    float d2 = (float)num1 / num2;
    int resto = num1 % num2;

    printf("Divisão do número inteiro: %d \nDivisão fracionária: %g \nResto da divisão: %d", d1, d2, resto);
}