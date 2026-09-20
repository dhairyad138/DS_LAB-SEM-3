#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *head = NULL;

void insertFront(int x)
{
    struct node *newNode, *temp;

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;

    if (head == NULL)
    {
        head = newNode;
        newNode->link = head;
    }
    else
    {
        temp = head;
        while (temp->link != head)
            temp = temp->link;

        newNode->link = head;
        temp->link = newNode;
        head = newNode;
    }

    printf("Node inserted at front.");
}

void insertEnd(int y)
{
    struct node *newNode, *temp;

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = y;

    if (head == NULL)
    {
        head = newNode;
        newNode->link = head;
    }
    else
    {
        temp = head;
        while (temp->link != head)
            temp = temp->link;

        temp->link = newNode;
        newNode->link = head;
    }

    printf("Node inserted at end.");
}

void deletePosition(int ans)
{
    struct node *temp, *prev, *last;
    int i;

    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }

    if (ans == 1)
    {
        if (head->link == head)
        {
            free(head);
            head = NULL;
        }
        else
        {
            last = head;
            while (last->link != head)
                last = last->link;

            temp = head;
            head = head->link;
            last->link = head;
            free(temp);
        }
        printf("Node deleted.");
        return;
    }

    temp = head;
    prev = NULL;

    for (i = 1; i < ans; i++)
    {
        prev = temp;
        temp = temp->link;

        if (temp == head)
        {
            printf("Invalid Position.");
            return;
        }
    }

    prev->link = temp->link;
    free(temp);

    printf("Node deleted.");
}

void display()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }

    temp = head;

    printf("Circular Linked List: ");
    do
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    } while (temp != head);

    printf("Head");
}