#include <stdio.h>

int main(){
    int ant, suc, maior;

    printf("Digite o número 1: ");
    scanf("%d", &ant);
    maior = ant;

    for (int i = 2; i <= 3; i++)
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