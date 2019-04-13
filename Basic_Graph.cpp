#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int> adj[], int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void printgraph(vector<int> adj[], int V) {
	for (int v = 0; v < V; ++v) {
		cout << "\nThe adjacency List of " << v << "head";
		for (auto x : adj[v])
			cout << "->" << x;
		printf("\n");
	}
}
int main() {
	int n;
	int V;
	V = 5;
	cout << V;
	vector<int> adj[5];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	printgraph(adj, V);
	cin >> n;
	return 0;
}