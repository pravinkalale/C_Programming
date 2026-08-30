#include<stdio.h>
int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Before: %d\n", a);

    *p=20;

    printf("After: %d", a);

    return 0;
}