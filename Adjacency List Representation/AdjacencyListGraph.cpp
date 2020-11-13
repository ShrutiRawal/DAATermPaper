#include<bits/stdc++.h>
using namespace std;

void makeEdge(vector<int> adj[], int start, int destination)  //utility function to add edges in the graph
{
	adj[start].push_back(destination);                        //start denotes the starting node and
	adj[destination].push_back(start);                        //destination denotes ending node
}

void printGraph(vector<int> adj[], int v)                     //utility function that prints the
{                                                             //adjacency list structure of graph
	for (int i = 0; i < v; ++i)
	{
		cout << "\n Adjacency list of vertex "<< v;
		for (int x : adj[i])
		cout << "-> " << x;
		printf("\n");
	}
}

int main()
{
	int v = 5;             //number of vertices
	vector<int> adj[v];    //vector to store lists

	makeEdge(adj,0,1);   //adding required edges to graph
	makeEdge(adj,0,2);
	makeEdge(adj,2,4);
	makeEdge(adj,1,3);
	makeEdge(adj,2,3);

	printGraph(adj,v);    //printing the list
	return 0;
}
