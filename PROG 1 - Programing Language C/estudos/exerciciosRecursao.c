#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

int prod(int x, int y) {
    if (y == 0)
    {
        return 0;
    }else
    {
        return x + prod(x, y-1);
    }
}

int main(){

    return 0;
}

/*
int pot(int x, int p) {
    if (p == 0)
    {
        return 1;
    }else if (p == 1)
    {
        return x;
    }else
    {
        return x * pot(x, p-1);
    }    
           
}

int main(){
    int x = 4, p = 2;

    printf("%d", pot(x,p));

    return 0;
}
    */

/*
int soma(int *v, int tam) {
    if (tam < 0)
    {
        return 0;
    }else 
    {
        return v[tam - 1] + soma(v, tam -1);
    }
    
        
}

int main(){
    int v[] = {8, 6, 2, 4};
    int *pv;

    pv = v;

    printf("%d", soma(pv, 4));
    return 0;
}
    */
/*
int contaLetra(){
    int conta(char s[], char c) {
    if (s[0] == '\0') {  // Caso base: fim da string, retorna 0
        return 0;
    }
    if (s[0] == c) {  // Se o caractere atual é igual a c, conta 1 e continua
        return 1 + conta(s + 1, c);
    }
    return conta(s + 1, c);  // Caso contrário, apenas continua sem contar
}

int main(){
    char string[100];
    char letra[2];
    
    printf("Digite uma palavra: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite uma letra: ");
    fgets(letra, sizeof(letra), stdin);

    int len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        len--;  // Remove o \n
    }  
    
    printf("%d", conta(string, letra[0]));

    return 0;
}
}

int palinString(){

int palin(char s[], int i, int j) {
    if (i >= j)
    {
        return 1;       
    }
    if (s[i] != s[j])
    {
        return 0;
    }
    return palin(s, i + 1, j - 1);
}

int main(){
    //int num1, v[num1];
    char string[100];
    
    printf("Digite uma palavra: ");
    fgets(string, sizeof(string), stdin);


    printf("Digite um palin: ");
    scanf("%d", &num1); 

//   for (int i = 0; i < num1; i++)
//    {
//        printf("Digite um número: ");
//        scanf("%d", &v[i]);
//    }

    int len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        len--;  // Remove o \n
    }  
    
    printf("%d", palin(string, 0, len - 1));
    //palin(num1);

    return 0;
}

}

int tamanhoStr(char s[]) {
    if (s[0] == '\0')
    {
        return 0;

    }else if (!isspace(s[1 + tamanhoStr(s + 1)]))
    {
        return 0;
    }else 
    {
        return 1 + tamanhoStr(s + 1); // começa por s[0], sua marca de fim é \0
    }  
}

int ordenado(int v[], int n) {
    int vn = v[n - 1];
    if (n > 0)
    {
        if (vn < v[n - 2])
        {
            return 0;
        }
        return ordenado(v, n - 1);
    }else {
        return 1;
    }  
}

int recVetor(){
int somaVetor(int v[], int n1) {
    if (n1 > 0)
    {
        return v[n1 - 1] + somaVetor(v, n1 - 1);
    }else {
        return 0;
    }  
}
    int num1, v[num1];

    printf("Digite um número: ");
    scanf("%d", &num1);

    for (int i = 0; i < num1; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    }
    
    printf("%d", somaVetor(v, num1));

}

int ex5(){

int mdc(int x, int y){
    
    if (y == 0)
    {
        return x;
    }else
    {
        return mdc(y, x % y);
    }    
}

    int x, y, res;

    printf("Digite o número 1: ");
    scanf("%d", &x);

    printf("Digite o número 2: ");
    scanf("%d", &y);

    res = mdc(x, y);
    printf("%d", res);


}

int ex4(){

int fat(int x){

    if (x == 0)
    {
       return 1;
    }else{
       return x * fat(x - 1);
    }
}
    int x, res;

    printf("Digite o número que queira descobrir o fatorial: ");
    scanf("%d", &x);

    res = fat(x);
    printf("%d", res);
}

int ex2(){
    int fibonacci(int x){
        if (x == 0)
        {
            return 0;
        } else if (x == 1)
        {
            return 1;
        } else
        {
            return fibonacci(x-1) + fibonacci(x-2);
            // EX 3: 
            //      *5* - 1 -> *4* - 1 -> *3* - 1 -> *2* - 1 -> *1* - 1 -> 0 ->retorna *0*
            //      (5) - 2 -> (3) - 2 -> 1 -> retorna (1)
            //      /3/ + /2/ = 5      /2/ + /1/ = /3/     /1/ + /1/ = /2/      (1) + *0* = /1/   *1* + *0* = /1/
            //      Imprimiria: {*0*, /1/, /1/, /2/, /3/, /5/}
        }   
    }
    int num;

    printf("Digite quantos números da sequência fibonacci deseja ver: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("%d ", fibonacci(i));
    }
}

int ex1(){
    
    void imprime(int v[], int i, int n){
    if(i==n){
        printf("%d, ", v[i]);
    }else{
        imprime(v, i+1, n);
        printf("%d, ", v[i]);
    }
    }

    int main(){
        int vet[] = {1,2,3,4,5,6,7,8,9,10};
        imprime(vet, 0, 9);
        printf("\n");
    }

    // retorna: {10,9,8,7,6,5,4,3,2,1}
}

int fatorial(int x){
    int resultado;

    if (x == 0)
    {
        resultado = 1;
    } else{
        resultado = x * fatorial(x - 1);
                    3 *
        // quando x for = 3 por exemplo, vai abrir uma cópia da função fatorial, ou seja, uma segunda função dentro da memória em que x = x-1
                    2 *
        // vai ver que não é x = 0 e vai abrir uma outra função que é cópia dessa na memória que vai resultar em x=1
                    1 *
        // agora vai abrir novamente uma cópia dessa função, vai fazer x-1 que resultará em:
                    0
        // que aí com novamente uma cópia da função vai obter que o resultado é 1 e então na função em que x = 1, vai retornar resultado = 1 e ficará 1*1 acabando a recurssão
    }
    
}
    */