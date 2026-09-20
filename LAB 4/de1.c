#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char name[10];
    struct Node *prev, *next;
} Node;

Node *head = NULL, *tail = NULL;

// Add regular customer at end
void addCustomer(char *name) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->next = NULL;
    newNode->prev = tail;
    if (tail) tail->next = newNode;
    else head = newNode;
    tail = newNode;
}

// Add VIP customer at front
void addVIP(char *name) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->prev = NULL;
    newNode->next = head;
    if (head) head->prev = newNode;
    else tail = newNode;
    head = newNode;
}

// Cancel booking by name
void cancelCustomer(char *name) {
    Node *temp = head;
    while (temp) {
        if (strcmp(temp->name, name) == 0) {
            if (temp->prev) temp->prev->next = temp->next;
            else head = temp->next;
            if (temp->next) temp->next->prev = temp->prev;
            else tail = temp->prev;
            free(temp);
            return;
        }
        temp = temp->next;
    }
}

// Display booking list
void display() {
    Node *temp = head;
    printf("Booking List: ");
    while (temp) {
        printf("%s ", temp->name);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    addCustomer("A");
    addCustomer("B");
    addCustomer("C");
    addVIP("D");
    cancelCustomer("B");
    display(); // Output: D A C
    return 0;
}
