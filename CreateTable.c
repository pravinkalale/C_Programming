#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number:");
    scanf("%d",&i);

    for(int j=1;j<=10;j++)
    {
        printf("%d\n",i*j);
    }
}


