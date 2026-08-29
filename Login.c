#include<stdio.h>
#include<string.h>
int main()
{
    char Username[50];
    char Password[50];

    printf("\nEnter Username:");
    scanf("%s",&Username);

    printf("\nEnter Password:");
    scanf("%s",&Password);

    if(strcmp(Username,"Admin")==0 && strcmp(Password,"Admin@123")==0)
    {
        printf("\nLogin Succesfully");
    }
    else
    {
        printf("\nLogin Fail");
    }
}