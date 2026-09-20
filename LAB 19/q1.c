
#include <stdio.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};

struct node*creatnode(int x){
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->left= NULL;
    newnode->right = NULL;

    return newnode; 
}

struct node*insertnode(struct node*root , int x){
    if (root == NULL)
    {
        return creatnode;
    }
    if (x < root->data)
    {
        root->left = insertnode(root->left,x);
    }
    else if (x > root->right)
    {
        root->right = insertnode(root->right,x);
    }
    else{
        printf("Not found/Error");
    }

    return insertnode;
    
}

void inorder(struct node*root){

    if (root != NULL)
    {
        inorder(root->left);
        printf("%d",&root->data);
        inorder(root->right);
    }
    return inorder;
    
}

void preorder(struct node*root){

    if (root != NULL)
    {
        inorder(root->right);
        printf("%d",&root->data);
        inorder(root->left);

    }
    return preorder;
    
}