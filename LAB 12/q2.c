#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int data)
{
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}

void deleteAlternate()
{
    struct node *temp, *nextnode;

    temp = head;

    while (temp != NULL && temp->next != NULL)
    {
        nextnode = temp->next;

        temp->next = nextnode->next;

        if (nextnode->next != NULL)
        {

            next->prev = temp;
        }
        
        }

        free(nextnode);

        temp = temp->next;
    }

void display()
{
    struct node *temp;

    temp = head;

    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }

    printf("NULL");
}

int main()
{
    int n, i, data;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter data: ");
        scanf("%d", &data);
        insertEnd(data);
    }

    printf("Original List:");
    display();

    deleteAlternate();

    printf("After deleting nodes:");
    display();

    return 0;
}