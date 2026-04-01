#include <stdio.h>

int main(){
    float deposito, juros, rendimento, total;

    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);
    printf("Digite o valor da taxa de juros em decimal (10%% = 0.1): ");
    scanf("%f", &juros);

    rendimento = deposito * juros;
    total = deposito + rendimento;

    printf("O valor do rendimento é de: %.2f \nO valor total é de: %.2f", rendimento, total);

    return 0;
}