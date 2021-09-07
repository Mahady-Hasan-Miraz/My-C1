// Implementation of Topological sort in C++

 /* Mahady Hasan Miraz
  ID 1935202037 */

#include <iostream>
#include <vector>           //#include<bits/stdc++.h>
using namespace std;

vector < int > graph[100];
bool visited[100];

vector < int > result;          // Adjecentcy list // vector array

void dfs(int node)
{

    visited[node] = 1;
    for (int i = 0; i < graph[node].size(); i++)
    {
        int next = graph[node][i];
        if (visited[next] == 0)             // all children explored
            dfs(next);
    }
    
    result.push_back(node);
}

int main()
{
    int nodes, edges;
    cout << "Enter the number of Vertices : ";  cin >> nodes;
    cout << "Enter the number of Edges : ";  cin >> edges;
    cout << "Enter the Edges :\n";

    for (int i = 0; i < edges; i++)
    {
        int x, y;
        cout << "\t ";
        cin >> x >> y;                  //Directed graph
        graph[x].push_back(y);          //push x in y vector list
    }

    for (int i = 1; i <= nodes; i++)
    {
        if (visited[i] == 0)
            dfs(i);
    }

    reverse(result.begin(), result.end());
    cout << "Topological order: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ' ';
    }
    cout << endl;
    return 0;
}