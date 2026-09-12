#include<stdio.h>

int main()
{
    FILE *fp;
    char name[20];
    int age;

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened");
        return 1;
    }

    fscanf(fp, "%s %d", name, &age);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    fclose(fp);

    return 0;
}