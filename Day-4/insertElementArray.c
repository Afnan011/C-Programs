#include<stdio.h>
void main()
{
    int n, a[20];
    int item, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to be inserted: ");
    scanf("%d", &item);
    
    printf("Enter location where the element is to be inserted: ");
    scanf("%d", &pos);


    printf("\nOriginal Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
    
    //inserting method
    for (int i = n-1; i >= pos-1; i--)
    {
        a[i+1] = a[i];
    }

    n++;
    a[pos-1] = item;

    printf("\nArray after insertin: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
    
    

}


