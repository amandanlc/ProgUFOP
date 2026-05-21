#include <stdio.h>

int main(){
    char un;
    float temp, c, f;

    printf("Digite a unidade de medida de temperatura (F ou C): ");
    scanf("%c", &un);
    printf("Digite os graus: ");
    scanf("%f", &temp);

    if(un == 'f' || un == 'F'){
        c = (5.0/9.0) * (temp - 32.0);
        printf("%.2fo F = %.2fo C", temp, c);
    } else if(un == 'c' || un == 'C'){
        f = temp * (9.0/5.0) + 32.0;
        printf("%.2fo C = %.2fo F", temp, f);
    } else {
        printf("Unidade invalida! Use F ou C.");
    }

    return 0;
}