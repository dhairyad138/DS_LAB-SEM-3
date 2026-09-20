#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};

void main() {
    struct Node *head;


    head = (struct Node*)malloc(sizeof(struct Node));


    printf("Enter data for node: ");
    scanf("%d", &head->data);


    head->next = NULL;

    printf("Node Data: %d\n", head->data);
}