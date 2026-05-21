#include <stdio.h>

int main(){
    float despesas, gorjeta, vTotal;

    printf("Digite o valor de suas despesas no restaurante: ");
    scanf("%f", &despesas);

    gorjeta = despesas * 0.1;
    vTotal = despesas + gorjeta;

    printf("O valor da gorjeta é de R$%.2f \nO valor total é de R$%.2f", gorjeta, vTotal);

    return 0;
}