#include <stdio.h>
#include <stdlib.h>

int fgetstring(){
    // Para se ler strings com espaços, pode-se utilizar a função fgets
    
    /* char *fgets( char *s, int n, FILE *stream); */
    
    // *s é o vetor de caracteres onde será lida a string;
    // n é o tamanho da string (lembrando-de se adicionar 1 devido ao \0;
    // *stream deve ser stdin para ler do teclado.
    
    char strings [ 5 ] [ 21 ];
    for (int i = 0; i < 5; i++){
        printf("String[%d]: ", i);
        fgets(strings[i], 21, stdin);
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("String[%d] = %s", i, strings[i]);
    }

    // Se for utilizada fgets para ler strings, é necessário utilizá-la 
    // para ler números e eliminar o uso de scanf no programa.

    /*
    Duas funções da biblioteca ---- <stdlib.h> ---- ajudam nesta conversão:

    int atoi( const char *string );
    double atof( const char *string );
    */

    // Lendo números com fgets:
    char temp[15];
    
    printf("\nDigite um número inteiro");
    fgets(temp, 15, stdin);
    int num_int = atoi(temp);

    printf("\nDigite um número de ponto flutuante");
    fgets(temp, 15, stdin);
    double num_double = atof(temp);

    printf("Inteiro: %d  Double: %lf", num_int, num_double);
}

int matrizZ(){
    
    void zeraMatriz(int matriz[2][2]) {
        int i, j;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                matriz[i][j] = 0;
            }
        }
    }
    

    int mat[2][2] = {{0, 1}, {2, 3}};
    
    printf("Matriz original:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    zeraMatriz(mat);
    
    printf("Matriz após zerar:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int matrizDimOmt() {
    // Vetor com dimensão omitida
    int vetor[] = {1,2,3,4,5}; 
    void subrotina (int vetor[ ], int tamanho_vetor);

    // No caso de uma matriz multidimensional, só podemos omitir o tamanho da primeira dimensão:
    int matriz2D[ ][4] =
    {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };
   // void subrotina (int matriz[ ][10], int qtde_linhas);

    // Não podemos omitir as demais dimensões do vetor multidimensional, mesmo se fornecermos a primeira dimensão. EX:
    // int matriz2D[3][] =
    // {
    //     {1, 2, 3, 4},
    //     {1, 2, 3, 4},
    //     {1, 2, 3, 4}
    // };

    return 0;
}

int pratica1(){
    // Matriz 2D
    int matriz[5][7], valor = 0;
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 7; ++j)
        matriz[ i ][ j ] = valor++; 

    for (int i = 0; i < 5; ++i){
    printf("[");
        for (int j = 0; j < 7; ++j)
        printf(" %d ", matriz[i][j]);
    printf("]\n");
    }
    
    int m[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            m[i][j] = 8;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Matriz 3D
    int m3D[2][4][4] = {
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4}
        },
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4}
        }
    };

    for (int k = 0; k < 2; k++) {
        printf("Layer %d:\n", k+1);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                printf("%d ", m3D[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // String bidimenssional
    char strings[20][10]; // 20 strings de 10 caracteres
    
    for (int i = 0; i < 20; i++) {
        //Digite:
        scanf("%s", strings[i]);
    }
    
    for (int i = 0; i < 20; i++) {
        printf("string[%d] = %s\n", i, strings[i]);
    }
    
}