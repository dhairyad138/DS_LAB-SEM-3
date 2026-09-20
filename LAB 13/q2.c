#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push()
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = top;
    top = newnode;

    printf("Element pushed");
}

void pop()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack Underflow");
        return;
    }

    temp = top;
    printf("Deleted element = %d", temp->data);

    top = top->next;
    free(temp);
}

void display()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack is empty");
        return;
    }

    temp = top;

    printf("Stack:");

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice;

    do
    {
        printf("1. Push");
        printf("2. Pop");
        printf("3. Display");
        printf("4. Exit");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("ended");
                break;

            default:
                printf("Invalid choice");
        }

    } while (choice != 4);

    return 0;
}