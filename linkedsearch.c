#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;
void create();
void traverse();
void search();
void count();
void main()
{
    int ch;
    do{
        printf("\n menu\n1.create\n2.traverse\n3.search\n4.count\nenter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
            break;
            case 2:traverse();
            break;
            case 3:search();
            break;
            case 4:count();
            break;
            default:
            printf("wrong choice\n");

        }
    }while(ch!=5);  
}
void create()
{
   int c=1;
    while(c!=0)
    {
         newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue(0/1)");
        scanf("%d",&c);

    }

}
void traverse()
{
temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;

}
}
void search()
{
    temp=head;
        int val;
        printf("enter the value to be searched\n");
        scanf("%d",&val);
        int i=0;
        while(temp!=0)
        {
        if(val==temp->data)
            {
                printf("the value %d found at %d",val,i);

            }   
            i++;
            temp=temp->next;
        }

}
void count()
{
    int count=0;
    temp=head;
    while(temp!=0)
    {
        temp=temp->next;
        count++;
    }
    printf("%d is the count",count);

}