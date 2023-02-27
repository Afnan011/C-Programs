#include <stdio.h>
#include <string.h>

char *revStr(char str[20])
{
    char rev[20];
    int j = 0;
    for(int i = strlen(str)-1; i>=0; i--)
    {
        rev[j] = str[i];
        j++;
    }

    strcpy(str, rev);
    return str;
}

int main()
{

    char str[20];

    printf("Enter a string : ");
    gets(str);

    printf("str = %s\n", str);

    char *ptrStr = revStr(str);
    printf("REV = %s\n", ptrStr);

    return 0;
}