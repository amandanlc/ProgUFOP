#include <stdio.h>
#include <ctype.h>

int main(){
    char letra, min;

    printf("\nDigite uma letra maiúscula de A a Z: ");
    scanf("%c", &letra);

    min = tolower(letra);
    printf("\nLetra minuscula: %c", min);
/*

ou

    min = letra + 32;
    printf("\n%c", letra);
*/    
    
}