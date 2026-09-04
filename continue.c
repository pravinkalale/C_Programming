#include<stdio.h>
int main()
{
    int x =5;

    while(x > 0)
    {
        if(x == 3)
            continue;

        printf("%d ", x);
        x--;
    }
    
}