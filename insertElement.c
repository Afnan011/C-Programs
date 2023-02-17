#include <stdio.h>

void main()
{
    int n, a[20];
    int item, pos, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the element to be inserted: ");
    scanf("%d", &item);

    printf("\nEnter the location where element is to be inserted: ");
    scanf("%d", &pos);

    for (i = n - 1; i >= pos-1; i--)
    {
        a[i + 1] = a[i];
    }

    a[pos-1] = item;
    n = n + 1;

    printf("\nOutput\n");
    for (i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
}