#include <stdio.h>
#include <string.h>
#include <ctype.h>

int pega_prox_string(char linha[], int pos, char palavra[]) {
    int i = pos;
    int j = 0;

    while (linha[i] != '\0' && isspace(linha[i])) {
        i++;
    }

    if (linha[i] == '\0') {
        return -1; 
    }

    char temp[100];
    int inicio_palavra = i;
    
    while (linha[i] != '\0' && !isspace(linha[i])) {
        temp[j] = linha[i];
        i++;
        j++;
    }
    temp[j] = '\0'; 

    strcpy(palavra, temp);

    return i;
}

int main() {
    char linha[500];
    char palavra[100];
    int posicao = 0;

    printf("Digite uma frase: ");
    gets(linha);

    printf("\nPalavras identificadas:\n");

    while ((posicao = pega_prox_string(linha, posicao, palavra)) != -1) {
        printf("%s\n", palavra);
    }

    return 0;
}