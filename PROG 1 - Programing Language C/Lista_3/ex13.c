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
    int vetor[2], tam = 2, maior;

    maior = maiorValor(vetor, tam);

    printf("\nMaior: %d", maior);

    // TESTE
    int teste, maiorT;
    int vetorT[] = {3, 7, 22, 25};
    
    maiorT = vetorT[0];

    for (int i = 1; i < 4; i++)
    {
        if (vetorT[0] < vetorT[i])
        {
            maiorT = vetorT[i];
        }      
        
    }
    
    printf("\n========= TESTE =========");
    printf("\nMaior teste: %d", maiorT);
 
    return 0;
}