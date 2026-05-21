#include <stdio.h>

int main(){
    float C;

    printf("Digite quantos graus Celsius está fazendo em sua cidade: ");
    scanf("%f", &C);

    float F = C * 1.8 + 32;
    printf("%g° Celsius = %g° Fahrenheit", C, F);
}

// C = (F-32)/1,8