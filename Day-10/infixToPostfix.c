#include <stdio.h>
#include <string.h>
#include <ctype.h>

int prec(char);
void push(char);
char pop();

#define MAX_STACK 20

char stack[MAX_STACK];
int top = -1;

void main()
{
    char str[] = {"A+B*C"};
    char p[20];
    char op;
    int j = 0;


    for (int i = 0; str[i] != '\0'; i++)
    {
        char ele = str[i];
        if (ele == ' ' || ele == '\t')
        {
            continue;
        }

        else if (ele == '(')
        {
            push(ele);
        }
        else if (isalnum(ele))
        {
            p[j++] = ele;
        }
        else if (ele == ')')
        {
            while ((op = pop()) != '(')
            {
                p[j++] = ele;
            }
        }
        else
        {
            while (prec(stack[top]) > prec(ele))
            {
                p[j++] = pop();
            }
            push(ele);   
        }
    }

    while (top != -1)
    {
        p[j++] = pop();
    }

    p[j] = '\0';

    printf("%s", p);
}

int prec(char op)
{
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return -1;
}

void push(char item)
{
    if (top == MAX_STACK)
    {
        printf("Stack Overflow!");
        return;
    }

    stack[++top] = item;
}

char pop()
{
    if (top == -1)
    {
        return -1;
    }

    char item = stack[top--];
    return item;
}
