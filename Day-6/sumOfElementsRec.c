//program to return sum of all the elements of an array using Recursion

#include<stdio.h>
int sumOfElements(int[], int);
void display(int[], int);

void main()
{
    int n, a[20];

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = sumOfElements(a, n);

    display(a, n);
    printf("Sum of all the elements in an array  = %d", sum);

}

int sumOfElements(int a[], int n)
{
    if (n < 0){
        return 0;
    }
    else{
        return sumOfElements(a, n-1) + a[n];
    }
    
}


void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
    printf("\n");
}