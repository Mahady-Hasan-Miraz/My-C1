#include<bits/stdc++.h>
using namespace std;

vector <int> graph[100];
bool visited[100];

void dfs(int source){
    visited[source] = 1;
    for (int i = 0; i < graph[source].size(); i++){
        int next = graph[source][i];
        if (visited[next] == 0)
            dfs(next);
    }
}

int main()
{
    int nodes, edges;
cout << "Enter the number of Vertices : ";  cin >> nodes;
cout << "Enter the number of Edges : ";  cin >> edges;
cout << "Enter the Edges :\n";

    for (int i = 0; i < edges; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(1);

    for (int i = 0; i < nodes; i++){
        if (visited[i] == 1){
            cout << "Node " << i << " is visited." << endl;

        }
        else{
            cout << "Node " << i << " is not visited" << endl;
        }
    }

    return 0;
}