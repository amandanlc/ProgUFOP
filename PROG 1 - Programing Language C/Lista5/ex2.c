#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pessoa
{
    char nome[200];
    int idade;
    char endereco[1000];
};
typedef struct Pessoa Pessoa;

int main(){
    Pessoa p; 
 
    printf("Digite seu nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = 0;

    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    while (getchar() != '\n'); 
       
    printf("Digite seu endereço: ");
    fgets(p.endereco, sizeof(p.endereco), stdin);
    p.endereco[strcspn(p.endereco, "\n")] = 0;

    printf("%s | %d anos | %s", p.nome, p.idade, p.endereco);
    
    return 0;
}
