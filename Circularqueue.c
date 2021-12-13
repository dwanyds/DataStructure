#include<stdio.h>
#define n 5
int queue[n];
int front=-1,rear=-1;
void enqueue();
void dequeue();
void peek();
void traverse();
void exit();
void main()
{
    int ch;
    do
    {
        printf("\n**main menu\n");
        printf("\n1.insert an element ");
        printf("\n2.delete an element");
        printf("\n3.peek\n");
        printf("\n4.display queue");
        printf("\n5.exit");
        printf("\n enter option");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:peek();
            break;
            case 4:traverse();
            break;
            case 5:exit(0);
            break;
            default:
            printf("wrong input");

        }

    }
    while(ch!=5);
}
void enqueue()
{
int val;
    if((front==0 && rear==n-1)||rear==front-1)
    {
        printf("queue is full\n");

    }

    else {
            if(front==-1 && rear==-1)
            {
                front=rear=0;

            }
            else if(front !=0 && rear==n-1)
            {
                rear=0;
            }
            else
            {
                rear=rear+1;

            }
            printf("entre the data\n");
            scanf("%d",&val);
            queue[rear]=val;

         }
} 
void dequeue()
{
    if(front==-1)
    {
        printf("queue is empty\n");
    }
    else
    { 
        if(front==rear)
        {

            front=rear=-1;
        }
        else if(front==n-1)
        {

            front=0;
        }else
        { 
            front=front+1;
        }
    }
}  
void peek()
{
    if(front==-1)
    {
        printf("queue is empty\n");

    }else
    {
        printf("the peek elemment is %d ",queue[front]);
    }


}


void traverse()
{ 
int i;
printf("the elements are\n");
if(front==-1 && rear==-1)
{
printf("queue is empty");
}
else if(front<=rear)
{
for(i=front;i<=rear;i++)
{
printf("%d\t",queue[i]);
}
}
else
{
for(i=front;i<=n-1;i++)
{
printf("%d\t",queue[i]);
}
for(int j=0;j<rear+1;j++)
{
printf("%d\t",queue[j]);
}
}
}

 
