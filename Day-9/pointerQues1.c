// maximum number between 2 numbers using pointers
#include <stdio.h>
void max(int n1, int n2, int *res);
void main()
{
    int n1, n2, res;

    n1 = 10;
    n2 = 20;

    max(n1, n2, &res);
    printf("%d is greater\n", res);
}

void max(int n1, int n2, int *res)
{
    if (n1 > n2)
    {
       *res = n1;
    }
    else
        *res = n2;
}