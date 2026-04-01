#include <stdio.h>

int main(){
    int pes[2], maos[2], pod[2], total[2];
    
    for (int i = 0; i < 2; i++)
    {
        printf("Quantos pés a manicure %d fez no mês: ", i + 1);
        scanf("%d", &pes[i]);
        printf("Quantas mãos a manicure %d fez no mês: ", i + 1);
        scanf("%d", &maos[i]);
        printf("Quantos serviços de podologia a manicure %d fez no mês: ", i + 1);
        scanf("%d", &pod[i]);
        printf("\n");

    }

    for (int i = 0; i < 2; i++)
    {
        pes[i] = (pes[i] * 10) * 0.5; 
        maos[i] = (maos[i] * 15) * 0.5; 
        pod[i] = (pod[i] * 30) * 0.5; 
        total[i] = pes[i] + maos[i] + pod[i];

        printf("\n");
        printf("=========Faturamento Manicure %d=========", i + 1);
        printf("\n");
        printf("Pés: R$%d,00", pes[i]);
        printf("\n");
        printf("Mãos: R$%d,00", maos[i]);
        printf("\n");
        printf("Serviço de podologia: R$%d,00", pod[i]);
        printf("\n");
        printf("Total: R$%d,00", total[i]);
        printf("\n");
    }
    
    

    return 0;
}