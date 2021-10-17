/* Mahady Hasan Miraz
  ID: 1935202037  */

#include<stdio.h>
#define N 4
#define INF 999999

void Table(int D[][N])
{
    printf ("All pair shortest path: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (D[i][j] == INF)
                printf("%4s", "INF");
            else
                printf ("%4d", D[i][j]);
        }
        printf("\n");
    }
}
void shortpath (int graph[][N])
{
    int D[N][N], i, j, k;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            D[i][j] = graph[i][j];
    for (k = 0; k < N; k++)
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (D[i][k] + D[k][j] < D[i][j])
                    D[i][j] = D[i][k] + D[k][j];
            }
        }
    }
    Table(D);
}

int main()
{
    int graph[N][N] ={
        { 0,INF,-2,INF},
        { 4,0, 3,INF},
        { INF,INF,0,2},
        { INF,-1,INF,0}
                      };
    shortpath(graph);
    return 0;
}
