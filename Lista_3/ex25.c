#include <stdio.h>
#include <stdlib.h>

int fib(int n){
    if (n == 1)
    {
        return 1;
    } else if (n < 1)
    {
        return 0;
    } else
    {
        return fib(n - 1) + fib(n - 2);
    } 
    
    
}

int main(){

    for (int i = 0; i <= 20; i++)
    {
        int res = fib(i);
        if (res > 0)
        {
            printf(" %d ", res);
        }
        
    }

    return 0;
}