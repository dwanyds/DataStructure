#include<stdio.h>
#include<conio.h>

void main()
{
    int a1[10],a2[10],i,j,k=0,a3[20],n,m;
    printf("entre the size of array 1 ");
    scanf("%d",&m);
    printf("enter the elements of a1\n");
    for(i=0;i<m;i++)
    {
       scanf("%d",&a1[i]); 
    }    
     printf("entre the size of array 2 ");
    scanf("%d",&n);
    printf("enter the second a2\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a2[j]);
    }
    i=0;
    j=0;
    while(i<m && j<n)
    {
        if(a1[i]<a2[j])
        {
                a3[k]=a1[i];
                i++;     
        }
        else{
                a3[k]=a2[j];
                 j++;
        } 
        k++;
    }
    while(i<m)
    {
           a3[k]=a1[i];
            i++;
            k++;
    }
    while(j<n)
    {
            a3[k]=a2[j];
             j++;
             k++;
    }
    printf("the merged sorted array is ");
    for(i=0;i<m+n;i++)
    {
        printf("%d",a3[i]);
    }
}