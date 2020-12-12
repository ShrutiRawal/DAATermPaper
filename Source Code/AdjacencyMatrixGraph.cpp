#include <iostream>
using namespace std;

class AdjMatrixGraph {
   private:
  int** adj;     //2-D array to store adjacency matrix for the graph
  int v;         //number of vertices

   public:
  AdjMatrixGraph(int v) {            //public constructor that
    this->v = v;                     //initialises the number
    adj = new int*[v];               //of vertices in the graph and
    for (int i = 0; i < v; i++) {    //initialises the adjacency matrix
      adj[i] = new int[v];
      for (int j = 0; j < v; j++){
        adj[i][j] = 0;
      }
    }
  }

  void addEdge(int i, int j) {      //utility function to add edges in graph
    adj[i][j] = 1;
    adj[j][i]=1;                    //to implement directional property, remove this line
  }

  void printMatrix() {              //utility function that prints the graph
    for (int i = 0; i < v; i++) {
      cout << i << " : ";
      for (int j = 0; j < v; j++)
        cout << adj[i][j] << " ";
      cout << "\n";
    }
  }

};

int main() {
  AdjMatrixGraph graph(5);            //local object for creating graph

  graph.addEdge(0, 1);                //adding required edges in the graph
  graph.addEdge(0, 2);
  graph.addEdge(2, 4);
  graph.addEdge(1, 3);
  graph.addEdge(2, 3);

  graph.printMatrix();                //print the adjacency matrix for the graph
}
