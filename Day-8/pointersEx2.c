//pointer to pointer **pptr
#include<stdio.h>
void main()
{
    int i = 10;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%u\n", i);
    printf("%u\n", *ptr);
    printf("%u\n", **pptr);

}