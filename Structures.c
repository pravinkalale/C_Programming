#include<stdio.h>
#include<string.h>

struct employee 
{
    int id;
    char name[20];
}e1;

int main()
{
    e1.id = 101;
    strcpy(e1.name, "pravin kalale");

    printf("ID: %d", e1.id);
    printf("\nName: %s", e1.name);

    return 0;
}
