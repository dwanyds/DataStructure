#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root;
void create()
{
	int d,n;
	struct node *p,*q;
	printf("enter the number of elements");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("enter the data to be inserted");
		scanf("%d",&d);
		p=(struct node *)malloc(sizeof(struct node));
		p->data=d;
		p->left=NULL;
		p->right=NULL;
		
		if(i==0)
		{
			root=p;
		}
		else
		{
			q=root;
			while(1)
			{
				if(p->data<q->data)
				{
					if(q->left==NULL)
					{
						q->left=p;
						printf("%d",q->data);
						break;
					}
					else
					{
						q=q->left;
					}
		
				}
				else
				{
					if(q->right==NULL)
					{
						q->right=p;
						printf("%d",q->data);
						break;
					}
					else
					{
						q=q->right;
					}	
				}
			}

		}
	}
	
}

void inorder(struct node *root)
{
	struct node *r=root;
	if(r!=NULL)
	{	
		inorder(r->left);
		printf("%d ",r->data);
		inorder(r->right);
	}
	
}
void postorder(struct node *root)
{
	struct node *r=root;
	if(r!=NULL)
	{
	postorder(r->left);
	postorder(r->right);
	printf("%d ",r->data);
	}
	
}
void preorder(struct node *root)
{
	struct node *r=root;
	if(r!=NULL)
	{
	printf("%d ",r->data);
	preorder(r->left);
	preorder(r->right);
	}	
}
struct node *search(int s,struct node *r)
{
	if(s==r->data)
	{
		printf("\nelement found in binary tree");
		return r;
		
	}
	else
	{
		
		if(s<r->data)
		{
			search(s,r->left);
		}
		else
		{
			search(s,r->right);
		}	
	}
}
struct node *treemin()
{
	
	struct node *temp=root;
	while(temp->left !=NULL)
	{
		temp=temp->left;
	}
	
	return temp;
}
struct node *treemax()
{
	struct node *temp=root;
	int max;
	while(temp->right !=NULL)
	{
		temp=temp->right;
	}
	return temp;
}
struct node *deletenode(struct node *r,int s)
{
	struct node *temp;
	if(r==NULL)
	{
		return r;
	}
	if(s<r->data)
	{
		r->left=deletenode(r->left,s);
	}
	else if(s>r->data)
	{
		r->right=deletenode(r->right,s);
	}
	else
	{
		//one child or no child
		if(r->right==NULL)
		{
			temp=r->left;	
			free(r);
			return temp;
		}
		else if(r->left==NULL)
		{
			temp=r->right;	
			free(r);
			return temp;
			
		}
		temp=treemin(r->right);
		temp->data=r->data;

		r->right=deletenode(r->right,temp->data);

	}
	return r;
}
void inordersucc(int s,struct node *root)
{	
	struct node *temp, *p, *r;
	int is;
	p=search(s,root);
	
	if(p->right!=NULL)
	{
		temp=p->right;
		while(temp->left!=NULL)
		{
			temp=temp->left;
		}
		printf("\n Inorder successor is %d",temp->data);
	}
	else
	{
		r=root;
		while(r->data!=p->data)
		{
			if(p->data<r->data)
			{
				is=r->data;
				r=r->left;
			}
			else
			{
				r=r->right;
			}

		}
		printf("\n Inorder successor is %d",is);
	}
}



void main()
{

	int ch,d,s;
	struct node *re,*mi,*ma;
	while(1)
	{
		printf("\nMenu\n1.create\n2.inorder\n3.preorder\n4.postorder\n5.search\n6.minimum value \n7. maximum value \n8.inorder successor\n9.deletenode\n10.exit\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();
				break;
			case 2:
				inorder(root);
				break;
			case 3: preorder(root);
				break;
			case 4: postorder(root);
				break;
			case 5: printf("enter elemenet to be searched");
				scanf("%d",&s);
				re=search(s,root);
				break;
			case 6: mi=treemin();
				printf("\nleast value is %d ",mi->data);
				break;
			case 7: ma=treemax();
				printf("\nlargest value is %d ",ma->data);
				break;
			case 8: printf("enter the element whose inorder successor needs to be searched");
				scanf("%d",&s);
				inordersucc(s,root);
				break;
			case 9:printf("enter elemenet to be deleted");
				scanf("%d",&d);
				re=deletenode(root,d);
				inorder(re);
				break;

			case 10: exit(0);
		}
	}

}