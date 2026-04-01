#include <stdio.h>
#include <stdlib.h>

int conversaoFparaC(int F, float *C){
    *C = (F - 32) / 1.8;

}

int main(){
    float *celsius = (float *)malloc(sizeof(float));
    int fahrenheit = 35;

    conversaoFparaC(fahrenheit, celsius);

    printf("%d F = %g°C",  fahrenheit, *celsius);

    free(celsius);

    return 0;
}