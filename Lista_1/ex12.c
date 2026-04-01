#include <stdio.h>

int main(){
    int placa, dezena;

    printf("Escreva o número da placa do seu veículo: (4 algarismos): ");
    scanf("%d", &placa);

    dezena = (placa / 10) % 10;

    printf("O algarismo da casa das dezenas é: %d\n", dezena);
    
    return 0;
}