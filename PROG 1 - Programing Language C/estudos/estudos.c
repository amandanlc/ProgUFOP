#include <stdio.h>
#include <math.h>

/* for(início; teste; incremento)
inicio = atribuições iniciais de variáveis, separadas por ','
teste = teste a ser realizado para continuar o laço
incremento = um ou mais incrementos de variáveis, separados po ','

1.Executa as atribuições do início.
2.Executa o teste.
1.Se for verdadeiro:
1.Vai para 3.
2.Se for falso:
1.Sai do for.
3.Executa o bloco de comandos (ou
corpo) do for.
4.Executa os comandos em
incremento.
5.Volta para 2.

for(i = 1; i <= 10; i++){
printf("%d", i);
}
*/

int main() {
    printf("CALCULANDO: 10 + 1/2! + 3/3! + 5/4! + 7/5! + 9/6! + 11/7!\n");
    
    double resultado = 10.0;  // Começa com 10
    
    // Vou calcular 6 termos (de 2! até 7!)
    for (int i = 2; i <= 7; i++) {
        // Primeiro calculo o fatorial
        int fatorial = 1;
        for (int j = 1; j <= i; j++) {
            fatorial *= j;
        }
        
        // Agora descubro qual é o numerador
        int numerador;
        if (i == 2) {
            numerador = 1;
        } else if (i == 3) {
            numerador = 3;
        } else if (i == 4) {
            numerador = 5;
        } else if (i == 5) {
            numerador = 7;
        } else if (i == 6) {
            numerador = 9;
        } else {
            numerador = 11;
        }
        
        // Calculo o termo atual
        double termo = (double)numerador / fatorial;
        resultado += termo;
        
        // Mostro na tela
        printf("Termo %d: %d/%d! = %d/%d = %.6f\n", 
               i-1, numerador, i, numerador, fatorial, termo);
    }
    
    printf("\nRESULTADO FINAL: %.10f\n", resultado);

    return 0;
}


int Vcontadora(){

}

int Vindicadora(){
// • Exemplo:	Dados	n números	em	sequência,	diga	se	eles	estão	em	
// ordem	crescente.
// • Solução:
// • Utilizamos	uma	variável	contadora	que	indica	se	os	números	estão	em	ordem	
// crescente
// • Utilizamos	duas	variáveis	para	ler	os	números	e	verificar	se	estão	em	ordem	
// crescente
// • Lemos	o	primeiro	número	e	utilizamos	um	laço	para	ler	os	demais	números	e	
// testar	se	estão	em	ordem

    int i, n, anterior, atual, crescente;
    crescente = 1; // Assumimos números crescentes

    printf("Digite o tamanho da sequência: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida!\n");
    }

    printf("Digite o 1o. número: ");
    scanf("%d", &anterior);

    for(i = 2; i <= n; i++){
        
        printf("Digite o %do. número: ", i);
        scanf("%d", &atual);
        
        if (anterior > atual)
        {
            crescente = 0;
        }
        anterior = atual; // Atualiza para próximo laço
        }
        if (crescente) {
            printf("Números estão em ordem crescente.");
        }else{
            printf("Números não estão em ordem crescente");
        }
    return 0;
}


int Vacumuladora(){  
//      • Problema:	Ler	um	inteiro	positivo	n e,	sem	seguida,	ler	n números	e	
//      apresentar	a	soma	destes	n números	lidos.
//      • Não	podemos	criar	n variáveis	para	depois	somá-las!
//      • Solução:	Utilizar	uma	variável	acumuladora	que,	a	cada	iteração,	
//      acumule	a	soma	dos	números	lidos	até	o	momento
    
   int i, n, temp, soma;
    soma = 0;
    printf("Digite a quantidade de números:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
    printf("Digite o %do. número:", i);
    scanf ("%d", &temp);
    soma = soma + temp;
    }
    printf("soma = %d\n", soma);
    return 0;
}

int ex1(){
    int x;
    printf("\nDigite um numero: ");
    scanf("%d", &x);

    if(x >= 20 && x <= 90){
        printf("\nO numero esta entre 20 e 90");
    } else{
        printf("\nO numero nao esta entre 20 e 90");
    }
    return 0;
}

int ex2(){
    int h, m, s, num;

    printf("\nDigite a quantidade em segundos: ");
    scanf("%d", &num);

    h = num / 3600;
    num = num % 3600;
    m = num / 60;
    num = num % 60;
    s = num;   

    printf("%dh %dm %ds", h, m ,s);

    return 0;
}

int ex3(){
    
   int num1, num2;
   char op;
   float r;
   
   printf("\nDigite uma operacao (ex: 2 * 5): ");
   scanf("%d %c %d", &num1, &op, &num2);

   switch(op){
    case '+':
        r = num1 + num2;
        printf("%d %c %d = %g", num1, op, num2, r);
        break;
    case '-':
        r = num1 - num2;
        printf("%d %c %d = %g", num1, op, num2, r);
        break; 
    case '*':
        r = num1 * num2;
        printf("%d %c %d = %g", num1, op, num2, r);
        break;
    case '/':
        if (num2 != 0)
        {
            r = num1 / num2;
            printf("%d %c %d = %g", num1, op, num2, r);
        }
        break;
    default:
        printf("Operacao invalida");        
   }
   return 0;
}

int ex4(){
    int a, b, c, d;
    float pABC, pABD, pBCD, pACD;
    float tABC, tABD, tBCD, tACD;

    printf("Escreva os valores dos comprimentos: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    pABC = (a + b + c) / 2;
    pABD = (a + b + d) / 2;
    pBCD = (b + c + d) / 2;
    pACD = (a + c + d) / 2;

    tABC = sqrt(pABC * (pABC - a) * (pABC - b) * (pABC - c));
    tABD = sqrt(pABD * (pABD - a) * (pABD - b) * (pABD - d));
    tBCD = sqrt(pBCD * (pBCD - b) * (pBCD - c) * (pBCD - d));
    tACD = sqrt(pACD * (pACD - a) * (pACD - c) * (pACD - d));

    if(tABC > 0 || tABD > 0 ||tBCD > 0 ||tACD > 0 ){
        printf("S");
    }else
    {
        printf("N");
    }
    return 0;
    
}