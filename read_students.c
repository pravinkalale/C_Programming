#include<stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    int age; 

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened");
        return 1;
    }

    while(fscanf(fp, "%s %d", name, &age) != EOF)
    {
        printf("name: %s, Age: %d\n", name, age);
    }

    fclose(fp);

    return 0;
}