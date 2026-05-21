#include <stdio.h>

int ordenado(int vetor[], int tamanho) {
    int cres = 0, dec = 0;

    // Entrada do vetor
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Verificação de ordem
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] < vetor[i+1])
            cres = 1;
        else if (vetor[i] > vetor[i+1])
            dec = 1;

        // Se for misto, já pode retornar
        if (cres && dec)
            return 0;
    }

    if (cres && !dec)
        return -1;   // crescente
    else if (dec && !cres)
        return 1;    // decrescente
    else
        return 0;    // todos iguais (não ordenado)
}

int main() {
    int vet[5], tam = 5, ord;

    ord = ordenado(vet, tam);

    if (ord == 1)
        printf("\nOrdenado em ordem decrescente");
    else if (ord == -1)
        printf("\nOrdenado em ordem crescente");
    else
        printf("\nNão ordenado");

    return 0;
}
