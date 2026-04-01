#include <stdio.h>

int main(){
    int a, soma = 0, inf, sup;

    printf("Digite um entre números (ex: 10 a 20): ");
    scanf("%d %c %d", &inf, &a, &sup); 

    inf = inf + 1;

    for (int i = inf; i < sup; i++)
    {        
        if (i % 2 == 0)
        {            
            printf("%d ", i);
            soma += i;
        }
        
    }
    printf("\nSoma: %d", soma);
    return 0;
}