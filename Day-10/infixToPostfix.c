#include <stdio.h>
#include <string.h>

int prec(char);
void push(char);
char pop();

#define MAX_STACK 20

char stack[MAX_STACK];
int top = -1;

void main()
{
    char str[] = {"A+C*D"};
    char p[20];
    char op;

    // char op = 'c';
    // strncat(p, &op, 1);
    // printf("output --> %s ", p);

    for (int i = 0; i < strlen(str); i++)
    {
        char ele = str[i];
        if (ele == ' ' || ele == '\t')
        {
             continue;
        }
        
        else if (ele == '(')
        {
            push('(');
        }
        else if ((ele >= 'a' && ele <= 'z') || (ele >= 'A' && ele <= 'Z'))
        {
            strncat(p, &ele, 1);
        }
        else if (ele == ')')
        {
            while ( ((op = pop()) != '(') && top != -1)
            {
                strncat(p, &op, 1);
                top--;
            }
            pop('(');
        }
        else
        {
            if (top == -1)
            {
                push(ele);
            }
            else
            {
                if (prec(top) < prec(ele))
                {
                    push(ele);
                }
                else
                {
                    while (prec(top) > prec(ele))
                    {
                        char item = pop();
                        strncat(p, &item, 1);
                    }
                    push(ele);
                }
            }
        }
        for (int i = 0; i < sizeof(stack); i++)
        {
            printf("%2c", stack[i]);
        }

    }

    // while (strlen(stack) != 0)
    // {
    //     strncat(p, &op, 1);
    //     top -=1;
    // }
    printf("%d\n", strlen(stack));
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

    top++;
    stack[top] = item;
}

char pop()
{
    if (top == -1)
    {
        return -1;
    }

    char item = stack[top];
    top -= 1;

    return item;
}