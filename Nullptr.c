#include<stdio.h>
int main()
{
    int *p=NULL;


    if(p !=NULL)
    {
        printf("value of p is : %p\n",(void *)p);
    }
    else{
        printf("Null Pointer");
    }
    return 0;
}