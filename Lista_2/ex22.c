#include <stdio.h>

int main(){
    char num;

    printf("Digite um numero inteiro entre 0 a 255: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 255)
    {
        printf("%c", num);
    } else{
        printf("Numero invalido");
    }
    
    
    return 0;
}