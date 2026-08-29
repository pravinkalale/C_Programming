#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0;
    int vowelcount=0;
    int consonantcount=0;


    printf("Enter a string\n");
    fgets(str, sizeof(str),stdin);

    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]== '\n')
        {
            
        }
        else if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || 
        str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || 
        str[i]=='u' || str[i]=='U')
        {
            vowelcount++;
        }
        else
        {
            consonantcount++;
        }

    
        i++;
    }
        printf("Number of vowels in the string:%d\n",vowelcount);
        printf("Number of consonants:%d",consonantcount);


        return 0;
    
}