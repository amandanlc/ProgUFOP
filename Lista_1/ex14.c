#include <stdio.h>

int main(){
    int placa, milhar;

    printf("Escreva o número da placa do seu veículo: (4 algarismos): ");
    scanf("%d", &placa);

    milhar = (placa / 1000) % 10;

    printf("O algarismo da casa dos milhares é: %d\n", milhar);
    
    return 0;
}