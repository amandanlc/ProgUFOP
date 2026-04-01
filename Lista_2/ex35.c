#include <stdio.h>

int main(){
    int NUM_ALUNOS, NUM_PROV_A, notas, notaMax, contP = 0, somaT = 0;
    float percA, percT, mediaT;
    
    printf("Digite o numero de alunos da turma: ");
    scanf("%d", &NUM_ALUNOS);

    printf("Digite o numero de provas que cada aluno fez: ");
    scanf("%d", &NUM_PROV_A);

    printf("Digite a nota maxima que pode ser dada nas provas: ");
    scanf("%d", &notaMax);

    percA = notaMax * 0.8;

    for (int i = 1; i <= NUM_ALUNOS; i++)
    {
        int somaA = 0;
        float mediaA = 0;

        for (int j = 1; j <= NUM_PROV_A; j++)
        {
            printf("Digite o valor da prova %d do aluno %d: ", j, i);
            scanf("%d", &notas);

            somaA += notas;
        }
        mediaA = somaA / NUM_PROV_A;

        printf("\nMedia do aluno %d: %.2f\n", i, mediaA);

        if (mediaA >= percA)
        {
            contP++;
        }            
        somaT += mediaA;
    }
    mediaT = somaT / NUM_ALUNOS;
    percT = contP * 100 / NUM_ALUNOS;

    printf("\nMedia da turma: %.2f", mediaT);
    printf("\nPercentual de alunos com medias acima ou igual a 80%% e de: %.2f%%", percT);
    
}