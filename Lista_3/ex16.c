#include <stdio.h>
#include <stdlib.h>

void maiorMenorValor(int a, int b, int c, int *maior, int *menor) {
    if (a > b && a > c)
    {
        *maior = a;
    } else if (b > c && b > a)
    {
        *maior = b;
    }else{
        *maior = c;
    }

    if (a < b && a < c)
    {
        *menor = a;
    } else if (b < c && b < a)
    {
        *menor = b;
    }else{
        *menor = c;
    }
}

int main() {
    int a = 4, b = 6, c = 1;
    int *maior = (int *)malloc(sizeof(int));
    int *menor = (int *)malloc(sizeof(int));
    maiorMenorValor(a, b, c, maior, menor);
    printf("Maior: %d \nMenor: %d", *maior, *menor);
    free(maior);
    free(menor);
}