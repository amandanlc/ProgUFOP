#include <stdio.h>

int main(){
    int nota1, nota2, nota3, nota4, nota5;

    printf("Escreva a nota do aluno 1: \n");
    scanf("%d", &nota1);

    printf("Escreva a nota do aluno 2: \n");
    scanf("%d", &nota2);

    printf("Escreva a nota do aluno 3: \n");
    scanf("%d", &nota3);

    printf("Escreva a nota do aluno 4: \n");
    scanf("%d", &nota4);

    printf("Escreva a nota do aluno 5: \n");
    scanf("%d", &nota5);

    int media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf("A média dos alunos é: \n%d", media);
}