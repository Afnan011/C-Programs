// File operations - read mode
#include<stdio.h>

void main()
{

    FILE *fptr;
    char dig;
    fptr = fopen("test.txt", "r");

    dig = fgetc(fptr);
    while (dig != EOF)
    {
        printf(" %c ", dig);
        dig = fgetc(fptr);
    }
    printf("\n");
    

    fclose(fptr);
}
