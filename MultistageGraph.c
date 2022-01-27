/*
    Mahady Hasan Miraz
    ID : 1935202037
*/
#include<stdio.h>
#define MAX 20
void mincost(int c[MAX][MAX],int n, int stage)
{
    int min,cost[MAX],dist[MAX];
    n=n-1;
    cost[n]=0;
    for(int i= n-1; i>=0; i--)
    {
        min=9999;
        for(int k=i+1; k<=n; k++)
        {
            if(c[i][k]!=0 && (c[i][k] + cost[k])< min)
            {
                min = c[i][k] + cost[k];
                dist[i]=k;
            }
        }
        cost[i]=min;
    }
        printf("Minimum cost : %d\n",min);
}
int main()
{
    int c[MAX][MAX],n,s;
    printf("Enter no. of stages: ");
    scanf("%d",&s);
    printf("Enter no. of vertices[Less than 20]: ");
    scanf("%d",&n);

    printf("\nEnter the adjacency matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&c[i][j]);
        }

    }
    mincost(c,n,s);
}
// c[8][8]
// 0 2 1 3 0 0 0 0
// 0 0 0 0 2 3 0 0
// 0 0 0 0 6 7 0 0
// 0 0 0 0 6 8 4 0
// 0 0 0 0 0 0 0 6
// 0 0 0 0 0 0 0 4
// 0 0 0 0 0 0 0 5
// 0 0 0 0 0 0 0 0
// or 
// 0 1 2 5 0 0 0 0
// 0 0 0 0 4 11 0 0
// 0 0 0 0 9 5 16 0
// 0 0 0 0 0 0 2 0
// 0 0 0 0 0 0 0 18
// 0 0 0 0 0 0 0 13
// 0 0 0 0 0 0 0 2
// 0 0 0 0 0 0 0 0