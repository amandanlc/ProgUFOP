#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if (n == 0)
    {
        return 1;
    } else if (n >= 1)
    {
        return n * fatorial(n - 1);
    }   
}

int main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);
    
    printf("%d! = %d", n, fatorial(n));

    return 0;
}