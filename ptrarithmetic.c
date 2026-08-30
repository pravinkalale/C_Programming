#include<stdio.h>
int main()
{
    int a=10;
    int b=10;
    int *p , *q;

    p=&a;
    q=&b;

    int c = *p+*q;

    printf("Addition: %d",c);

    return 0;
}