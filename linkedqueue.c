#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0,*rear=0,*newnode,*temp;
void enqueue();
void dequeue();
void display();
void exit();
void main()
{
    int ch;
    do{
       printf("\nmenu\n1.enqueue\n2.dequeue\n3.display\n4.Exit\nenter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:enqueue();
        break;
        case 2:dequeue();
        break;
        case 3:display();
        break; 
        case 4:exit(0);
        break;
    }
       }while(ch!=4);
    
}
void enqueue()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(front==0 && rear==0)
    {
        front=rear=newnode;

    }
    else{
           rear->next=newnode;
        rear=newnode;  

    }

}
void dequeue()
{
    temp=front;
if(front==0 && rear==0)
{
printf("underflow\n");
}
else
{ temp=front;
    front=front->next;
     printf("\nitem delted\n");
    free(temp);
   
}

}
void display()
{
    temp=front;
   while(temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
     

    
}
