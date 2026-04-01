#include <stdio.h>

int capicua(int n){
    int original = n;
    int inv = 0;

    for (; n > 0; n /= 10){
        inv = inv * 10 + (n % 10);
    }

    if (inv != original)
    {
        return 0;
    }else if (original < 10)
    {
        return 0;
    } else if (original == 0)
    {
        return 1;
    }    
    
    return 1;
}

int main(){
    int num;
    
    printf("\nDigite um numero: ");
    scanf("%d", &num);
    
    if (capicua(num)) {
        printf("\n%d eh capicua\n", num);
    } else {
        printf("\n%d nao eh capicua\n", num);
    }

    // teste
    printf("\n=====================================");
    printf("\nTESTE:\n");
    for (int i = 0; i <= 150; i++)
    {
        if (capicua(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n=====================================");
    
    return 0;
}