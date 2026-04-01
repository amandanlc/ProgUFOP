#include <stdio.h>

int main(){
    char caract, ant;

    printf("\nDigite um caractere: ");
    scanf("%c", &caract);

    ant = (int)caract - 1;
    printf("\nAntecessor: %c", ant);  
    
}