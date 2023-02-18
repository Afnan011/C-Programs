#include <stdio.h>
int gcd(int, int);
void main()
{
    int m, n;

    printf("Enter m and n values: ");
    scanf("%d%d", &m, &n);

    int res = gcd(m, n);

    printf("GCD(%d,%d) = %d", m, n, res);
}

int gcd(int m, int n)
{
    int rem = 0;
    while (n>0)
    {
        rem = m%n;
        m = n;
        n = rem;
    }

    return m;
    
}