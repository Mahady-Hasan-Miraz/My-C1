#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#define init 1
#define wait 2
#define visit 3

int n;
int adj[100][100], state[100];
void creat_graph();
void BF_Trev();
void BFS(int);

int q[MAX],front=-1, rear=-1;
void ins_q(int vertex);
int del_q();
int isEmpty_q();



void BFS( int v)
{
    int i;
    ins_q(v);
    state[v]=wait;
    while(!isEmpty_q())
    {
        v=del_q();
        state[v]=visit;
        printf("Visited %d \n",v);


        for(i=0; i<n; i++)
        {
            if (adj[v][i]==1 && state[i]== init)
            {
                ins_q(i);
                state[i]=wait;
            }
        }
    }

}
void BF_trev()
{
    int v;
    for( v= 0; v<n; v++)
    {
        state[v]=init;
    }
    printf("Enter starting ");
    scanf("%d",&v);
    printf("\n");
    BFS(v);

}
void ins_q(int vertex)
{
    if (rear== MAX-1)
    {
        printf("Overflow\n");
    }
    else
    {
        if(front== -1)
        front = 0;
        rear = rear -1;
        q[rear]= vertex ;
    }
}
int isEmpty_q()
{
    if(front== -1 || front > rear)
    return 1;
    else
    return 0;
}
int del_q()
{
    int del_item;
    if (front == -1 || front > rear)
    {
        printf("Underflow");
        exit(1);
    }
    del_item = q[front];
    front = front +1 ;
    return del_item;
}
void creat_graph()
{
    int count, max_edge, origin, dest;
    printf("enter vertices");
    scanf("%d",&n);

    max_edge = n*(n-1);

    printf("enter matrix");
    for(count = 1; count <= max_edge; count++)
    {
        printf("enter %d edge", count);
        scanf("%d %d",&origin, &dest);
        printf("\n");
        if (origin == -1 || dest == -1)
        break;
        else
        {
            adj[origin][dest]=1;
        }
    }
}
int main()
{
    creat_graph();
    BF_Trev();

    return 0;
}
