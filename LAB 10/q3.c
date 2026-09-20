#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

void insertEnd(int data)
{
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
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

void insertGCD()
{
    struct node *temp, *newnode;
    int value;

    temp = head;

    while (temp != NULL && temp->next != NULL)
    {
        value = gcd(temp->data, temp->next->data);

        newnode = (struct node *)malloc(sizeof(struct node));

        newnode->data = value;
        newnode->next = temp->next;
        temp->next = newnode;

        temp = newnode->next;
    }
}

void display()
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
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

    insertGCD();

    printf("After inserting GCD:");
    display();

    return 0;
}