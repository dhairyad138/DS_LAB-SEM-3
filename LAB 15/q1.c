#include <stdio.h>

char stack[100];

int top = -1;

void push(char c){
    stack[++top] = c;
}

char pop(){
    return stack[top--];
}

int isimplimant(char str[]){

    for (int i = 0; str[i] != '\0'; i++)
    {

        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }
        else{
            if (top == -1)
            return 0;
            
            char last = pop();

            if ((ch == ')' && last != '(') || (ch == '{' && last != '}') || (ch == '[' && last != ']'))
            {
                return 0;
            }
            
        }
    }

    return (top == -1);
    
}

int main(){
    char str[100];

    printf("enter strang ");
    scanf("%s", str);

    if (isimplimant(str))
    {
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}