#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode,*prev,*ptr;
void new();
void insertb();
void insertpos();
void inserte();
void deleteb();
void deletepos();
void deletel();
void traverse();
int main()
{
    int ch;
    do
    {
        printf("\n Menu\n1.new\n2.insert at biginning\n3.insert after a node\n4.insert at end\n5.delete from beginning\n6.delete after a node\n7.delete at end\n8.traverse\nenter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:new();
            break;
            case 2:insertb();
            break;
            case 3:insertpos();
            break;
            case 4:inserte();
            break;
            case 5:deleteb();
            break;
            case 6:deletepos();
            break;
            case 7:deletel();
            break;
            case 8:traverse();
            break;
            default:
            printf("wrong choice");
        }

    }while(ch!=9);
}
void new(){
	int c=1;
	while(c==1){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;	
		}
		printf("Do you want to continue(0/1)");
		scanf("%d",&c);	
	}

}     
void insertb()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&newnode->data);
     newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;

}
void insertpos()
{
    int pos;
    printf("enter the position");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data ");
     scanf("%d",&newnode->data);
     temp=head;
     while(temp->data!=pos)
     {
         temp=temp->next;
         }
         newnode->next=temp->next;
         newnode->prev=temp;
         temp->next=newnode;
         temp->next->prev=newnode;
}
void inserte()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("entre the data");
scanf("%d",&newnode->data);
newnode->next=NULL;
temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=newnode;
newnode->prev=temp;

}
void deleteb()
{
    temp=head;
    if(temp==NULL)
    {
        printf("underflow\n");
    }
    else
    head=head->next;
    head->prev=NULL;
    free(temp);
}

void deletepos()
{
    int val;
temp=head;
if(head==NULL)
{
    printf("underflow\n");

}
printf("Enter the value after which data to be deleted");	
	scanf("%d",&val);
	while(temp->data!=val){
		temp=temp->next;
	}
	ptr=temp;
	temp=temp->next;
	ptr->next=temp->next;
	temp->next->prev=ptr;
	free(temp);
}

void deletel()
{
temp=head;
if(head==NULL)
{
    printf("underflow\n");
}
while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->prev->next=NULL;
free(temp);
}




void traverse()
{
temp=head;
printf("the elements are\n");
while(temp!=NULL)
{
    printf("%d",temp->data);
    temp=temp->next;
}
}