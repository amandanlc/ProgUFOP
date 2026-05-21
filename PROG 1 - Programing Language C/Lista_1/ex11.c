#include <stdio.h>

int main(){
    int placa, unidade;

    printf("Escreva o número da placa do seu veículo: (4 algarismos): ");
    scanf("%d", &placa);

    unidade = placa % 10;

    printf("O algarismo da casa das unidades é: %d\n", unidade);
    
    return 0;
}