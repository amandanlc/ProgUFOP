#include <stdio.h>

int main(){
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 || i == 1)
        {
            printf("%d ", i);
        } else{
            continue;
        }
    }
    return 0;
}