#include <stdio.h>

int main(){
    int NUM, ant, suc, maior;

    printf("Digite quantos números vai digitar: \n");
    scanf("%d", &NUM);
    
    printf("Número 1: ");
    scanf("%d", &ant);
    maior = ant;

    for (int i = 2; i <= NUM; i++)
    {
        printf("Número %d: ", i);
        scanf("%d", &suc);

        if (maior < suc)
        {
            maior = suc;
        }              
    }    

    printf("%d", maior);

    return 0;
}