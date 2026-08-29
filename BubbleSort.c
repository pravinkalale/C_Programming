#include<stdio.h>
//function to perform Bubble sort
void bubbleSort(int arr[],int size) //arr{2.6,5,7,8} , 5
{
    // int i;
    for (int i=0; i<size -1; i++) //0;0<4 size=5-1; 0<4 to travers all
    {
        //int j;
        for (int j=0; j<size - i -1; j++) //j=0; 0<4; 5-0-1 // remaining
        {
            //swap if the element found is greater than the n
            if(arr[j] > arr[j+1]) //a[0]>a[1]  8>7
            {
                //swap the elements with 3rd var
                int temp = arr[j]; //temp = a[0]=8
                arr[j]= arr[j+1]; //a[0] = a[1] =7
                arr[j + 1] = temp; //a[1] = 8
            }
        }
    }
}


//function to print the array

void printArray(int arr[], int size)
{
    for (int i = 0; i<size; i++) //
    {
        printf("%d ", arr[i]); //ele
    }
    printf("\n");
}
int main()
{
    int arr[] = {2,6,5,7,8}; //5 4 byyes 4*5 = 20
    int size = sizeof(arr) / sizeof(arr[0]); //size(arr)/size(8) // 4*5=20/5 = 5
    //sizeof(arr)/sizeof(arr[0])
    printf("Original Array: \n");
    printArray(arr , size); // array & size calling function/

    printf("\n");
    // sorting function
    bubbleSort(arr,size); //arr & size arr & 5

    printf("\n Sorted array:\n");
    printArray(arr,size);
    return 0;
}



