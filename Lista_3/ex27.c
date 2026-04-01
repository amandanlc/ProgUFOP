#include <stdio.h>
#include <stdlib.h>

int mod(int x, int y){
    if (x > y)
    {
        return mod(x - y, y);
    } else if (x < y)
    {
        return x;
    }else if (x = y)
    {
        return 0;
    }else if (y == 0)
    {
        return -1;
    }    
}

int main(){
    int x, y;

    printf("Digite o divisor: ");
    scanf("%d", &x);
    printf("Digite o dividendo: ");
    scanf("%d", &y);

    int res = mod(x, y);
    printf("\nResto: %d", res);
    int quo = (x - res) / y;
    printf("\nQuociente: %d", quo);

    return 0;
}