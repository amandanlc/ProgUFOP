#include <stdio.h>

int main(){
    float a1, r;
    long long int n;

    printf("Escreva o primeiro termo da PA: \n");
    scanf("%f", &a1);
    
    printf("Escreva a razão da PA: \n");
    scanf("%f", &r);
    
    printf("Escreva o número do termo da PA que queira descobrir: \n");
    scanf("%lld", &n);

    float an = a1 + (n - 1) * r;
    printf("Resultado de a%lld: %g", n, an);

    return 0;
}