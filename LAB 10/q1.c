\#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *first = NULL;

void insert(int x) {
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;

    if (first == NULL) {
        first = newnode;
    } 
    else {
        temp = first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void shortlist() {
    struct node *i, *j;
    int temp;
    
    for (i = first; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void display() {
    struct node *temp = first;
    while (temp != NULL) {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

int main() {

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);
        insert(x);
    }
    shortlist();
    display();
    return 0;
}