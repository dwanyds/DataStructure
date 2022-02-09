#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
void push();
void pop();
void topper();
void display();
void exit();
int main()
{
    int ch;
    do
    {
        printf("\nenter the operation to be performed\n1.push\n2.pop\n3.topper\n4.display\n5.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:topper();
            break;
            case 4:display();
            break;
            case 5:exit();
            break;
        }

   }while(ch!=5);
}
void push()

{
    int x;
    printf("enter the data\n");
    scanf("%d",&x);
    if(top==n-1)
    {
        printf("stack overflow\n");
    }
    else
    {
      top=top+1;
      stack[top]=x;

    }
}
void pop()
{
    int data;
    if(top==-1)
    {
        printf("Stack underflow\n");

    }
    else
    {
    data =stack[top];
        top=top-1;
        printf("the deleted elemet is %d",data);
    }
}
void topper()
{
    int data;
    if(top==-1)
    {
        printf("stack empty\n");

    }
    else{
        data=stack[top];
        printf("the topp most elemts is %d",data);
    }
}
void display()
{
    int i;
    printf("the elements are\n");
    for(i=0;i<=top;i++)
    {
        printf("%d",stack[i]);
    }
}
