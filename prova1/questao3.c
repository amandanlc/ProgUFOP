#include <stdio.h>

int somatorio(int n){
    int soma = 0;

    for (int i = 0; i <= n; i++)
    {
        soma += i;
    }
    
    return soma;
}

int main(){
    int n, sum;

    printf("Digite um numero: ");
    scanf("%d", &n);

    sum = somatorio(n);
    printf("Soma: %d", sum);

    return 0;
}