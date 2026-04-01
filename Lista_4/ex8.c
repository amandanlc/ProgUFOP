#include <stdio.h>
#include <math.h>

int binToDec(int bin[], int len){
    int dec = 0;
    int power = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (bin[i] == 1)
        {
            dec += pow(2, power);
        }
        power++;
    }

    return dec;    
}

int main(){
    int bin[] = {1,1,0,0,1,0,1,1,1,0,0};
    int length = sizeof(bin) / sizeof(bin[0]);

    printf("Binary: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d", bin[i]);
    }

    printf("\n");

    int dec = binToDec(bin, length);
    printf("Decimal: ");
    printf("%d", dec);    
    
    return 0;
}