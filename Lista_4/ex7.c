#include <stdio.h>

int main(){
    int mat[3][3] = {0};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {        
            if (i == 0)
            {
                mat[i][j] = j + 1;
            } else if (i == 1)
            {
                mat[i][j] = (j + 1) + 3;
            } else if (i == 2)
            {
                mat[i][j] = (j + 1) + 6;
            }
        }        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                printf("%d ", mat[2][i]);
            }else if (j == 2)
            {
                printf("%d ", mat[0][i]);
            }else {
                printf("%d ", mat[j][i]);
            }           
        }
        printf("\n");
    }   
    
    return 0;
}