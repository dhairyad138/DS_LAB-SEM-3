#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


struct node* newNode(int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

struct node* copyList(struct node *head) {
    if (head == NULL) return NULL;

    struct node *copy1 = NULL, *copy2 = NULL;

    while (head != NULL) {
        int temp = newNode(head->data);

        if (copy1 == NULL) {   // first node
    
            copy2 = temp;
        } else {
            copy2->data = temp;
        }

        head = head->next;
    }
    return copy1;
}

void display(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL");
}

int main() {

    struct node *head = newNode(10);
    head->next = newNode(20);
    head->next->next = newNode(30);

    printf("Original List: ");
    display(head);

    struct node *copy = copyList(head);

    printf("Copied List: ");
    display(copy);

    return 0;
}