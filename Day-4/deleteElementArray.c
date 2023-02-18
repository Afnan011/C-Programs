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
    
    printf("Enter location of the element is to be removed: ");
    scanf("%d", &pos);


    printf("\nOriginal Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
    
    //inserting method
    item = a[pos-1];
    for (int i = pos-1; i <=n; i++)
    {
        a[i] = a[i+1];
    }

    n--;

    printf("\nArray after insertin: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
    
    

}


