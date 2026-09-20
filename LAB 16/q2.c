#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int stack[100];
int top = -1;

void push(int value)
{
    top++;
    stack[top] = value;
}

int pop()
{
    int value;

    value = stack[top];
    top--;

    return value;
}

int main()
{
    char prefix[100];
    int i, a, b, result;

    printf("Enter prefix expression: ");
    scanf("%s", prefix);

    for (i = strlen(prefix) - 1; i >= 0; i--)
    {
        if (isdigit(prefix[i]))
        {
            push(prefix[i] - '0');
        }
        else
        {
            a = pop();
            b = pop();

            switch (prefix[i])
            {
                case '+':
                    result = a + b;
                    break;

                case '-':
                    result = a - b;
                    break;

                case '*':
                    result = a * b;
                    break;

                case '/':
                    result = a / b;
                    break;

                case '^':
                    result = pow(a, b);
                    break;
            }

            push(result);
        }
    }

    printf("Result = %d", pop());

    return 0;
}