#include<stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened");
        return 1;
    }

    fprintf(fp, "Pravin 23\n");
    fprintf(fp, "Gajanan 25\n");
    fprintf(fp, "Shiv 23\n");
    fprintf(fp, "Arjun 23\n");
    fprintf(fp, "Gaurav 23\n");

    fclose(fp);

    return 0;

}