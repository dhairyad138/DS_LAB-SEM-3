#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertFront()
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;
}

void display()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty");
        return;
    }

    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void deleteFirst()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);

    printf("First node deleted");
}

void insertEnd()
{
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

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
}

void deleteLast()
{
    struct node *temp, *prev;

    if (head == NULL)
    {
        printf("List is empty");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);

    printf("Last node deleted");
}

void deletePosition()
{
    struct node *temp, *prev;
    int pos, i;

    if (head == NULL)
    {
        printf("List is empty");
        return;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        deleteFirst();
        return;
    }

    temp = head;

    for (i = 1; i < pos && temp != NULL; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position");
        return;
    }

    prev->next = temp->next;
    free(temp);

    printf("Node deleted");
}

void countNodes()
{
    struct node *temp;
    int count = 0;

    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    printf("Number of nodes = %d", count);
}

int main()
{
    int choice;

    do
    {
        printf("1. Insert at Front");
        printf("2. Display");
        printf("3. Delete First");
        printf("4. Insert at End");
        printf("5. Delete Last");
        printf("6. Delete from Position");
        printf("7. Count Nodes");
        printf("8. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insertFront();
                break;

            case 2:
                display();
                break;

            case 3:
                deleteFirst();
                break;

            case 4:
                insertEnd();
                break;

            case 5:
                deleteLast();
                break;

            case 6:
                deletePosition();
                break;

            case 7:
                countNodes();
                break;

            case 8:
                printf("Program ended");
                break;

            default:
                printf("Invalid choice");
        }

    } while (choice != 8);

    return 0;
}