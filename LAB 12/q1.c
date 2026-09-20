#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insertFront()
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL)
    {
        head->prev = newnode;
    }

    head = newnode;
}

void deletePosition()
{
    struct node *temp;
    int pos, i;

    if (head == NULL)
    {
        printf("List is empty");
        return;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    temp = head;

    for (i = 1; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position");
        return;
    }

    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    else
    {
        head = temp->next;
    }

    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    free(temp);

    printf("Node deleted");
}

void display()
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("List is empty");
        return;
    }

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("NULL");
}

int main()
{
    int choice;

    do
    {
        printf("1. Insert at Front");
        printf("2. Delete from Position");
        printf("3. Display");
        printf("4. Exit");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insertFront();
                break;

            case 2:
                deletePosition();
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