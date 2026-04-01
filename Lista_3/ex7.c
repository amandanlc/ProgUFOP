#include <stdio.h>

int divisivel(int x, int y){
    if (x % y != 0)
    {
        return 0;
    }
    
    return 1;   
}

int main(){
    int x, y, div;

    printf("Digite dois numeros (ex: 10 9): ");
    scanf("%d %d", &x, &y);

    if (divisivel(x, y))
    {
        printf("%d eh divisivel por %d", x, y);
    }else
    {        
        printf("%d nao eh divisivel por %d", x, y);
    }

    return 0;
}