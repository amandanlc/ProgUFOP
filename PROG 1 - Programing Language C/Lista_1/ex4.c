#include <stdio.h>

int main(){
    long long int num;

    printf("Escreva um número: \n");
    scanf("%lld", &num);

    if (num > 0)
    {
        long long int A = num;
        printf("Resultado A: %lld", A);
    }else if (num < 0)
    {
        long long int B = num;
        printf("Resultado B: %lld", B);
    }    

    return 0;
}

/*#include <stdio.h>

int main(){

    return 0;
}*/