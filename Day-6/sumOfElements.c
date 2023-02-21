//program to return sum of all the elements of an array using simple loops

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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    
    return sum;
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
    printf("\n");
}