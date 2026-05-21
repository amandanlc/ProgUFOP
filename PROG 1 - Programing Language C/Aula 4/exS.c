#include <stdio.h>

int maiorValor(int vetor[], int tam){
    int maior;
    
    printf("\nDigite o valor do vetor[0]: ");
    scanf("%d", &vetor[0]);

    maior = vetor[0];

    for (int i = 1; i < tam; i++)
    {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
        if (maior < vetor[i])
        {
            maior = vetor[i];
        }
        
    }
    
    return maior;

}

int main(){
    int vetor[5], tam = 5, maior;

    maior = maiorValor(vetor, tam);

    printf("\nMaior: %d", maior);
 
    return 0;
}