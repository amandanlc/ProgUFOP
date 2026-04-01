#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

int pares(int *a, int t){
    if (t == 0)
    {
        return 0;
    }   
    
    if (*a % 2 == 0)
        {
            return 1 + pares(a+1, t-1);
        } else
        {
            return pares(a+1, t-1);
        }
}

int main() {
    int *a;
    int x=5, v[5] = {5, 2, 9, 3, 7};

    a = malloc(x * sizeof(int));

    for (int i = 0; i < x; i++)
    {
        a[i] = v[i];
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nPares: %d", pares(a,x));
    
    return 0;
}

// EXERCÍCIOS 
/*
int maior(int *a, int t) {
    int m = *a;

    for (int i = 1; i < t; i++) {
        if (*(a + i) > m)
            m = *(a + i);
    }

    return m;
}

int main() {
    int *a;
    int x=5, v[5] = {5, 7, 9, 3};

    a = malloc(x * sizeof(int));

    for (int i = 0; i < x; i++)
    {
        a[i] = v[i];
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nMaior: %d", maior(a,x));
    
    return 0;
}
*/

/*
void preenche(int **v, int l, int c){
    printf("\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
        }
    }
}

void imprime(int **v, int l, int c){
    printf("\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}

int **alocacao(int l, int c){
    int **v = malloc(l * sizeof(int*));
    for (int i = 0; i < l; i++)
    {
        v[i] = malloc(c * sizeof(int));
    }

    return v;
}

int main() {
    int **v, l = 2, c = 3;

    v = alocacao(l, c);
    preenche(v, l, c);
    imprime(v, l, c);

    for (int i = 0; i < l; i++)
    {
        free(v[i]);
    }
    free(v);
    return 0;
}
*/

/*
int main() {
    int **v, l = 2, c = 3;

    v = malloc(l * sizeof(int*));
    for (int i = 0; i < l; i++)
    {
        v[i] = malloc(c * sizeof(int));
    }

    printf("\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < l; i++)
    {
        free(v[i]);
    }
    free(v);
    return 0;
}
*/

/*
void preenche(int *v, int t){

    printf("\n");
    for (int i = 0; i < t; i++)
    {
        printf("Num %d: ", i + 1);
        scanf("%d", &v[i]);
    }    
}

void imprime(int *v, int t){
    printf("\n");
    for (int i = 0; i < t; i++)
    {
        printf("%d ", v[i]);
    }

}

int main() {
    int *v, t;

    printf("Digite quantos números quer digitar: ");
    scanf("%d", &t);
    
    v = malloc(t * sizeof(int)); // Alocação

    preenche(v, t);
    
    imprime(v, t);
    
    free(v); // Alocação
    return 0;
}
*/

/*
int main() {
    int *v, t;

    printf("Digite quantos números quer digitar: ");
    scanf("%d", &t);

    v = malloc(t * sizeof(int));

    printf("\n");
    for (int i = 0; i < t; i++)
    {
        printf("Num %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\n");
    for (int i = 0; i < t; i++)
    {
        printf("%d ", v[i]);
    }
    
    free(v);
    return 0;
}
*/

/*
void procMinMax(int num[10]){
    int *pi, maior, menor;

    pi = num;
    maior = *pi;
    menor = *pi;

    int i = 0;
    while (i < 10)
    {
        if (maior < *(pi+i))
        {
            maior = *(pi+i);
        }
        i++;
    }
    printf("\nMaior: %d", maior);
    
    i = 0;
    while (i < 10)
    {
        if (menor > *(pi+i))
        {
            menor = *(pi+i);
        } 
        i++;
    }
    printf("\nMenor: %d", menor);

}

int main() {
    int n[10] = {5,8,6,5,2,6,7,90,24,3};

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", n[i]);
    }
    printf("\n");

    procMinMax(n);   

    return 0;
}
*/

/*
void swap2x(int *a, int *b){
    int temp = *a;
    *a = *b * 2;
    *b = temp * 2;
}

int main() {
    int *pi, *px, i, x;

    printf("\nDigite um valor: ");
    scanf("%d", &i);
    printf("\nDigite um valor: ");
    scanf("%d", &x);

    pi = &i;
    px = &x;

    printf("\n%d - %d", *pi, *px);
    swap(pi, px);
    printf("\n%d - %d", *pi, *px);

    return 0;
}
*/

/*
int main() {
    int *pi;
    float *pf;
    int i = 5;
    float f = 6.0;

    pi = &i;
    pf = &f;

    printf("\nAntes: %d, %.2f", *pi, *pf);

    *pi *= 3;
    *pf *= 3;

    printf("\nDepois: %d, %.2f", *pi, *pf);

    return 0;
}
*/
/*
void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int *x, *y;
    //int a = 10, b = 5;
    // x = &a; // certo
    // y = &b;
    *x = 10; // errado
    *y = 5;

    printf("\n%d, %d", *x, *y);

    troca(x, y);

    printf("\n%d, %d", *x, *y);

    return 0;
}
*/