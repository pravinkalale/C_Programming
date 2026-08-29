#include<stdio.h>

struct student 
{
    int id;
    char name[10];
};

int main()
{
    struct student s[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("\nEnter Id:");
        scanf("%d",&s[i].id);

        printf("\nEnter Name:");
        scanf("%9s", s[i].name);
    }

    printf("\nStudent Information\n");

    for(i=0; i<5; i++)
    {
        printf("\nId:%d, Name:%s",s[i].id,s[i].name);
    }
        return 0;
}