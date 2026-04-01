#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 


int main(){
    return 0;
}

int ex7(){
    int maiorV(int mat[][4]){
        int maior = mat[0][0];

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (maior < mat[i][j])
                {
                    maior = mat[i][j];
                }            
            }        
        }

        return maior;
    }

    int menorV(int mat[][4]){
        int menor = mat[0][0];

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (menor > mat[i][j])
                {
                    menor = mat[i][j];
                }            
            }        
        }
        return menor;
    }
    
    int mat[4][4];
    int maior, menor;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           printf("Elemento [%d][%d]: ", i, j); 
           scanf("%d", &mat[i][j]);
        }
    }

    maior = maiorV(mat);
    menor = menorV(mat);

    printf("\nMaior valor da matriz: %d", maior);
    printf("\nMenor valor da matriz: %d", menor);
}

int ex6(){
    float mat[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }        
        printf("\n");
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%g ", mat[i][j] * 3.5);
        }
        printf("\n");
    }
}

int ex5(){    
    int mat[3][3];
    int soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite numero inteiro: ");
            scanf("%d", &mat[i][j]);

            soma += mat[i][j];
        }        
    }
    
    printf("Soma dos elementos: %d", soma);

}

int ex4(){
    
    int i, matriz[5][5] = { 
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    for (i=0; i<5; i++){
    printf("Posição[%i,%i]: %i\n", i, i, matriz[i][i]);
    }

    int mat[5][5];

    // OU
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != j)
            {
                printf(" ");
            }else{                
                printf("%d ", mat[i][j]);
            }     
        }
        printf("\n");
    }
}

int ex3(){    
    char string[51];
    char processed[51];  // String processada (sem espaços, minúsculas)
    int len = 0;

    printf("Digite uma palavra: ");
    fgets(string, sizeof(string), stdin);

    // Remove newline manualmente (sem strlen)
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
        i++;
    }

    // Processa a string: remove espaços e converte para minúsculas
    i = 0;  // Reinicia i
    while (string[i] != '\0') {
        if (!isspace(string[i])) {  // Ignora espaços
            processed[len++] = tolower(string[i]);
        }
        i++;
    }
    processed[len] = '\0';  // Termina a string processada

    int is_palindrome = 1;  // Assume que é
    for (int j = 0; j < len / 2; j++) {
        if (processed[j] != processed[len - 1 - j]) {
            is_palindrome = 0;
            break;
        }
    }

    // if (processed[j] != processed[len - 1 - j])
    /* COMO O PROGRAMA PROCESSA (se a palavra tivesse 5 caracteres): 
    COMPARA: processed[0] com processed[5 - 1 - 0]
    COMPARA: processed[1] com processed[5 - 1 - 1]
    COMPARA: processed[2] com processed[5 - 1 - 2] no caso aqui fica igual pq é a letra do meio
    Vai até o processed[2] porque o for só percorre até a metade da palavra */

    if (is_palindrome == 1)
    {
        printf("É palíndrome");
    } else if (is_palindrome == 0)
    {
        printf("Não é palíndrome");
    }

    return 0;
}

int ex2(){
    
    int matriz[5][5];
    int cont = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");        
    }
    
    printf("\n"); 

    printf("Matriz Transposta");
    int matrizT[5][5];
    
    printf("\n"); 
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizT[j][i] = matriz[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrizT[i][j]);
        }
        printf("\n");        
    }
}

int ex1(){
    
    int matriz[5][5];
    int cont = 0;
    char buffer[100000];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            fgets(buffer, sizeof(buffer), stdin);
            matriz[i][j] = atoi(buffer);
            if (matriz[i][j] != 0)
            {
                cont++;
            }
        }
        printf("\n");
    }
    
    printf("Quantidade de elementos não nulos da matriz: %d", cont);

    return 0;

    // ou
/*
    int matriz[5][5];
    int cont = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", matriz[i][j]);

            if (matriz[i][j] != 0)
            {
                cont++;
            }
        }
        printf("\n");
    }
    
    printf("Quantidade de elementos não nulos da matriz: %d", cont);

    return 0;
*/
}