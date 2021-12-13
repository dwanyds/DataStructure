#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left,*right;
};

struct node *createtree()
{
int item;
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the data(insert 0 if nodata to be inserted)\n");
scanf("%d",&item);

if(item==0)
{
return NULL;
}
temp->data=item;
printf("enter the left child of the root node %d\n",temp->data);
temp->left=createtree();
printf("enter the right child of the root node %d\n",temp->data);
temp->right=createtree();
return temp;
}

void preorder(struct node *t)
{
if(t!=NULL)
{
printf("%d",t->data);
preorder(t->left);
preorder(t->right);
}
}
void inorder(struct node *t)
{
if(t!=NULL)
{
inorder(t->left);
printf("%d",t->data);
inorder(t->right);
}
}
void postorder(struct node *t)
{
if(t!=NULL)
{

postorder(t->left);
postorder(t->right);
printf("%d",t->data);
}
}


void main()
{
struct node *root;
root=createtree();
printf("preorder:\t");
preorder(root);
printf("\ninorder:\t");
inorder(root);
printf("\npostorder:\t");
postorder(root);
}


