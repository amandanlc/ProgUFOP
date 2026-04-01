#include <stdio.h>

int main(){
    int inf, sup, a, num;

    printf("Digite um intervalo numérico (ex: 10 a 20): ");
    scanf("%d %c %d", &inf, &a, &sup);
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= sup && num >= inf){
        printf("\n%d está dentro do intervalo", num);
    } else {
        printf("\n%d não está dentro do intervalo", num);
    }

    return 0;
}
