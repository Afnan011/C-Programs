#include <stdio.h>

void main()
{
    int n, a[10];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i, j, k;

    for (i = 0; i < n; i++)
    {
        j = i;
        for (k = i + 1; k < n; k++)
        {
            if (a[k] < a[j])
            {
                j = k;
            }
        }

        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("\nOutput\n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
}