#include <stdio.h>

int main(){
    int diaS;

    printf("Escreva um número de 1 a 7");
    scanf("%d", diaS);

    switch (diaS)
    {
    case diaS = 1:
        printf("Domingo");
        break;

    case diaS = 2:
        printf("Segunda-feira");
        break;
    
    case diaS = 3:
        printf("Terça-feira");
        break;
    
    case diaS = 4:
        printf("Quarta-feira");
        break;

    case diaS = 5:
        printf("Quinta-feira");
        break;

    case diaS = 6:
        printf("Sexta-feira");
        break;

    case diaS = 7:
        printf("Sábado");
        break;
    
    default:
        printf("Valor incorreto, digite novamente.");
        break;
    }

    // com if 

    if (diaS == 1 )
    {        
        printf("Domingo");
    } else if (diaS == 2)
    {
        
        printf("Segunda-feira");
    }else if (diaS == 3)
    {
        
        printf("Terça-feira");
    }else if (diaS == 4)
    {
        
        printf("Quarta-feira");
    }else if (diaS == 5)
    {
        
        printf("Quinta-feira");
    }else if (diaS == 6)
    {
        
        printf("Sexta-feira");
    }else if (diaS == 7)
    {
        
        printf("Sábado");
    } else
    {
        printf("Valor incorreto, digite novamente.")
    }
    
    
    
    
    
    
    
    
}