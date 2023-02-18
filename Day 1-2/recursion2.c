#include <stdio.h>
int fibonacci(int);

void main()
{
    int n = 5;

    // recursive call
    int res = fibonacci(n);
    printf(" %d!  = %d", n, res);
}

int fibonacci(int n)
{

    if (n == 1)
    {
        return n;
    }

    return n * fibonacci(n - 1);
}