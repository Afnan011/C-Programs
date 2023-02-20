#include<stdio.h>
void main()
{
    int n, a[20], j;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    // Sorting Technique - Insertion Sort
    for (int i = 1; i < n; i++)
    {
        j = i;
        while (j >= 1)
        {
            if (a[j] < a[j-1])
            {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
            j--;
        }
        
    }
    

    printf("\nSorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
    
    

}