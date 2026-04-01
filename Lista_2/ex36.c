#include <stdio.h>

int main(){
    float altC = 1.50, altJ = 1.10;

    for (int i = 1; ; i++)
    {
        altC += 0.02;
        altJ += 0.03;

        if (altJ > altC)
        {
            printf("\n%d anos para juca ser maior que chico", i);
            break;
        }
        
    }
    
}