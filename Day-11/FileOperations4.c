// File operations - get the numbers from the file and put back its sum
#include<stdio.h>

void main()
{

    int sum;

    FILE *fptr;

    //read the file
    fptr = fopen("test.txt", "r");
    int a, b;

    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    sum = a + b;

    printf("Sum = %d", sum);

    fptr = fopen("test.txt", "w");
    fprintf(fptr, "Sum = %d", sum);


}
