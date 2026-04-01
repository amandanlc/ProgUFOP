#include <stdio.h>

int main(){
    float ak, r;
    long long int n, k;

    printf("Escreva um termo qualquer de uma PA: \n");
    scanf("%f", &ak);

    printf("Escreva o número da posição desse termo: \n");
    scanf("%lld", &k);
    
    printf("Escreva a razão da PA: \n");
    scanf("%f", &r);
    
    printf("Escreva o número da posição do termo da PA que queira descobrir: \n");
    scanf("%lld", &n);

    float an = ak + (n - k) * r;
    printf("Resultado de a%lld: %g", n, an);

    return 0;
}