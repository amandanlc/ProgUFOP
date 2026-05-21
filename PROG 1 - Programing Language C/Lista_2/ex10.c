#include <stdio.h>

int main(){
    int num, pow;

    printf("Digite 10 números:\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("Número %d: ", i);
        scanf("%d", &num);
        
        pow = num * num;
        
        printf("%d\n", pow);
    }
    return 0;
}