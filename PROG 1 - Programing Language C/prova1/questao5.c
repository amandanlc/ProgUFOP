#include <stdio.h>

int somaDigitos(int n){
    int soma = 0;
    for ( ;n > 0 ; n /= 10)
    {
        soma += n % 10;
    }
    return soma;
}

int inverterNumero(int n){
    int inv = 0;

    for (; n > 0; n /= 10){
        inv = inv * 10 + (n % 10);
    }

    return inv;
}


int main(){
    int n, op, soma, inv;

    for ( ; ; )
    {
        printf("\nDigite um numero (Digite 0 para parar): ");
        scanf("%d", &n);
        if (n > 0)
        {
            printf("\nEscolha uma opcao:\n1- Soma dos digitos\n2- Inverter o número\n");
            scanf("%d", &op);
            if (op == 1)
            {
                soma = somaDigitos(n);
                printf("Soma dos digitos: %d", soma);
            }else if (op == 2)
            {
                inv = inverterNumero(n);
                printf("Numero invertido: %d", inv);
            }else{
                printf("\nOpcao digitada nao existe");
            }   
        }else if (n == 0)
        {
            break;
        }else
        {
            printf("Numero invalido");
        }      
    }
    
    return 0;
}