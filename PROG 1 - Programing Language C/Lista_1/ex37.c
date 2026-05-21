#include <stdio.h>

int main(){
    float salMin, kWres, valorkW, valorT, valorD;

    printf("Digite o valor atual do salário mínimo: ");
    scanf("%f", &salMin);
    printf("Digite a quantidade de quilowatts gasta por sua residência: ");
    scanf("%f", &kWres);

    valorkW = salMin / 700;
    valorT = valorkW * kWres;
    valorD = valorT - (valorT * 0.1);

    printf("O valor de cada quilowatt é de R$%.2f; \nO valor a ser pago é de R$%.2f; \nO novo valor a ser pago com desconto de 10%% é de R$%.2f.", valorkW, valorT, valorD);

    return 0;
}