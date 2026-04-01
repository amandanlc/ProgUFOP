#include <stdio.h>

int main(){
    int num, nums;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        nums = num / 2;
        
        printf("%d\n", nums);
    }
    return 0;
}