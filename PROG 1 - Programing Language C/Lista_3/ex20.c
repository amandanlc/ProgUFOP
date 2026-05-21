#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int radParaGrad(int grad, float *rad){
    *rad = (grad * acos(-1.0)/*PI*/) / 180;
}

int main(){
    int grad = 360;
    float *rad = (float *)malloc(sizeof(float));

    radParaGrad(grad, rad);

    printf("%d°C = %g radianos", grad, *rad);

    free(rad);
    
    return 0;
}