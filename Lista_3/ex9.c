#include <stdio.h>

int letra(char l){
    switch (l)
    {
    case 'a' ... 'z':
        return 1;
        break;

    case 'A' ... 'Z':
        return 1;
        break;
    
    default:
        return 0;
        break;
    }    
}

int main(){
    char let;

    printf("Digite uma letra: ");
    scanf("%c", &let);

    if (letra(let))
    {
        printf("Pertence ao alfabeto");
    } else{
        printf("Nao pertence ao alfabeto");
    }   

    return 0;
}