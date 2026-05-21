#include <stdio.h>

int palindrome(int vetor[], int tamanho){
    int cres = 0, dec;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] < vetor[i+1])
            cres = 1;
        else if (vetor[i] > vetor[i+1])
            dec = 1;
        if (cres && dec)
            return 0;
    }

    if (cres && !dec)
        return -1;
    else if (dec && !cres)
        return 1;
    else
        return 0;
}

int main(){

}