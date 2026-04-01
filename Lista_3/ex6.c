#include <stdio.h>

int primo(int n){
    if (n < 2)
    {
        return 0;
    }
    

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }                
    }

    return 1;    
}

int main(){
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (primo(num)) {
        printf("%d eh primo\n", num);
    } else {
        printf("%d nao eh primo\n", num);
    }
    
    return 0;
}