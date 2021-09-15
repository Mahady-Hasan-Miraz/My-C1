#include <iostream>
#include <vector>

using namespace std;

vector<int> adj[100];
bool visted[100];

void dfs(int node)
{
    visted[node]=1;
    cout << node << " ";
    vector<int>::iterator it;
    for (it=adj[node].begin(); it != adj[node].end(); it++)
    {
        if ( visted[*it]==0)            
        {
            dfs(*it);
        }
    }
}
int main ()
{
    int nodes,edges,i;
    cout << "Enter the number of Vertices : "; cin >> nodes;
    cout << "Enter the number of Edges : "; cin >> edges;
    cout << "Enter the Edges :\n";
    for(i=0; i < edges; i++)
    {
        int x,y; cin >> x >> y;           
        adj[x].push_back(y);          
        adj[y].push_back(x);       
    }

    for(i=0; i <= nodes; i++)
    {
        visted[i]=false;            
    }
    cout << "DFS : ";
    dfs(1);

    return 0;

}