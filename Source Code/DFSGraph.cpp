#include <bits/stdc++.h>
using namespace std;
class Graph {
  int v;           //to store number of vertices in graph
  list<int> *adj;  //to store adjaceny list for the graph
  bool *done;      //boolean array to mark visited nodes

  public:
  Graph(int numv){               //public constructor that
     v = numv;                   //initialises global
     adj = new list<int>[numv];  //variables according to number
     done = new bool[numv];      //of vertices in graph
  }
  void addEdge(int strt, int des){  //utility function to add
     adj[strt].push_front(des);     //edges in graph
  }
  void traverse(int strt){           //utility function to call dfs subroutine
     done[strt] = true;              //mark start node as visited
     list<int> vertexList = adj[strt]; //list to store adjacent vertices of start node
     cout << strt << " ";
     list<int>::iterator i;
     for(i = vertexList.begin(); i != vertexList.end(); ++i)  //loop through all neighbours
         if(!done[*i])                         //if neighbour is not visited
             traverse(*i);                     //call dfs subroutine for the neighbour
  }
};
int main() {
  Graph graph(5);             //intialise graph having five vertices.
  graph.addEdge(0, 1);        //add all required edges as per the
  graph.addEdge(0, 2);        //example shown above
  graph.addEdge(2, 4);
  graph.addEdge(2, 3);

  graph.traverse(0);      //call DFS subroutine and pass vertex number 0 as source vertex.
  return 0;
}
