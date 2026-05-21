#include <stdio.h>

void romano(int n){
    switch (n)
    {
    case 1: 
        printf("I"); 
        break;

    case 2: 
        printf("II"); 
        break;

    case 3: 
        printf("III"); 
        break;

    case 4: 
        printf("IV"); 
        break;

    case 5: 
        printf("V"); 
        break;

    case 6:     
        printf("VI"); 
        break;

    case 7: 
        printf("VII"); 
        break;

    case 8: 
        printf("VIII"); 
        break;

    case 9: 
        printf("IX"); 
        break;

    case 10: 
        printf("X"); 
        break;
        
    case 11: printf("XI"); break;
    case 12: printf("XII"); break;
    case 13: printf("XIII"); break;
    case 14: printf("XIV"); break;
    case 15: printf("XV"); break;
    case 16: printf("XVI"); break;
    case 17: printf("XVII"); break;
    case 18: printf("XVIII"); break;
    case 19: printf("XIX"); break;
    case 20: printf("XX"); break;
    case 21: printf("XXI"); break;
    case 22: printf("XXII"); break;
    case 23: printf("XXIII"); break;
    case 24: printf("XXIV"); break;
    case 25: printf("XXV"); break;
    case 26: printf("XXVI"); break;
    case 27: printf("XXVII"); break;
    case 28: printf("XXVIII"); break;
    case 29: printf("XXIX"); break; 
    case 30: printf("XXX"); break;
    case 31: printf("XXXI"); break;
    case 32: printf("XXXII"); break;
    case 33: printf("XXXIII"); break;
    case 34: printf("XXXIV"); break;
    case 35: printf("XXXV"); break;
    case 36: printf("XXXVI"); break;
    case 37: printf("XXXVII"); break;
    case 38: printf("XXXVIII"); break;
    case 39: printf("XXXIX"); break;
    case 40: printf("XL"); break;
    case 41: printf("XLI"); break;
    case 42: printf("XLII"); break;
    case 43: printf("XLIII"); break;
    case 44: printf("XLIV"); break;
    case 45: printf("XLV"); break;
    case 46: printf("XLVI"); break;
    case 47: printf("XLVII"); break;
    case 48: printf("XLVIII"); break;
    case 49: printf("XLIX"); break;
    case 50: printf("L"); break;
    default: printf("Numero invalido"); break;
    }
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    romano(num);

    return 0;
}