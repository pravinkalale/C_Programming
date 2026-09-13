#include<stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("File could not be opened");
        return 1;
    }

    fclose(fp);

    printf("students.txt cleaned successfully.");

    return 0;
    
}