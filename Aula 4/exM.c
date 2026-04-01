#include <stdio.h>

double media(int vetor[], int tamanho){
    double media;
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);

        soma += vetor[i];
    }

    media = (double)soma / tamanho;

    return media;
}

int main(){
    int vetor[4], tam = 4;
    double M;

    M = media(vetor, tam);

    printf("Media dos valores dos vetores: %.2f", M);

    return 0;
}