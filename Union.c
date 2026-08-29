#include<stdio.h>
#include<string.h>

union employee
{
    int id;
    char name[20];
}e1;

int main()
{
    e1.id = 101;
    printf("Id: %d\n", e1.id);
    

    strcpy(e1.name, "pravin");  
    printf("name:%s\n", e1.name);

    return 0;
}