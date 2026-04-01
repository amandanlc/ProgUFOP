#include <stdio.h>

int maior(int num1, int num2){
    if (num1 > num2)
    {
        return num1;

    } else {        
        return num2;
    }
}

void parimpar(int num) {
    if (num == 0) {
        printf("%d é par\n", num);
    } else if (num % 2 == 0 || num % -2 == 0) {
        printf("%d é par\n", num);
    } else {
        printf("%d é ímpar\n", num);
    }
}

int primo(int num){
    if (num % num == 0)
}

int main(){
    int n1;
    int n2;
    int m;

    printf("Escreva um número: ");
    scanf("%d", &n1);
    
    printf("Escreva outro número: ");
    scanf("%d", &n2);

    m = maior(n1, n2);

    parimpar(n1);
    parimpar(n2);


    return 0;
}