#include<stdio.h>
#define n 5
int a[n],i;
void largest();
void small();
void reverse();
void sum();
void mean();
void exit();
void main()
{
    int ch;
    printf("enter the elements of th arrray\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {

    
    printf("enter the operation to be performed\n1:largest\n2:small\n3:reverse\n4:sum\n5:mean\n6.exit");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:largest();
        break;
        case 2:small();
        break;
        case 3:reverse();
        break;
        case 4:sum();
        break;
        case 5:mean();
        break;
        case 6:exit();
        default:printf("wrong choice\n");


    }
    }while(ch!=6);
}
void largest()
{
    int big=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
        }
    }
    printf("largest is %d \n",big);
}
void small()
{
    int smal=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<smal)
        {
            smal=a[i];
        }
    }
    printf("smallest element is %d\n",smal);

}
void reverse()
{
    printf("the reverserd array is\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
void sum()
{
   int s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];

    }
    printf("sum is %d",s);
}
void mean()
{
    float avg;
    int s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];

    }
    avg=s/n;
    printf("average is %f ",avg);
}
