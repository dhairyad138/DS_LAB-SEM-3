#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
}

char pop()
{
    char ch;

    ch = stack[top];
    top--;

    return ch;
}

int main()
{
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        push(str[i]);
    }

    for (i = 0; i < len; i++)
    {
        if (str[i] != pop())
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("String is Palindrome");
    else
        printf("String is not Palindrome");

    return 0;
}