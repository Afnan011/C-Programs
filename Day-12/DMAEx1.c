/*
Dynamic Memory Allocation
1. malloc()
2. calloc()
3. free()
4. realloc()
*/

//using Malloc
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *a;
    int n = 5;

    a = (int *) malloc(n * sizeof(int));

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    
    free(a);

}
