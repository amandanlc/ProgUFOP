#include <stdio.h>

void imparesDecrescentes(int x){    
    for (int i = x; i >= 1; i--){
        if (i % 2 != 0){ 
            printf("%d ", i);
        }
    }    
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    imparesDecrescentes(num);
    return 0;
}
