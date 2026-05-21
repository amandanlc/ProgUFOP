#include <stdio.h>

int main(){
    float F;

    printf("Digite quantos graus Fahrenheit está fazendo em sua cidade: ");
    scanf("%f", &F);

    float C = (F - 32) / 1.8;
    printf("%g° Fahrenheit = %g° Celsius", F, C);
}
