#include <stdio.h>

int main(){
    int cont = 0, num;

    for (int i = 1; ; i++)
    {
        printf("\nDigite um número: ");
        scanf("%d", &num);

        if (num < 0)
        {
            break;
        } else
        {
            cont++;
        }        
    }
    printf("Qtd de numeros positivos: %d", cont);
    return 0;
}