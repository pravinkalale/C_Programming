#include<stdio.h>
int main()
{
    FILE *fp;
    int choice;
    char name[30];
    int age;
    float marks;

    while (1)
    {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. View students\n");
        printf("3. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);
    

        if (choice == 1)
        {
            printf("Enter Student Name: ");
            scanf("%s", name);

            printf("Enter Age: ");
            scanf("%d", &age);

            printf("Enter Marks: ");
            scanf("%f", &marks);

            fp = fopen("students.txt", "a");

            fprintf(fp, "%s %d %.2f\n", name, age, marks);

            fclose(fp);

        }

        else if(choice == 2)
        {
            fp = fopen("students.txt", "r");

            if (fp == NULL)
            {
                printf("File could not be opened\n");
            }
            else
            {

                while (fscanf(fp, "%s %d %f", name, &age, &marks) !=EOF)
                {
                printf("Name: %s, Age: %d, Marks: %.2f\n", name, age, marks);
                }

                fclose(fp);
            }          
        }

        else if (choice == 3)
        {
            printf("Existing program...\n");
            break;
        }

        else
        {
            printf("Invalid choice!\n");
        }
        

    }

    return 0;
}