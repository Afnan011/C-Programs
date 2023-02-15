#include <stdio.h>
void main()
{
    int a[20], n, target;
    int flag = 0;
    int item, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the search key: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            flag = 1;
            item = a[i];
            pos = ++i;
        }
    }

    if (flag == 1)
    {
        printf("Element %d found at %d location", item, pos);
    }
    else
    {
        printf("Element not found");
    }
}