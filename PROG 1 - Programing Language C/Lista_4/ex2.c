#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeP[50][100];
    int estq[50], qtdEstq[50], qtdCompra[5];

    for (int i = 0; i < 50; i++)
    {
        printf("\n==========PLANTA %d==========", i+1);
        printf("\nDigite o nome: ");
        scanf("%99s", nomeP[i]);
        printf("\nDigite o valor do estoque ideal: ");
        scanf("%d", &estq[i]);
        printf("\nDigite a qtd. em estoque: ");
        scanf("%d", &qtdEstq[i]);
        printf("\n");
    }

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 100; j++)
        {            
            nomeP[i][j] = toupper(nomeP[i][j]);
        }        
    }    

    for (int i = 0; i < 50; i++)
    {
        printf("\n==========%s==========\n", nomeP[i]);
        qtdCompra[i] = estq[i] - qtdEstq[i];
        printf("\nQuantidade a ser comprada: %d\n", qtdCompra[i]);
        
    }   

    return 0;
}
