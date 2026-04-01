#include <stdio.h>
#include <math.h>

int main(){
    int num;
    float A, l1, l2, lq, r;
    
    printf("\nDigite um numero: ");
    scanf("%d", &num);
    if (num > 0)
    {
        switch(num){
        case 1 ... 2:
            printf("Digite as medidas dos lados de um retangulo: ");
            scanf("%f %f", &l1, &l2);

            A = 3.14 * ((l1 * l1) + (l2 * l2)) / 4;
            printf("Área do circulo circunscrito no retangulo: %.2f", A);

            break;
        case 3 ... 5:
            printf("Digite a medida do raio de um círculo: ");
            scanf("%f", &r);

            A = 2 * (r * r);
            printf("Área do quadrado inscrito no círculo: %.2f", A);
            break; 
        default:
            printf("Digite a medida do lado de um quadrado: ");
            scanf("%f", &lq);

            float cir_insc = lq * sqrt(2) / 2;
            float circ_circ = lq / 2;
            A = 3.14 * ((cir_insc * cir_insc) - (circ_circ * circ_circ));
            printf("Área do quadrado inscrito no círculo: %.2f", A);       
        }
    }
    
    
    return 0;
}