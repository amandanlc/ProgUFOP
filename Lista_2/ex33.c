#include <stdio.h>

int main(){
    int n, i;
    long a = 0, b = 1, c;

    printf("Quantos numeros de Fibonacci?: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("%ld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    
    return 0;
}