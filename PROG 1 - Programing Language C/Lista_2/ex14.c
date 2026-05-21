#include <stdio.h>

int main(){    
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