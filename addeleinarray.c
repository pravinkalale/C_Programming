// #include<stdio.h>
// int main()
// {
//     int a[5]={1,2,3,4,5}; //0-4
    
//     a[6];

//     a[5]=NewEle; 

//     for(i=0; i<5; i++)

//     for(i=0;i<6;i++)
// }

#include <stdio.h>

int main()
{
    int a[6] = {1, 2, 3, 4, 5};
    int NewEle;

    printf("Enter new element: ");
    scanf("%d", &NewEle);

    a[5] = NewEle;

    for(int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}