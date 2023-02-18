#include <stdio.h>
int fibonacci(int);

void main()
{
    int n = 5;

    // recursive call
    int res = fibonacci(n-1);
    printf(" Fibonacci of %dth term is  = %d", n, res);

    printf("\nFibonacci series......\n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d", fibonacci(i));
    }
    
}

int fibonacci(int n)
{
    if (n < 2 )
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}