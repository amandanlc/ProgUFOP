#include <stdio.h>
#include <math.h>

int main(){
    float produto, a1, q;
    long long int n;

    printf("Escreva o valor do primeiro termo da sua P.G.: ");
    scanf("%f", &a1);
    printf("Escreva o raio da sua P.G.: ");
    scanf("%f", &q);
    printf("Escreva o número da posição do termo que queira descobrir o produto da sua P.G.: ");
    scanf("%lld", &n);

    produto = pow(a1, n) * pow(q, (n * (n - 1)) / 2);
    printf("O resultado do produto de a1 á a%lld é: %g", n, produto);
    return 0;
}