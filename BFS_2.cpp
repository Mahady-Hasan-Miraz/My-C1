// BFS algorithm in C++

 /* Mahady Hasan Miraz
  ID 1935202037 */
  
#include <iostream>
#include <list>

using namespace std;

class Graph {
  int n;
  list<int>* adjLists;
  bool* visited;

   public:
  Graph(int vertices);
  void addEdge(int src, int dest);
  void BFS(int origin);
};

Graph::Graph(int vertices) {
  n = vertices;
  adjLists = new list<int>[vertices];
}

void Graph::addEdge(int src, int dest) {      // Add edges to the graph
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}

void Graph::BFS(int origin) {
  visited = new bool[n];      // BFS algorithm
  for (int i = 0; i < n; i++)
    visited[i] = false;

  list<int> queue;

  visited[origin] = true;
  queue.push_back(origin);

  list<int>::iterator i;

  while (!queue.empty()) {
    int visit = queue.front();
    cout << visit << " ";
    queue.pop_front();

    for (i = adjLists[visit].begin(); i != adjLists[visit].end(); ++i) {
      int adjVertex = *i;
      if (!visited[adjVertex]) {
        visited[adjVertex] = true;
        queue.push_back(adjVertex);
      }
    }
  }
}

int main() {
  Graph g(13);
  g.addEdge(1,2);
  g.addEdge(1,4);
  g.addEdge(2,3);
  g.addEdge(3,10);
  g.addEdge(3,9);
  g.addEdge(3,2);
  g.addEdge(2,5);
  g.addEdge(2,7);
  g.addEdge(2,8);
  g.addEdge(5,6);
  g.addEdge(5,7);
  g.addEdge(5,8);
  g.addEdge(7,8);

  g.BFS(1);

  return 0;
}