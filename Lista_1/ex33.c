#include <stdio.h>

int main(){
    long long int horas, minutos, res;
    
    printf("Digite quantas horas estão fazendo agora (*horas*:minutos): ");
    scanf("%lld", &horas);
    printf("Digite os minutos (horas:*minutos*): ");
    scanf("%lld", &minutos);
    
    res = (horas * 60) + minutos;

    printf("Se passaram %lld minutos desde 00:00", res);

    return 0;
}