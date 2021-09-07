// Implementation of DFS algorithm in C++

 /* Mahady Hasan Miraz
  ID 1935202037 */
  
#include <iostream>
#include <vector>

using namespace std;

bool visted[100];
vector<int> adj[100];                    // Adjecentcy list // vector array

void dfs(int node)
{
    visted[node]=1;
    cout << node << " ";

    vector<int>::iterator it;            //to point at the memory addresses of STL containers
    for (it=adj[node].begin(); it != adj[node].end(); it++)
    {
        if ( visted[*it]==0)            // can also write--> if ( visted[*it]);      else{   dfs(*it);   }
        {
            dfs(*it);
        }
    }
}

int main ()
{
    int nodes,edges,i;
    cout << "Enter the number of Vertices : ";
    cin >> nodes;
    cout << "Enter the number of Edges : ";
    cin >> edges;
    cout << "Enter the Edges :\n";

   
    for(i=0; i < edges; i++)
    {
        int x,y;                          //to get edges
        cout << "\t ";
        cin >> x >> y;                //Undirected graph
        adj[x].push_back(y);          //push y in x vector list
        adj[y].push_back(x);          //push x in y vector list
    }

    for(i=0; i <= nodes; i++)
    {
        visted[i]=false;              //let all nodes are unvisited
    }

    cout << "DFS order: ";
    dfs(1);

    return 0;

}

// ** Algorithm ** //
// Step 1: Insert the root node or starting node of a tree or a graph in the stack.
// Step 2: Pop the top item from the stack and add it to the visited list.
// Step 3: Find all the adjacent nodes of the node marked visited and add the ones that are not yet visited, to the stack.
// Step 4: Repeat steps 2 and 3 until the stack is empty.