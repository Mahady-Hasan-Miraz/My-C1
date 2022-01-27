/*
    Mahady Hasan Miraz
    ID: 1935202037
*/

#include <stdio.h>
#define INF 9999
int Bellman_Ford(int G[20][20] , int V, int E, int edge[20][2])
{
    int dist[20],parent[20],i,u,v,k,S,count=1;

    for(i=0;i<V;i++)
    {
        dist[i] = INF;
        parent[i] = -1 ;

        printf("\nEnter source: ");
        scanf("%d",&S);
        printf("\n");

        dist[S-1]=0 ;

        for(i=0;i<V-1;i++)
        {
           for(k=0;k<E;k++)
           {
                u = edge[k][0];
                v = edge[k][1] ;

                if(dist[u]+G[u][v] < dist[v])
                {
                    dist[v] = dist[u] + G[u][v];
                    parent[v]=u ;
                }
            }
        }
        for(k=0;k<E;k++)
        {
            u = edge[k][0];
            v = edge[k][1] ;
            if(dist[u]+G[u][v] < dist[v])
            {
                count = 0 ;
            }
        }
    }
    if(count)
        for(i=0;i<V;i++)
        {
            printf("Path [ %d --> %d ] cost = %d\n",i+1,parent[i]+1,dist[i]);
        }
    return count;
}
int main()
{
    int V,edge[20][2],G[20][20],i,j,k=0;

    printf("Enter number of Vertices : ");
    scanf("%d",&V);
    printf("\nEnter graph in matrix form:\n\n");

    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
        {
            scanf("%d",&G[i][j]);
            if(G[i][j]!=0)
            {
                edge[k][0]=i;
                edge[k++][1]=j;
            }
        }
    }

    if(Bellman_Ford(G,V,k,edge))
        printf("\nNo negative weight cycle\n");
    else
        printf("\nNegative weight cycle exists\n");
    return 0;
}
