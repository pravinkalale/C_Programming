#include<stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("data.txt", "a");

    fprintf(fp, "\nRahul 25");
    fprintf(fp, "\nAnisha 22");

    fclose(fp);

    return 0;
}