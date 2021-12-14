#include<stdio.h>
#include<conio.h>
#define n 5
int queue[n];
int front=-1,rear=-1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main()
{
    int option,val;
    do
    {
        printf("\n**main menu\n");
        printf("\n1.insert an element \n");
        printf("\n2.delete an element\n");
        printf("\n3.peek\n");
        printf("\n4.display queue");
        printf("\n5.exit");
        printf("\n enter option");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
            insert();
            break;
            case 2:
            val=delete_element();
            if(val!=-1)
            printf("\nthe number deleted is %d",val);
            break;
            case 3:
            val=peek();
            if(val!=-1)
            printf("\nthe first value in queue is %d",val);
            break;
            case 4:
            display();
            break;
            default:
            printf("wrong input");

        }

    }
    while(option!=5);
    getch();
    return 0;
}
void insert()
{
    int num;
    printf("enter the number to be inserted in the queue ");
    scanf("%d",&num);
    if(rear==n-1)
    {
        printf("\n overflow");
        return;
    }
        else if(front==-1 && rear==-1)
        front=rear=0;
        else
        rear++;
        queue[rear]=num;
    
    
}
int delete_element()
{
    int val;
    if(front==-1||front>rear)
    {
        printf("\n underflow");
        return -1;

    }
    else
    {
        val=queue[front];
        front++;
        if(front>rear)
        front=rear=-1;
        return val;
    
    }
}
int peek()
{
    if(front==-1||front>rear)
    {
        printf("\nqueue empty");
        return-1;

    }
    
    else
    {
        return queue[front];
    }
}
void display()
{
    int i;
    printf("\n");
    if(front==-1||front>rear)
    printf("\n queue empty\n");
    else{
        for(i=front;i<=rear;i++)
        printf("\t %d",queue[i]);
    }
}