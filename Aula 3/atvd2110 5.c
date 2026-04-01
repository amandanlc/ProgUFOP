#include <stdio.h>

int main(){
    int letra;

    printf("Escreva um número de 97 á 122: ");
    scanf("%d", &letra);

    printf("O número %d corresponde a letra %c", letra, letra);

    return 0;
}
