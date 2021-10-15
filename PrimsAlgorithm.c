/* 
	Mahady Hasan Miraz
	ID: 1935202037  
*/

#include<stdio.h>
#define INF 10000
int main()
{
    int cost[100][100],visited[100]={0},i,j,n,edge=1,min,a,b,min_cost=0;
    printf("Enter number of nodes : ");
    scanf("%d",&n);
    printf("Enter cost adjacency matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
              cost[i][j]=INF;
        }
    }
    visited[1]=1;
    while(edge<n)
    {
        min=INF;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    if(visited[i]!=0)
                    {
                        min=cost[i][j];
                        a=i;
                        b=j;
                    }
                }
            }
        }
        if(visited[b]==0)
        {
            printf("\n%d to %d  cost=%d",a,b,min);
            min_cost=min_cost+min;
            edge++;
        }
        visited[b]=1;
        cost[a][b]=cost[b][a]=INF; 
    }
    printf("\nminimum weight is %d\n",min_cost);
    return 0;
}