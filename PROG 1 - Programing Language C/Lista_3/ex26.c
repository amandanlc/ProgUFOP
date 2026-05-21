#include <stdio.h>
#include <stdlib.h>

int division(int x, int y){
    if (y == 0)
    {
        return -1;
    }else if (x > y)
    {
        return 1 + division(x - y, y);
    }else if (x < y)
    {
        return 0;
    } else if (x == y)
    {
        return 1;
    } 
    
}

int main(){
    int x, y;

    printf("Digite o divisor: ");
    scanf("%d", &x);
    printf("Digite o dividendo: ");
    scanf("%d", &y);

    int quo = division(x, y);
    printf("\nQuociente: %d", quo);
    int res = x - (y * quo);
    printf("\nResto: %d", res);

    return 0;
}