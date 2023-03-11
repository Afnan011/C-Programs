// File operations - input user information and store it in the file
#include<stdio.h>

void main()
{

    int rollno;
    char name[20];

    printf("Enter roll number: ");
    scanf("%d", &rollno);

    printf("Enter your name: ");
    scanf("%s", name);


    FILE *fptr;
    fptr = fopen("test.txt", "w");

    fprintf(fptr, "Roll No: %d\n", rollno);
    fprintf(fptr, "Name: %s\n", name);
    
    fclose(fptr);

    fptr = fopen("test.txt", "r");

    char ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    
    printf("\n");

}
