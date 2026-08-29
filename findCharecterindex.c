#include <stdio.h>

int main()
{
   char str[100];
   char ch;
   int i, found = 0;

   printf("Enter a string: ");
   scanf("%s", str);

   printf("Enter character to find: ");
   scanf(" %c", &ch);

   for(i = 0; str[i] != '\0'; i++)
   {
       if(str[i] == ch)
       {
           printf("Character '%c' found at index %d\n", ch, i);
           found = 1;
           break;
       }
   }

   if(found == 0)
   {
       printf("Character not found");
   }

 return 0;
}