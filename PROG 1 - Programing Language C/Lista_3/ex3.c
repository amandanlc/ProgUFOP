#include <stdio.h>

void cabecalho(char nome[]){
    printf("\n================================================");
    printf("\nUFOP - Universidade Federal de Ouro Preto\nICEA - Instituto de Ciências Exatas e Aplicadas\nDisciplina de Programação de Computadores I\nNome: %s", nome);
    printf("\n================================================\n");
}

int main(){
    char nome[225];

    printf("Escreva seu nome: ");
    scanf("%99s", nome);

    cabecalho(nome);

    return 0;
}