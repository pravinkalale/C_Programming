#include<stdio.h>
int main()
{
    char str[6]={'p','r','a','v','i','n'};
    char i;
    for(i=0; i<6; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    char str2[10]={"Welcome"};
    printf("%s",str2);
}