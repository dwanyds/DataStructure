#include<stdio.h>
void unionof();
void intersection();
void difference();
void exit();
int a[50],b[50],c[50],bita[50],bitb[50],an,bn,cn,i,j;
void main()
{
int ch;
printf("entre the size of the universal set\n");
scanf("%d",&an);
printf("enter %d elements \n",an);
for(i=0;i<an;i++)
{
scanf("%d",&a[i]);
}
printf("enter the size of set A\n");
scanf("%d",&bn);
printf("enter %d elements \n",bn);
for(i=0;i<bn;i++)
{
scanf("%d",&b[i]);
}
printf("enter the size of set B\n");
scanf("%d",&cn);
printf("enter %d elements \n",cn);
for(i=0;i<cn;i++)
{
scanf("%d",&c[i]);
}

        for(i=0;i<an;i++)
        {
        bita[i]=0;
        for(j=0;j<bn;j++)
        {
        if(a[i]==b[j])
        {
        bita[i]=1;
        }
        }
        }

        for(i=0;i<an;i++)
        {
        bitb[i]=0;
        for(j=0;j<cn;j++)
        {
        if(a[i]==c[j])
        {
        bitb[i]=1;
        }
        }
        }
do
{
printf("\nenter your choich\n1.Union \n2.intersection\n3.difference\n4.Exit\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:unionof();break;
    case 2:intersection();break;
    case 3:difference();break;
    case 4:exit(0);break;
}
}while(ch!=4);
}

void unionof()
{
printf("\nunion\t");
for(i=0;i<an;i++)
{
printf("%d",bita[i]|bitb[i]);
}
}
void intersection()
{
   printf("Intersection\t");
for(i=0;i<an;i++)
{
printf("%d",bita[i]&bitb[i]);

} 
}
void difference()
{
 printf("\nDifference\t");
for(i=0;i<an;i++)
{
printf("%d",bita[i]&(!bitb[i]));
}
}

