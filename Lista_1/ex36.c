#include <stdio.h>

int main(){
    float tempo, vel, dist, lit;

    printf("Digite o tempo gasto na viagem em horas: ");
    scanf("%f", &tempo);
    printf("Digite a velocidade média em km: ");
    scanf("%f", &vel);

    dist = tempo * vel;
    lit = dist / 12;

    printf("A distância percorrida na viagem foi de %g km \nA quantidade de litros utilizados na viagem foi de %.2f L.", dist, lit);

    return 0;
}