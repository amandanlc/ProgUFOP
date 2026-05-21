#include <stdio.h>

int main(){
    long long int salMin, salario, qtd;

    printf("Digite o valor atual do salário mínimo: ");
    scanf("%lld", &salMin);
    printf("Digite o valor do seu salário: ");
    scanf("%lld", &salario);

    qtd = salario / salMin;

    printf("Você ganha %lld salários mínimos", qtd);

    return 0;
}