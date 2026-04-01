#include <stdio.h>

int divsivel(int x, int y){   
    
    if (y == 0 || x % y != 0)
    {
        return -1;
    } else{
        return 1 + divsivel(x / y, y);
    }
    
}

int main(){
    int x = 8, y = 2;

    int res = divsivel(x, y);
    if (res != -1)
    {
        printf("Foi possível realizar x/y %d vezes", res + 1);
    }else
    {
        printf("Não foi possível realizar a operação");
    }
    
    

}