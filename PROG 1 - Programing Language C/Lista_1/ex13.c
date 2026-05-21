#include <stdio.h>

int main(){
    int placa, centenas;

    printf("Escreva o número da placa do seu veículo: (4 algarismos): ");
    scanf("%d", &placa);

    centenas = (placa / 100) % 10;

    printf("O algarismo da casa das centenas é: %d\n", centenas);
    
    return 0;
}