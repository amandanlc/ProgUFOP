#include <stdio.h>

int main(){
    int matr[10], cod[10], cr[10], cprem, maiorcr, indice = 0;
    char sexo[10][1];

    for (int i = 0; i < 10; i++)
    {
        printf("\n==========ALUNO %d==========", i + 1);

        printf("\n");

        printf("Escreva a matrícula: ");
        scanf("%d", &matr[i]);
        printf("Digite seu sexo(0 - feminino, 1 - masculino): ");
        scanf(" %c", &sexo[i]);
        printf("Escreva o código do curso (número de matrícula = aascccnnn (ccc - cód. curso)): ");
        scanf("%d", &cod[i]);
        printf("Escreva seu Coeficiente de Rendimento: ");
        scanf("%d", &cr[i]);
        
        printf("\n");
    }

    printf("==========Lista dos alunos==========");
    printf("\n| MATRÍCULA |   SEXO    | COD CURSO | CR |");
    for (int i = 0; i < 10; i++)
    {
        if (sexo[i][0] == '0')
        {
            printf("\n| %d | Feminino  |    %d    | %d  |", matr[i], cod[i], cr[i]);
        }else if (sexo[i][0] == '1')
        {
            printf("\n| %d | Masculino |    %d    | %d  |", matr[i], cod[i], cr[i]);
        }
        
    }
    
    printf("\n");
    
    printf("\nDigite um código de um curso: ");
    scanf("%d", &cprem);

    maiorcr = cr[0];

    for (int i = 0; i < 10; i++)
    {
        if (cod[i] == cprem && sexo[i][0] == '0')
        {
            if (maiorcr < cr[i])
            {
                maiorcr = cr[i];
                indice = i;
            }            
        }        
    }

    printf("\n==========ALUNA PREMIADA==========");    
    printf("\nAluna %d de matrícula %d", indice + 1, matr[indice]);
    printf("\n");
    
    return 0;
}

















/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int cod[10], cr[10], premio, mat[10];
    int sex[10];
    int maiorCR = -1, indiceMelhor = -1;

    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Digite a matrícula (formato aasccccnnn): ");
        scanf("%d", mat[i]);

        // Extrai os 3 dígitos do código do curso
        cod[i] = (mat[i] / 10000000) % 1000;

        printf("Digite o sexo (0 feminino, 1 masculino): ");
        scanf("%d", &sex[i]);

        printf("Digite o CR (inteiro): ");
        scanf("%d", &cr[i]);
    }

    printf("\nDigite o código do curso que deseja premiar: ");
    scanf("%d", &premio);

    printf("\n=== LISTA DE ALUNOS ===\n\n");
    for (int i = 0; i < 3; i++) {
        printf("Matricula: %d  ", mat[i]);

        if (sex[i] == 0)
            printf("Sexo: Feminino  ");
        else
            printf("Sexo: Masculino  ");

        printf("Curso: %d  ", cod[i]);
        printf("CR: %d\n", cr[i]);
    }

    // Procura a aluna premiada
    for (int i = 0; i < 3; i++) {
        if (cod[i] == premio && sex[i] == 0) {
            if (cr[i] > maiorCR) {
                maiorCR = cr[i];
                indiceMelhor = i;
            }
        }
    }

    printf("\n=== RESULTADO ===\n");

    if (indiceMelhor == -1) {
        printf("Nenhuma aluna do curso %d tem CR registrado.\n", premio);
    } else {
        printf("A aluna premiada é:\n");
        printf("Matrícula: %d\n", mat[indiceMelhor]);
        printf("Curso: %d\n", cod[indiceMelhor]);
        printf("CR: %d\n", cr[indiceMelhor]);
    }

    return 0;
}
*/ 