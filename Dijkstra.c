
#include <limits.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int minDistance(int dist[], bool sptSet[], int V)
{

    int min = INT_MAX, min_index;
 
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
 
    return min_index;
}

void dijkstra(int graph[MAX][MAX], int src, int V)
{
    int dist[V];
    bool sptSet[V]; 

    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
    dist[src] = 0;
 
    for (int count = 0; count < V - 1; count++) {

        int u = minDistance(dist, sptSet, V);
        sptSet[u] = true;
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
    printf("\nVertex \t Distance from %d\n",src);
    for (int i = 0; i < V; i++)
        printf("%d \t %d\n", i+1, dist[i]);

}
int main()
{
   
    int graph[MAX][MAX],u,V,i,j;
    printf("Enter no. of vertices: ");
    scanf("%d",&V);
    printf("\nEnter the adjacency matrix:\n\n");
    for(i=0;i<V;i++)
        for(j=0;j<V;j++)
            scanf("%d",&graph[i][j]);
    printf("\nEnter the starting node: ");
    scanf("%d",&u);
 
    dijkstra(graph, u, V);
 
    return 0;
}