#include <stdio.h>

int main(){
    float C;

    printf("Digite quantos graus Celsius está fazendo em sua cidade: ");
    scanf("%f", &C);

    float F = (9 * C + 160) / 5;
    printf("%g° Celsius = %g° Fahrenheit", C, F);
}