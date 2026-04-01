#include <stdio.h>
#include <stdlib.h>

int convPolParaCm(int pol, float *cm){
    *cm = pol * 2.54;
}

int main(){
    float *cm = (float *)malloc(sizeof(float));
    int pol = 6;

    convPolParaCm(pol, cm);
    printf("%d pol = %g cm", pol, *cm);

    free(cm);

    return 0;
}