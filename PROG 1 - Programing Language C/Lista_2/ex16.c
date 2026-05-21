#include <stdio.h>

int main(){
   int num;
   
   printf("\nDigite a nota: ");
   scanf("%d", &num);

   switch(num){
    case 0 ... 4:
        printf("D");
        break;
    case 5 ... 6:
        printf("C");
        break; 
    case 7 ... 8:
        printf("B");
        break;
    case 9 ... 10:
        printf("A");
        break;
    default:
        printf("Nota invalida");        
   }
   return 0;
}