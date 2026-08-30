#include<stdio.h>

int add(int a, int b) //declare fuction
{
    return a+b;
}

int main()
{
    int (*p)(int,int); //declare funtion pointer
    p=add;

    int result = p(10,20); //call the function through pointer

    printf("Result: %d\n", result);

    return 0;
}