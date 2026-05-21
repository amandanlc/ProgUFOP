#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Menor de idade");
    } else if (idade >= 18 && idade <= 64)
    {
        printf("Adulto");
    } else
    {
        printf("Idoso");
    }   
    
    return 0;
}