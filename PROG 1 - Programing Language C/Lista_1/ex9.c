#include <stdio.h>
#include <math.h>

int main(){
    float ak, q;
    long long int n, k;

    printf("Escreva um termo qualquer de uma PG: \n");
    scanf("%f", &ak);

    printf("Escreva o número da posição desse termo: \n");
    scanf("%lld", &k);
    
    printf("Escreva a razão da PG: \n");
    scanf("%f", &q);
    
    printf("Escreva o número da posição do termo da PG que queira descobrir: \n");
    scanf("%lld", &n);

    float an = ak + (n - k) * q;
    printf("Resultado de a%lld: %g", n, an);

    return 0;
}



//atribuir as 5 notas(de 0 a 10), apresentar a media das notas