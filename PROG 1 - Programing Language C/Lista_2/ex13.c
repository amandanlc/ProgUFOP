#include <stdio.h>

int main(){
    int num, Contneg = 0, Spos = 0;

    for (int i = 1; i <= 20; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &num);

        if (num > 0)
        {
            Spos += num;
        } else if (num < 0)
        {
            Contneg++;
        }        
    }
    printf("\nQuantidade de numeros negativos: %d", Contneg);
    printf("\nSoma numeros positivos: %d", Spos);
    return 0;
}
