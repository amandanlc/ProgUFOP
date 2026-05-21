#include <stdio.h>

int strcmp(char *a, char *b){ //compara se duas strings são iguais ou diferentes
    while (*a && (*a == *b)) {
        a++;
        b++;
    }
    return *(unsigned char *)a - *(unsigned char *)b;
}
void strcpy(char *destino, char *fonte){ //copia o conteúdo de uma string para outra
    while (*fonte != '\0') {
        *destino = *fonte; 
        destino++;
        fonte++;
    }
    *destino = '\0';

}
void strcat(char *destino, char *fonte){ //"gruda"(concetena) uma string no final da outra
    while (*destino != '\0') destino++;

    while (*fonte != '\0') {
        *destino = *fonte;
        destino++;
        fonte++;
    }
    *destino = '\0';
}
int strlen(char *s){ //tamanho da string
    if (*s != '\0')
    {
        return 1 + strlen(s + 1);
    }else
    {
        return 0;
    }
    
    
}
int isdigit(char c){ // verifica se um único caractere é um dígito numérico
    if (c >= '0' && c <= '9')
    {
        return 1;
    } else{
        return 0;
    }
    
}

int main(){
    // 1. Testando strlen
    char name[] = "Gemini";
    printf("1. STRLEN: The lenght of '%s' is: %d\n", name, strlen(name));

    // 2. Testando strcpy
    char copy[20];
    strcpy(copy, name);
    printf("2. STRCPY: Copied to the vector 'copy': %s\n", copy);

    // 3. Testando strcmp
    char passwoord[] = "1234";
    char attempt[] = "1234";
    if (strcmp(passwoord, attempt) == 0) {
        printf("3. STRCMP: The strings are equal!\n");
    } else {
        printf("3. STRCMP: The strings are diferents.\n");
    }

    // 4. Testando strcat
    char hello[50] = "Hello, "; // Espaço extra para caber a concatenacao
    char complement[] = "C world!";
    strcat(hello, complement);
    printf("4. STRCAT: Result: %s\n", hello);

    // 5. Testando isdigit
    char charactere = '7';
    if (isdigit(charactere)) {
        printf("5. ISDIGIT: '%c' Is a number.\n", charactere);
    } else {
        printf("5. ISDIGIT: '%c' Isn't a number.\n", charactere);
    }

    return 0;
}