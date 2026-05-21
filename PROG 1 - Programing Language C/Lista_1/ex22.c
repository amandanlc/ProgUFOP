#include <stdio.h>

int main(){
    float suc, ant, medio;
    
    printf("Escreva o número antecessor do termo médio que queira descobrir de uma P.A: \n");
    scanf("%f", &ant);
    printf("Escreva o número sucessor do termo médio que queira descobrir de uma P.A: \n");
    scanf("%f", &suc);

    medio = (ant + suc) / 2;
    printf("O termo médio de %g e %g é: %g", ant, suc, medio);

    return 0;
}