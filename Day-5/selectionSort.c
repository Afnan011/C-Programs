#include<stdio.h>
void main()
{
    int n, a[20], min;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    // Sorting Technique - Selection Sort
   for (int i = 0; i < n-1; i++)
   {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;

   }
   
    printf("\nSorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
    
    

}