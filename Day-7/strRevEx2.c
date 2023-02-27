#include <stdio.h>
#include <string.h>
int main() {
    
    char str[20];
    int j = 0;
    
    printf("Enter a string : ");
    gets(str);

    printf("str = %s\n", str);
    
    char rev[20];
    for(int i = strlen(str)-1; i>=0; i--)
    {
        rev[j] = str[i];
        j++;
    }

    printf("Str rev = %s\n", rev);

    return 0;
}