#include <stdio.h>
void display(int);
void displayRec(int);

void main()
{
    int n = 5;

    // using loop
    display(n);

    // recursive call
    displayRec(n);
}

void display(int n)
{
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%5d", i);
    }
    printf("\n");
}

void displayRec(int n){

    if (n == 0)
    {
        return;
    }
    
    displayRec(n - 1);

    printf("%5d", n);

}