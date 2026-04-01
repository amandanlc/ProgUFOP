#include <stdio.h>

void swap(int* a, int* b){
    int *num = a;
    *a = b;
    *b = &num;
}

int main(){
    int a = 10, b = 5;
    printf("a e b = %d %d", a, b);
    
    int s = swap(&a,&b);
    printf("a e b = %d", s);
    
    return 0;
}

int ex1(){
    int num1 = 10;
    float num2 = 5.5;

    int *pi = &num1;
    float *pf = &num2;

    printf("Antes: \n");
    printf("int: %d \nfloat: %g", num1, num2);

    *pi = 5;
    *pf = 9.3;

    printf("\nDepois: \n");
    printf("int: %d \nfloat: %g", num1, num2);
}