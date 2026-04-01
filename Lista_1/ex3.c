#include <stdio.h>

int main(){

    char sexo, sobrenome[50];

    printf("Escreva F se seu sexo for feminino ou M se for masculino: \n");
    scanf("%c", &sexo);

    printf("Escreva seu sobrenome: \n");
    scanf("%s", &sobrenome);
    
    if (sexo == 'F' || sexo == 'f')
    {
        printf("Ilma Sra. %s", sobrenome);
    } else if (sexo == 'M' || sexo == 'm')
    {
        printf("Ilmo Sr. %s", sobrenome);
    } else
    {
        printf("Sexo inválido, por favor escreva novamente.");
    };   
    
    return 0;
}