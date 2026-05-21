#include <stdio.h>
void semana(int n){
    switch (n)
    {
    case 1:
        printf("DOM");
        break;

    case 2:
        printf("SEG");
        break;
    
    case 3:
        printf("TER");
        break;
        
    case 4:
        printf("QUA");
        break;
        
    case 5:
        printf("QUI");
        break;
        
    case 6:
        printf("SEX");
        break;
        
    case 7:
        printf("SAB");
        break;
    
    default:
        printf("Numero invalido");
        break;
    }
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    semana(num);

    return 0;
}