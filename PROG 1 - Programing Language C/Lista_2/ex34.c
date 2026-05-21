#include <stdio.h>

int main(){
    int cont = 0, soma = 0, media, maior, menor, ant, suc;

    printf("\nDigite um número: ");
    scanf("%d", &ant);
    maior = ant;
    menor = ant;

    if (ant != 0)
    {
        for (int i = 2; ; i++)
        {
            printf("\nDigite outro número: ");
            scanf("%d", &suc);

            soma += suc;
            cont++;
            
            if (suc == 0)
            {
                break;
            }
            
            if (suc > maior)
            {
                maior = suc;
            }
            
            if (suc < menor)
            {
                menor = suc;
            }  
        }
    }
    soma = soma + ant;
    cont = cont + 1;
    media = soma / cont;

    printf("\nMaior: %d \nMenor: %d \nMedia: %d", maior, menor, media);
    return 0;
}