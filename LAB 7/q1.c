#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main(){
    struct node *head = NULL , *temp , *newnode;
    int i;

    for ( i = 1; i <= 4; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data for node [%d] : ",i);
        scanf("%d",&newnode ->data);

        newnode ->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("\n");

    printf("=== Link node === \n");
    temp = head;

    while (temp != NULL)
    {
        printf(" %d -> ",temp ->data);
        temp = temp->next;
    }
}