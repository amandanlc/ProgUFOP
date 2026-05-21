#include <stdio.h>
#include <stdlib.h>

int troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int *a, *b;
    int x = 5, y = 2;
    a = &x;
    b = &y;
    troca(a,b);
    printf("a = %d, b = %d", *a, *b);
}