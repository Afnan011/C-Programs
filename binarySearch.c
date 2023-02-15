#include <stdio.h>
void main()
{
    int a[20], n, target;
    int flag = 0;
    int item, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the search key: ");
    scanf("%d", &target);

    int start=0;
    int end=n-1;
    int mid = (start + end) / 2;

    while ( (start <= end) && (a[mid] != target) )
    {
        if (target < a[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

       mid = (start + end) / 2;  
    }
    
    if (target == a[mid])
    {
        item = a[mid];
        pos = ++mid;
        flag = 1;
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