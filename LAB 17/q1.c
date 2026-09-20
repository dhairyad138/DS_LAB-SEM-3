#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueau(int x){
    if (rear == MAX -1)
    {
        printf("=== Overflow ===");
    }
    else{
        printf("Enter x : ");
        scanf("%d",&x);

        if (front = -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = x;

        printf("%d",x);
        
    }
}