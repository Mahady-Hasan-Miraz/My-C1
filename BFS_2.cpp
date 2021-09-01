// BFS algorithm in C++

#include <iostream>
#include <list>

using namespace std;

class Graph {
  int numVertices;
  list<int>* adjLists;
  bool* visited;

   public:
  Graph(int vertices);
  void addEdge(int src, int dest);
  void BFS(int startVertex);
};


Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
}


void Graph::addEdge(int src, int dest) {      // Add edges to the graph
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}

void Graph::BFS(int startVertex) {
  visited = new bool[numVertices];      // BFS algorithm
  for (int i = 0; i < numVertices; i++)
    visited[i] = false;

  list<int> queue;

  visited[startVertex] = true;
  queue.push_back(startVertex);

  list<int>::iterator i;

  while (!queue.empty()) {
    int currVertex = queue.front();
    cout << currVertex << " ";
    queue.pop_front();

    for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i) {
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