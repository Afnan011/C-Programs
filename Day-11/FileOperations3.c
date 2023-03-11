// File operations - print all the odd numbers from 1 to N to the file
#include<stdio.h>

void main()
{

    int n;

    printf("Enter value for N: ");
    scanf("%d", &n);

    FILE *fptr;
    fptr = fopen("test.txt", "w");

    for (int i = 1; i <= n; i+=2)
    {
        fprintf(fptr, " %2d ", i);
    }

    fclose(fptr);

    //read the file
    fptr = fopen("test.txt", "r");
    char ch = fgetc(fptr);

    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    

    

}
