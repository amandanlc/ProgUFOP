// atvd 6 : duas variaveis, digita a inteira e um char, converta o inteiro para char

#include <stdio.h>

int main(){
    int letra;

    printf("Escreva um número de 97 á 122: ");
    scanf("%d", &letra);

    char letraC = letra;

    printf("O número %d corresponde a letra %c", letra, letraC);

    return 0;
}
