#include <stdio.h>

int regular(int n){
    if (n <= 0)
    {
        return 0;
    }

    while (n % 2 == 0)
    {
        n /= 2;
    }

    while (n % 3 == 0)
    {
        n /= 3;
    }

    while (n % 5 == 0)
    {
        n /= 5;
    }   

    return n == 1; // nao entendi pq nao é simplesmente return 1;
}

int main(){
    int num;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if (regular(num))
    {
        printf("\n%d eh regular\n", num);
    } else
    {
        printf("\n%d nao eh regular\n", num);
    }

    // teste
    printf("\n=====================================");
    printf("\nTESTE:\n");
    for (int i = 0; i <= 20; i++)
    {
        if (regular(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n=====================================");
    
    return 0;
}