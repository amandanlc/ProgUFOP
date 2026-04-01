#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <conio.h>

void lerString(char buffer[], int tamanho) {
    int i = 0;
    char c;
    while (1) {
        c = getch();
        if (c == '\r') { // Enter
            buffer[i] = '\0';
            break;
        }
        if (i < tamanho - 1) {
            buffer[i++] = c;
            printf("%c", c); // mostra na tela
        }
    }
}

int lerNumero() {
    char buffer[100];
    int i = 0;
    char c;
    while (1) {
        c = getch();
        if (c == '\r') { // Enter
            buffer[i] = '\0';
            break;
        }
        if ((c >= '0' && c <= '9') || c == '-' || c == '+') {
            if (i < 99) {
                buffer[i++] = c;
                printf("%c", c);
            }
        }
    }
    return atoi(buffer);
}

int main() {
    int qtdAlunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);
    getchar(); // consome o Enter deixado pelo scanf

    char nomes[qtdAlunos][225]; // matriz de nomes
    int nota1[qtdAlunos], nota2[qtdAlunos], nota3[qtdAlunos];

    for (int i = 0; i < qtdAlunos; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        lerString(nomes[i], 225);

        printf("\nDigite a primeira nota: ");
        nota1[i] = lerNumero();

        printf("\nDigite a segunda nota: ");
        nota2[i] = lerNumero();

        printf("\nDigite a terceira nota: ");
        nota3[i] = lerNumero();
    }

    printf("\n--- Lista de Alunos ---\n");
    for (int i = 0; i < qtdAlunos; i++) {
        printf("Aluno: %s\n", nomes[i]);
        printf("Nota 1: %d\n", nota1[i]);
        printf("Nota 2: %d\n", nota2[i]);
        printf("Nota 3: %d\n", nota3[i]);
        int media = (nota1[i] + nota2[i] + nota3[i]) / 3;
        printf("Média: %d\n\n", media);
    }

    return 0;
}

/*
int Q5(){
-- MELHORIA --
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void lerString(char buffer[], int tamanho) {
    int i = 0;
    char c;
    while (1) {
        c = getch();
        if (c == '\r') { // Enter
            buffer[i] = '\0';
            break;
        }
        if (i < tamanho - 1) {
            buffer[i++] = c;
            printf("%c", c); // mostra na tela
        }
    }
}

int lerNumero() {
    char buffer[100];
    int i = 0;
    char c;
    while (1) {
        c = getch();
        if (c == '\r') { // Enter
            buffer[i] = '\0';
            break;
        }
        if ((c >= '0' && c <= '9') || c == '-' || c == '+') {
            if (i < 99) {
                buffer[i++] = c;
                printf("%c", c);
            }
        }
    }
    return atoi(buffer);
}

int main() {
    int qtdAlunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);
    getchar(); // consome o Enter deixado pelo scanf

    char nomes[qtdAlunos][225]; // matriz de nomes
    int nota1[qtdAlunos], nota2[qtdAlunos], nota3[qtdAlunos];

    for (int i = 0; i < qtdAlunos; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        lerString(nomes[i], 225);

        printf("\nDigite a primeira nota: ");
        nota1[i] = lerNumero();

        printf("\nDigite a segunda nota: ");
        nota2[i] = lerNumero();

        printf("\nDigite a terceira nota: ");
        nota3[i] = lerNumero();
    }

    printf("\n--- Lista de Alunos ---\n");
    for (int i = 0; i < qtdAlunos; i++) {
        printf("Aluno: %s\n", nomes[i]);
        printf("Nota 1: %d\n", nota1[i]);
        printf("Nota 2: %d\n", nota2[i]);
        printf("Nota 3: %d\n", nota3[i]);
        int media = (nota1[i] + nota2[i] + nota3[i]) / 3;
        printf("Média: %d\n\n", media);
    }

    return 0;
}

#include <conio.h>
    //char c;
    //printf("Pressione qualquer tecla para continuar...\n");
    //c = getch(); // captura a tecla
    //printf("Você pressionou: %c\n", c);
    //return 0;

    void lerString(char *buffer, int tamanho) {
        int i = 0;
        char c;
        while (1) {
            c = getch();
            if (c == '\r') { // Enter
                buffer[i] = '\0';
                break;
            }
            if (i < tamanho - 1) {
                buffer[i++] = c;
                printf("%c", c); // ecoa na tela
            }
        }
    }

    int main() {
        char nome[225];
        char buffer1[100], buffer2[100], buffer3[100];
        int n1, n2, n3;

        printf("Digite o nome do aluno: ");
        lerString(nome, 225);

        printf("\nDigite a primeira nota: ");
        lerString(buffer1, 100);
        n1 = atoi(buffer1);

        printf("\nDigite a segunda nota: ");
        lerString(buffer2, 100);
        n2 = atoi(buffer2);

        printf("\nDigite a terceira nota: ");
        lerString(buffer3, 100);
        n3 = atoi(buffer3);

        printf("\nAluno(a): %s\n", nome);
        printf("Nota 1: %d\n", n1);
        printf("Nota 2: %d\n", n2);
        printf("Nota 3: %d\n", n3);

        return 0;
    }
}



int Q4(){
//A questão pede uma função que faça a transposição in-place, ou seja, 
//troque os elementos da matriz original sem usar uma matriz auxiliar. 
//O seu código atual apenas imprime a transposta (usando mat[j][i]), 
//mas não altera a matriz original.

    void matT(int n, int mat[n][n]) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
    }

    int main() {
        int n;

        printf("\nDigite o tamanho da matriz quadrada: ");
        scanf("%d", &n);

        int mat[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("\nElemento [%d][%d]: ", i, j);
                scanf("%d", &mat[i][j]);
            }
        }

        printf("\nMatriz original:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d  ", mat[i][j]);
            }
            printf("\n");
        }

        matT(n, mat); // agora a matriz é transposta in-place

        printf("\nMatriz transposta:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d  ", mat[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
}




int Q3(){
    float C = 1.5;
    float J = 1.1;
    int cont = 0;

    do
    {
        C += 0.02;
        J += 0.03;

        cont++;
    } while (C > J);

    printf("%d anos", cont - 1);
}


int Q2(){
    int contar(char s[]){
    if (s[0] == '\0')
    {
        return 0;
    } else if (s[0] == '\n')
    {
        return 0;
    }
    return 1 + contar(s + 1);
    // 1 + contar(s[0] + 1) -> é = '\0'? é = '\n' não então continua
    // 1 + contar(s[1] + 1) 
    // 1 + contar(s[2] + 1)
    // ...
    // 1 + contar(s[n] + 1) == '\n' -> 0
    // 1 + contar(s[n] + 1) == '\0' -> 0    
    }

    int main(){
        char str[];
        
        printf("Digite uma palavra");
        fgets(str, sizeof(str), stdin);

        printf("%d", contar(str));
    }
}

*/