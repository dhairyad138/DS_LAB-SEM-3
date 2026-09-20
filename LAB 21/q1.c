<stdio.h> #include <stdlib.h>

struct Node { int data; struct Node left,right; };

struct Node* create(int x) { struct Node *p=malloc(sizeof(struct Node));
p->data=x; p->left=p->right=NULL;
return p; }

int find(int a[],int start,int end,int x) { int i;
for(i=start;i<=end;i++) if(a[i]==x) return i;
return -1; }

struct Node* build(int pre[],int post[],int preIndex, int l,int r,int n)
{ struct Node root; int pos;
if(*preIndex>=n || l>r)
        return NULL;

    root=create(pre[*preIndex]);
    (*preIndex)++;
if(l==r)
        return root;

    pos=find(post,l,r,pre[*preIndex]);
if(pos!=-1) {
        root->left=build(pre,post,preIndex,l,pos,n);
        root->right=build(pre,post,preIndex,pos+1,r-1,n);
    }

    return root;

}

void inorder(struct Node *root) { if(root!=NULL) { inorder(root->left);
printf("%d",root->data); inorder(root->right); } }

int main() { int pre[100],post[100],n,i,index=0; struct Node *root;
printf("Enter n: ");
scanf("%d",&n);
printf("Enter preorder: ");
for(i=0;i<n;i++) scanf("%d",&pre[i]);
printf("Enter postorder: ");
for(i=0;i<n;i++) scanf("%d",&post[i]);

    root=build(pre,post,&index,0,n-1,n);
printf("Inorder: ");
    inorder(root);
return 0;

}