#include <stdio.h>

int main(){
    int matriz[3][5];
    int SL;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o elemento %dx%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++)
    {
        SL = 0;
        for (int j = 0; j < 5; j++)
        {
            SL += matriz[i][j];
        }
        printf("[%d]", SL);
        printf("\n");        
    }    
}
