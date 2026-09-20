#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *first1 = NULL;
struct node *first2 = NULL;

void creatfirst1(int x) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = NULL;
    first1 = newnode;   
}

void creatfirst2(int y) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = y;
    newnode->link = NULL;
    first2 = newnode;  
}

void insertfirst1(int x) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = first1;
    first1 = newnode;
}

void insertfirst2(int y) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = y;
    newnode->link = first2;
    first2 = newnode;
}

void comper(struct node *first1, struct node *first2) {
    while (first1 != NULL && first2 != NULL) {
        if (first1->data != first2->data) {
            printf("Not Same");
            return;
        }
        first1 = first1->link;
        first2 = first2->link;
    }

    if (first1 == NULL && first2 == NULL) {
        printf("Same");
    } else {
        printf("Not Same");
    }
}