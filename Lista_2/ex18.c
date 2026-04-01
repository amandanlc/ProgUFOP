#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0 || num == 0){
        printf("\nPar");
    } else {
        printf("\nImpar");
    }

    return 0;
}