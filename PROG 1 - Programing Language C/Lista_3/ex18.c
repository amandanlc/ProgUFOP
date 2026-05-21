#include <stdio.h>
#include <stdlib.h>

int decrescente(int a, int b, int c, int d, int e, int *segundo, int *quarto){
    int vet[5] = {a, b, c, d, e};

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (vet[j] > vet[i])
            {
                int temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
        
    }
    
    *segundo = vet[1];
    *quarto = vet[3];    
    
}

int main(){
    int a = 4, b = 3, c = 5, d = 1, e = 2;
    int *segundo = (int *)malloc(sizeof(int));
    int *quarto = (int *)malloc(sizeof(int));

    decrescente(a, b, c, d, e, segundo, quarto);
    printf("2° maior: %d \n4° maior: %d", *segundo, *quarto);

    free(segundo);
    free(quarto);

    return 0;
}