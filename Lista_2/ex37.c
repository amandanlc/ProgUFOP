#include <stdio.h>

int main(){
    float m;

    printf("\nDigite a massa da sua pedra: ");
    scanf("%f", &m);

    for (int i = 1; ; i++)
    {
        m = m - (m * 0.25);
        if (m < 0.1)
        {
            int t = i * 30;
            printf("\nTempo necessario: %d segundos", t);
            break;
        }
        
    }
    
}