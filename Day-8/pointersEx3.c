// pass by value and pass by reference
#include <stdio.h>
void swap(int, int);
void _swap(int*, int *);
void main()
{
    int a = 10;
    int b = 20;

    // pass by value
    swap(a, b);
    printf("A = %d, B = %d\n", a, b);

    // pass by reference
    _swap(&a, &b);
    printf("A = %d, B = %d\n", a, b);
}

// pass by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("A = %d, B = %d\n", a, b);
}

void _swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}