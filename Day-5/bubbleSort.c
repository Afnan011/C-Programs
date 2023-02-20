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


    // Sorting Technique - Bubble Sort
    for (int i = 0; i < n-1; i++)
    {
        j = 0;
        while (j < n-i-1)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j]  = a[j+1];
                a[j+1] = temp;  
            }
            j++;    
        }
 
    }
    
    

    printf("\nSorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
    
    

}