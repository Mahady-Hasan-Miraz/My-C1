/*
    Mahady Hasan Miraz
    ID: 1935202037
*/

#include<stdio.h>

int parent[100],cost[100][100],min,mincost=0,a,b,i,j,k,u,v,n,ne=1;

int get(int i)
{
	while(parent[i])
	i=parent[i];
	return i;
}
int add(int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
}
void main()
{

	printf("\nEnter the no. of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the cost adjacency matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=100;
		}
	}
	printf("The edges of Minimum Cost Spanning Tree are\n");
	while(ne < n)
	{
		for(i=1,min=100;i<=n;i++)
		{
			for(j=1;j <= n;j++)
			{
				if(cost[i][j] < min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=get(u);
		v=get(v);
		if(add(u,v))
		{
			printf("Edge (%d --- %d) =%d\n",a,b,min);
			mincost +=min;
            ne++;
		}
		cost[a][b]=cost[b][a]=100;
	}
	printf("\nMinimum cost = %d\n",mincost);
}