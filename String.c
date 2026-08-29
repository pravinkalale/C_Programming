#include<stdio.h>
#include<string.h>
int main()
{
    char str[5];

    printf("Enter any String: ");
    fgets(str, sizeof(str), stdin);

    if(str[0] == '\n')
    {
        printf("String is empty");
    }
    else
    {
        printf("String is not empty");
    }
    return 0;
}
