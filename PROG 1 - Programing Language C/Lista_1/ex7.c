#include <stdio.h>
#include <math.h>

int main(){
    float a1, q;
    long long int n;

    printf("Escreva o primeiro termo da PG: \n");
    scanf("%f", &a1);
    
    printf("Escreva a razão da PG: \n");
    scanf("%f", &q);
    
    printf("Escreva o número do termo da PG que queira descobrir: \n");
    scanf("%lld", &n);

    float an = a1 * pow(q, n - 1);
    printf("Resultado de a%lld: %g", n, an);

    return 0;
}