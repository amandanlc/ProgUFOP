#include <stdio.h>
#include <stdlib.h>

int calcularDivisão(int a, int b, int *div, int *mod){

    if (b == 0)
    {
        return -1;
    } 

    *div = a / b;
    *mod = a % b;
    
    return 0;
}

int main(){
    int *div = (int *)malloc(sizeof(int));
    int *mod = (int *)malloc(sizeof(int));
    int a = 5, b = 3;

    int res = calcularDivisão(a, b, div, mod);
    if (res == 0)
    {
        printf("FOI possível calcular a divisão");
        printf("\nValor div: %d, Valor de mod: %d", *div, *mod);
    }else{
        printf("NÃO foi possível calcular a divisão");
    }
    
    free(div);
    free(mod);

    return 0;
}