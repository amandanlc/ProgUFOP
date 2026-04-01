#include <stdio.h>

int main() {
    float heights[10];
    int delegations[10];
    
    float bigHeights[5] = {0, 0, 0, 0, 0}; 

    for (int i = 0; i < 10; i++) {
        printf("\n========== ATHLETE %d ==========", i + 1);
        printf("\nEnter height (ex: 1.85): ");
        scanf("%f", &heights[i]);
        
        printf("Enter delegation (1 to 5): ");
        scanf("%d", &delegations[i]);
    }

    for (int i = 0; i < 10; i++) {
        int d = delegations[i];
        
        if (d >= 1 && d <= 5) {
            if (heights[i] > bigHeights[d - 1]) {
                bigHeights[d - 1] = heights[i];
            }
        }
    }

    printf("\n\n========== HIGHEST PER DELEGATION ==========");
    for (int i = 0; i < 5; i++) {
        if (bigHeights[i] > 0) {
            printf("\nDelegation %d: %.2f m", i + 1, bigHeights[i]);
        } else {
            printf("\nDelegation %d: No athletes registered", i + 1);
        }
    }

    return 0;
}