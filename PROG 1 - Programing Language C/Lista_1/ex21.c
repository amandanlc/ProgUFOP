#include <stdio.h>

int main(){
    float a1, an, Sn;
    long long int n;

    printf("Escreva o valor do primeiro termo da P.A.: ");
    scanf("%f", &a1);

    printf("Escreva o valor do último termo da P.A.: ");
    scanf("%f", &an);

    printf("Escreva o número da posição do último termo da P.A.: ");
    scanf("%lld", &n);

    Sn = ((a1 + an) * n) / 2;

    printf("A soma dos termos da P.A. é: %g", Sn);

    return 0;
}