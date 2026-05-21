#include <stdio.h>

int main(){
    int media, num, soma = 0, cont = 0;    

    for (int i = 1; ; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > 0)
        {
            cont++;
            soma += num;
        }else if (num == -1)
        {
            break;
        }
    }

    media = soma / cont;
    
    printf("Media = %d", media);
}