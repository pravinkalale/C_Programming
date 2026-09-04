#include<stdio.h>
int main()
{
    int x=2;

    switch(x)
    {
        case 1:
            printf("A");
        break;

        case 2:
            printf("B");
        break;

        case 3:
            printf("C");
        break;
        
        default:
            printf("D");
    }
    return 0;
}