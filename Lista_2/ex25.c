#include <stdio.h>

int main(){
    int l1, l2, l3;

    printf("Digite os valores dos lados do triangulo: ");
    scanf("%d %d %d", &l1, &l2, &l3);

    if (l1 == l2 && l3 == l2 && l1 == l3)
    {
        printf("EQUILATERO");
    } else if (l1 != l2 && l3 != l2 && l1 != l3)
    {
        printf("ESCALENO");
    } else
    {
        printf("ISOSCELES");
    } 
    return 0;
}