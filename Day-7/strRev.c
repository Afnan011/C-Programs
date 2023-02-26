// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    
    char str[20];
    
    printf("Enter a string : ");
    gets(str);

    printf("str = %s\n", str);
    
    char rev[20];
     printf("REV = ");
    for(int i = strlen(str)-1; i>=0; i--)
        printf("%c", str[i]);

    return 0;
}
