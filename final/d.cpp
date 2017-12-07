#include <iostream>
#include <list>
using namespace std;
 
// Graph class represents a undirected graph
// using adjacency list representation
list<int> edges;
int count = 0;

class Graph
{
    int V;    // No. of vertices
 
    // Pointer to an array containing adjacency lists
    list<int> *adj;
 
    // A function used by DFS
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);
    void connectedComponents();
};

// Method to print connected components in an
// undirected graph
void Graph::connectedComponents()
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int v = 0; v < V; v++)
        visited[v] = false;
 
    for (int v=0; v<V; v++)
    {
        if (visited[v] == false)
        {
            // print all reachable vertices
            // from v
            DFSUtil(v, visited);
            edges.push_back(count);
            count = 0;
        }
    }
}
 
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    count++;
    // Recur for all the vertices
    // adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
// method to add an undirected edge
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
 
// Drive program to test above
int main()
{
    
    // Create a graph given in the above diagram
    Graph g(30000); // 5 vertices numbered from 0 to 4
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        g.addEdge(a, b);
    }

    //cout << "Following are connected components \n";
    g.connectedComponents();
    
    list<int>::iterator i;
    int maxV = 0, minV = 30000;
    for(i = edges.begin(); i != edges.end(); ++i)
        if(*i != 1) {
            if(*i > maxV) maxV = *i;
            if(*i < minV) minV = *i;
        }
    cout << minV << " " << maxV;
    return 0;
}














