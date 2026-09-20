#include <stdio.h>
#include <stdbool.h>

#define n 5
int top = -1;
int s[n];

void push(int x){
    if (top >= n-1){
        printf("stack overflow");
        return;
    }
    s[++top] = x;
}

bool isfull(){
    return top >= n-1;
}

int pop(){
    if (top == -1){
        printf("stack underflow");
        return -1;
    }
    int val = s[top--];
    return val;
}

bool isem(){
    return top == -1;
}

void display(){
    if (top == -1){
        printf("stack underflow");
        return;
    }
    for (int i = top; i >= 0; i--){
        printf("%d ", s[i]);
    }
    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); 

    printf("popped element: %d", pop());

    display();

    if (isem()){
        printf("Stack is empty");
    }

    return 0;
}
