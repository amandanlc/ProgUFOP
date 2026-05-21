#include <stdio.h>

int main(){
    long long int num1, num2;

    printf("Escreva um número: ");
    scanf("%lld", &num1);

    printf("Escreva um número: ");
    scanf("%lld", &num2);

    float media = (float)(num1 + num2) / 2;

    printf("MEDIA \n%g", media);

    return 0;
}