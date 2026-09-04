#include<stdio.h>

void change(int x)
{
    x=20;
}

int main()
{
    int a=10;

    change(a); //call the function

    printf("%d",a);

    return 0;
}