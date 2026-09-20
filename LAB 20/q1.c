#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *creatnode(int x){

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

int tree(struct node* root1,struct node* root2){ 

    if (root1==NULL && root2 == NULL)
    {
        return 1;
    }
    if (root1==NULL ||  root2 == NULL)
    {
        return 0;
    }

    return (root1->data && root2->data) && tree(root1->left , root2->left) && tree(root1->right , root2->right);
    
}

int main(){

    struct node*root1 = creatnode(10);
    root1->left = creatnode(20);
    root1->right = creatnode(40);

    struct node*root2 = creatnode(10);
    root1->left = creatnode(20);
    root1->right = creatnode(40);

    if (tree(root1,root2))
    {
        printf("Thear are same tree");
    }
    else{
        printf("Thear are not same tree");

    }
    
}