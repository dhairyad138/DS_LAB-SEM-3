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

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == 'a')
        {
            push('a');
        }
        else if (str[i] == 'b')
        {
            if (top == -1)
            {
                flag = 0;
                break;
            }

            pop();
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (top != -1)
        flag = 0;

    if (flag == 1 && len > 1)
        printf("String is valid");
    else
        printf("String is invalid");

    return 0;
}