#include <stdio.h>
#include <stdlib.h>

int KparaF(int K, float *F){
    *F = (K - 273.15) * 1.8 + 32;
}

int main(){
    int kelvin = 30;
    float *f = (float *)malloc(sizeof(float));

    KparaF(kelvin, f);
    printf("%d K = %g F", kelvin, *f);

    free(f);

    return 0;
}