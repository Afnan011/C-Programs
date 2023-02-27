// returning multiple values using pointers
#include <stdio.h>
void doWork(int a, int b, int *sum, int *prod, int *avg);
void main()
{
    int a, b;
    a = 2;
    b = 4;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);

    printf("Sum = %d, Product = %d, avg = %d\n", sum, prod, avg);
}

void doWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}