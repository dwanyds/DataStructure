#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=0,*top,*newnode;
void push();
void pop();
void display();
void peek();

int main()
{
 int ch;
   do
    {
        printf("\n Menu\n1.push\n2.pop\n3.display\n4.peek\n5.exit\nEnter your choice\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
             case 4:peek();
            break;
            case 5:exit(0);
            break;
            default:
            printf("wrong choice");
        }
        
    }while(ch!=5);
}
void push()
{
    int c=1;
    while(c!=0)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&newnode->data);
    newnode->next=0;
     if(head==0)
        {
            head=newnode;
            
        }
        else
        
        newnode->next=head;
        head=newnode;

        printf("do you want to continue(0/1))");
        scanf("%d",&c); 
  
    }  
}

void pop()
{
    top=head;
if(top==0)
{
printf("underflow\n");
}
else
{
    head=head->next;
    top->next=0;
    free(top);
    printf("\nitem delted\n");
}

}
void display()
{
   top=head;
   printf("the stack elements are\n");
while(top!=0)
{
    printf("%d\n",top->data);
    top=top->next;
} 
}
void peek()
{
    top=head;
    if(top==0)
    {
        printf("stack underflow\n");
    }
    else
printf("%d is the peek",top->data);
}