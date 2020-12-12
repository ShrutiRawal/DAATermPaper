#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void displayList(list<int> adj_list[], int v) {   //utility function for displaying adjacency list
  for(int i = 0; i<v; i++) {
     cout << i << "--->";
     list<int> :: iterator it;
     for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
        cout << *it << " ";
     }
     cout << endl;
   }
}
void makeEdge(list<int> adj_list[], int u, int v) {   //add v into the list u, and u into list v
   adj_list[u].push_back(v);
   adj_list[v].push_back(u);
}
main(int argc, char* argv[]) {
   int v = 5;      //to specify the number of vertices
   list<int> adj[v];  // adjecency list to store the required representation
    makeEdge(adj,0,1);   //adding required edges to graph
	makeEdge(adj,0,2);
	makeEdge(adj,2,4);
	makeEdge(adj,1,3);
	makeEdge(adj,2,3);
   displayList(adj, v);   //displaying the obtained adjacency list
}
