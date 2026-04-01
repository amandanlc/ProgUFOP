#include <stdio.h>

int main(){
}

int potencia(){    
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            int pot = 1;
            
            for (int k = 0; k < j; k++)
            pot *= i;

            if (i % 2 == 0)
            {
               printf("\n%d^%d = %d", i, j, pot); 
            }            
        }
        printf("\n");
    }
}

int resultaEm(){
    /*
    void resulta_em(int numero){
        if (numero < 0)
        {
            printf("O resultado é negativo");
        } else
        {
            printf("O resultado é positivo");
        }
    }
    */
    
    int num, x, y;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite um numero: ");
    scanf("%d", &y);

    num = x * y;

    //resulta_em(num);
    printf("\n%d", num);
}

int Tab10(){
    int mult;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 10)
            {
                mult = i * j;
                printf("\n%d x %d = %d", i, j, mult);
            }
        }        
    }    
}

int ArrSRep(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i == 1 && i != j)
            {                
                printf("(%d, %d) ", i, j);
            }
            
            if (i == j)
            {
                printf("(%d, %d) ", i, j);
            }
        }        
    }  

    // OU

    for (int a1 = 1; a1 <= 4; ++a1) {
        for (int a2 = 1; a2 <= a1; ++a2) {
            printf("(%d, %d) \n", a1, a2);
        }
    }
    return 0;
}

int ArrRep(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");        
    }  
}

int MatrizTriDirInv(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(j < i)
            {
                printf("   ");
            } else{
                printf(" * ");
            }
        }
        printf("\n");
    }

}

int MatrizTriDir(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(j < 4 - i - 1)
            {
                printf("   ");
            } else{
                printf(" * ");
            }
        }
        printf("\n");
    }

    // OU

    int linha, coluna, col_brancos;

    for(linha = 1; linha <= 4; ++linha) {
        
        for(col_brancos = 1; col_brancos <= 4 - linha; ++col_brancos){
            printf(" ");
        }

        for(coluna = 1; coluna <= linha; ++coluna){
            printf(" * ");
        }

    }
    return 0;

}

int MatrizTri(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }  
}

int MatrizTriInv(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}

int MatrizQ(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}