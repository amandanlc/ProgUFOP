#include <stdio.h>

int main(){
    int i = 0, n;
    long fib1 = 0, fib2 = 1, proximo;

    printf("Digite quantos numeros da sequencia Fibonacci quer ver: ");
    scanf("%d", &n);

    printf("Sequencia Fibonacci:\n");
    
    while(i <= n) {
        if(i == 0) {
            printf("Nao existe ");
        } else if(i == 1) {
            printf("0 ");
        } else {
            proximo = fib1 + fib2;
            printf("%ld ", proximo);
            fib1 = fib2;
            fib2 = proximo;
        }
        i++;
    }
    
    return 0;
}