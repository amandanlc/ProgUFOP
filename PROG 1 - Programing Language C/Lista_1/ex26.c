#include <stdio.h>

int main(){
    float valorH, descontoINSS, salarioB, salarioL;
    long long int nAulas, horas;

    printf("Escreva qual o valor da sua hora: ");
    scanf("%f", &valorH);
    printf("Escreva quantas horas por dia você trabalha: ");
    scanf("%lld", &horas);
    printf("Escreva quantas aulas você dá no mês: ");
    scanf("%lld", &nAulas);
    printf("Escreva o percentual de desconto do INSS em números decimais (10%% = 0.1): ");
    scanf("%f", &descontoINSS);

    salarioB = (valorH * horas) * nAulas;
    salarioL = salarioB - (salarioB * descontoINSS);

    printf("O seu salário líquido é de: %g", salarioL);

    return 0;
}