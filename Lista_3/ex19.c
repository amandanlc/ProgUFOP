#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int eq2grau(int a, int b, int c, float *x1, float *x2){
    *x1 = (-b + sqrt((b * b) - (4 * a * c))) / 2 * a;
    *x2 = (-b - sqrt((b * b) - (4 * a * c))) / 2 * a;

    if (*x1 == *x2)
    {
        return -1;
    }else
    {
        return 2;
    }
}

int main(){
    float *x1 = (float *)malloc(sizeof(float));
    float *x2 = (float *)malloc(sizeof(float));
    int a = 2, b = -8, c = 8;

    int res = eq2grau(a, b, c, x1, x2);

    if (res == 2)
    {
        printf("x' = %g \nx'' = %g", *x1, *x2);
    }else{        
        printf("x = %g", *x1);
    }    

    free(x1);
    free(x2);

    return 0;
}