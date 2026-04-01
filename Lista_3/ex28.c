#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y){
    if (x > y)
    {
        return mdc(x - y, y);
    } else if (x == y)
    {
        return x;
    }
    
    
}

int main(){
    int x, y;

    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite um número: ");
    scanf("%d", &y);

    int res = mdc(x,y);
    printf("MDC: %d", res);

    return 0;
}