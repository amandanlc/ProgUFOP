#include <stdio.h>

int main(){
    long long int A, B, temp;

    printf("Escreva o valor de A: ");
    scanf("%lld", &A);
    printf("Escreva o valor de B: ");
    scanf("%lld", &B);
    
    temp = A;
    A = B;
    B = temp;

    printf("Os valores após a troca são: A = %lld, B = %lld", A, B);

    return 0;
}