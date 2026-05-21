#include <stdio.h>

long long arranjo(int n, int p) {
    // Verificar condições de impossibilidade
    if (n < 0 || p < 0 || p > n) {
        return -1;
    }
    
    // Caso especial: A(n,0) = 1
    if (p == 0) {
        return 1;
    }
    
    // Calcular arranjo de forma eficiente: n × (n-1) × ... × (n-p+1)
    long long resultado = 1;
    
    for (int i = 0; i < p; i++) {
        // Verificar possível overflow
        if (resultado > __LONG_LONG_MAX__ / (n - i)) {
            return -1; // Overflow detectado
        }
        resultado *= (n - i);
    }
    
    return resultado;
}

// Algoritmo de teste sem usar arrays
void testarArranjo() {
    printf("=== TESTE DA FUNÇÃO ARRANJO ===\n\n");
    
    printf("Testes com valores básicos:\n");
    
    printf("   A(5,3) = ");
    long long res1 = arranjo(5, 3);
    if (res1 == -1) printf("Não é possível calcular\n");
    else printf("%lld\n", res1);
    
    printf("   A(4,2) = ");
    long long res2 = arranjo(4, 2);
    if (res2 == -1) printf("Não é possível calcular\n");
    else printf("%lld\n", res2);
    
    printf("   A(6,1) = ");
    long long res3 = arranjo(6, 1);
    if (res3 == -1) printf("Não é possível calcular\n");
    else printf("%lld\n", res3);
    
    printf("   A(7,0) = ");
    long long res4 = arranjo(7, 0);
    if (res4 == -1) printf("Não é possível calcular\n");
    else printf("%lld\n", res4);
    
    printf("   A(3,3) = ");
    long long res5 = arranjo(3, 3);
    if (res5 == -1) printf("Não é possível calcular\n");
    else printf("%lld\n", res5);
    
}

// Programa principal com interação do usuário
int main() {
    int n, p;
    
    printf("=== CÁLCULO DE ARRANJOS ===\n");
    printf("Fórmula: A(n,p) = n! / (n-p)!\n\n");
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de p: ");
    scanf("%d", &p);
    
    // Cálculo e resultado
    long long resultado = arranjo(n, p);
    
    printf("\nResultado: A(%d,%d) = ", n, p);
    if (resultado == -1) {
        printf("Não é possível calcular este arranjo\n");
        printf("Motivos possíveis:\n");
        printf("- n < 0 ou p < 0\n");
        printf("- p > n\n");
        printf("- Overflow (resultado muito grande)\n");
    } else {
        printf("%lld\n", resultado);
        }
        
    printf("\n");

    testarArranjo();

    printf("\n");
    
    return 0;
}