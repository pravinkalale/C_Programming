#include<stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("data.txt","w");

    fprintf(fp, "Name: Pravin\n");
    fprintf(fp, "Age: 23\n");

    fclose(fp);

    return 0;
}