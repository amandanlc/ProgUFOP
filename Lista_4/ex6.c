#include <stdio.h>

int main(){
    int salesW[12][4] = {0}, salesM[12] = {0}, saleY = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\nType the total sold in the %dst week of the %dst month: ", j+1, i+1);
            scanf("%d", &salesW[i][j]);
            salesM[i] += salesW[i][j];
        }        
        saleY += salesM[i];   
        printf("\n");
    }

    printf("\n");

    printf("\nTOTAL SOLD IN EACH WEEK OF THE MONTH");
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\n%dst month | %dst week = %d", i+1, j+1, salesW[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("\nTOTAL SOLD IN EACH MONTH");
    for (int i = 0; i < 12; i++)
    {     
        if ((i+1) == 1)
        {
            printf("\nJanuary = %d", salesM[i]);
        }    
        if ((i+1) == 2)
        {
            printf("\nFebruary = %d", salesM[i]);
        }    
        if ((i+1) == 3)
        {
            printf("\nMarch = %d", salesM[i]);
        }    
        if ((i+1) == 4)
        {
            printf("\nApril = %d", salesM[i]);
        }    
        if ((i+1) == 5)
        {
            printf("\nMay = %d", salesM[i]);
        }   
        if ((i+1) == 6)
        {
            printf("\nJune = %d", salesM[i]);
        }    
        if ((i+1) == 7)
        {
            printf("\nJuly = %d", salesM[i]);
        }    
        if ((i+1) == 8)
        {
            printf("\nAugust = %d", salesM[i]);
        }    
        if ((i+1) == 9)
        {
            printf("\nSeptember = %d", salesM[i]);
        }    
        if ((i+1) == 10)
        {
            printf("\nOctober = %d", salesM[i]);
        }    
        if ((i+1) == 11)
        {
            printf("\nNovember = %d", salesM[i]);
        }    
        if ((i+1) == 12)
        {
            printf("\nDecember = %d", salesM[i]);
        }
    }
    
    printf("\n");

    printf("\nTOTAL SOLD IN THE YEAR");
   
    printf("\n* %d *", saleY);
        
    
    return 0;
}