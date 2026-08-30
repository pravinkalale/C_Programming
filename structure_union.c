#include<stdio.h>

struct StructureTest 
{
    int a; 
    float b;
    char c;
};

union UnionTest
{
    int a;
    float b;
    char c;
};

int main()
{
    printf("size of int: %zu bytes\n", sizeof(int));
    printf("size of float: %zu bytes\n", sizeof(float));
    printf("size of char: %zu bytes\n", sizeof(char));

    printf("\nStructure size: %zu bytes\n", sizeof(struct StructureTest));
    printf("Union size: %zu bytes\n", sizeof(union UnionTest));

    return 0;
}