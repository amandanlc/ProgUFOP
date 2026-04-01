#include <stdio.h>

int main(){
    int tri, num;

    for (int i = 1; ; i++)
    {
        printf("\nDigite um número: ");
        scanf("%d", &num);

        tri = num * num * num;

        if (num == -999)
        {
            break;
        } else
        {
            printf("\nTriplo do numero = %d", tri);
        }        
    }
    return 0;
}