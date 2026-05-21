#include <stdio.h>
#include <stdlib.h>

int feetPARAm(int feet, float *m){
    *m = feet / 3.281;
}

int main(){
    int feet = 4;
    float *m = (float *)malloc(sizeof(float));

    feetPARAm(feet, m);

    printf("%d pés = %g m", feet, *m);

    free(m);

    return 0;
}