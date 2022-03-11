#include<stdio.h>
#include<stdlib.h>
void dfs(int);
int g[10][10],v,visited[10],n;
void main()
{
int i,j;
	printf("enter the number of vertices\n");
	scanf("%d",&n);

	printf("enter the adjacensy matrix\n");
	for(i=0;i<n;i++)
	{
	     for(j=0;j<n;j++)
	       {
		printf("the edge exist between %d-%d:",i,j);
		scanf("%d",&g[i][j]);
	      }
	}
	for(i=0;i<n;i++)
	{
	   g[i][i]=0;
	}
	for(i=0;i<n;i++)
	{
	visited[i]=0;
	}
	dfs(0);
	}
   		void dfs(int i)
		{
		int j;
		printf("%d\t",i);
		visited[i]=1;
		for(j=1;j<=n;j++)
		{
		if(!visited[j]&&g[i][j])
		{
		dfs(j);
		}
		}
		}
