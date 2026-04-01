#include <stdio.h>

int main(){
    int n, num, soma = 0;

    printf("Digite quantos numeros vai digitar: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &num);

        soma += num;
    }
    
    printf("Soma = %d", soma);
}