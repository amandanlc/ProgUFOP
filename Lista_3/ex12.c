#include <stdio.h>

int fatorial(int n){
    int fatorial = 1;

    for (int  i = 1; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int combinacao(int n, int p) {

    // Casos inválidos
    if (n < 0 || p < 0 || p > n)
        return -1;

    if (p == 0 || p == n)
        return 1;
    
    int ogN = n, ogP = p;

    int res = fatorial(n) / (fatorial(p) * fatorial(ogN - ogP));

    return res;    
}

// Algoritmo de teste sem usar arrays
void testarCombinacao() {
    printf("=== TESTE DA FUNÇÃO COMBINAÇÃO ===\n\n");
    
    printf("Testes com valores básicos:\n");
    
    printf("   A(5,3) = ");
    int res1 = combinacao(5, 3);
    if (res1 == -1) printf("Não é possível calcular\n");
    else printf("%lld\n", res1);
    
    printf("   A(4,2) = ");
    int res2 = combinacao(4, 2);
    if (res2 == -1) printf("Não é possível calcular\n");
    else printf("%lld\n", res2);
    
    printf("   A(6,1) = ");
    int res3 = combinacao(6, 1);
    if (res3 == -1) printf("Não é possível calcular\n");
    else printf("%lld\n", res3);
    
    printf("   A(7,0) = ");
    int res4 = combinacao(7, 0);
    if (res4 == -1) printf("Não é possível calcular\n");
    else printf("%lld\n", res4);
    
    printf("   A(3,3) = ");
    int res5 = combinacao(3, 3);
    if (res5 == -1) printf("Não é possível calcular\n");
    else printf("%lld\n", res5);
    
}

// Programa principal com interação do usuário
int main() {
    int n, p;
    
    printf("=== CÁLCULO DE COMBINAÇÕES ===\n");
    printf("Fórmula: C(n,p) = n! / p! * (n-p)!\n\n");
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de p: ");
    scanf("%d", &p);
    
    // Cálculo e resultado
    int resultado = combinacao(n, p);
    
    printf("\nResultado: C(%d,%d) = ", n, p);
    if (resultado == -1) {
        printf("Não é possível calcular este combinacao\n");
        printf("Motivos possíveis:\n");
        printf("- n < 0 ou p < 0\n");
        printf("- p > n\n");
        printf("- Overflow (resultado muito grande)\n");
    } else {
        printf("%lld\n", resultado);
        }
        
    printf("\n");

    testarCombinacao();

    printf("\n");
    
    return 0;
}