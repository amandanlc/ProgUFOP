#include <stdio.h>

int verifica(int vetor[], int tamanho, int produto){
    int ver = 0; 

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] * vetor[i + 1] == produto)
        {
            ver = 1;
        }        
    }

    if (ver)
    {
        return 1;
    }else
    {
        return 0;
    }   
    
}

int main(){
    int vet[3], tam = 3, prod = 20;

    if (verifica(vet, tam))
    {
        printf("Algum dos elementos multiplicados = %d", prod);
    }
}