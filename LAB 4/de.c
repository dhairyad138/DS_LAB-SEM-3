#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
    
};

struct node *first = NULL;

void insertAtFirst(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = first;
    first = newNode;    

}