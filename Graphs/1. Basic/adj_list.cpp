// This is a file to learn about how to create an adjacency list for a graph in C++.

// 1. Undirected Graph as Adjacency List
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createGraph(int v, vector<vector<int>> &edges) {
    vector<vector<int>> adj(v);

    // Add edges to the adjacency list
    for (const auto &it : edges) {
        int u = it[0];
        int v = it[1];
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }
    return adj;
}

int main() {
    int v = 5; // Number of vertices

    // List of edges (undirected graph)
    vector<vector<int>> edges = {
        {0, 1},
        {0, 2},
        {1, 2},
        {1, 3},
        {2, 4}
    };

    //build the graph using edges
    vector<vector<int>> graph = createGraph(v, edges);

    cout << "Adjacency List:" << endl;
    for (int i = 0; i < v; ++i) {
        cout << i << ": ";
        for (int val : graph[i]) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

// 2. Directed Graph as Adjacency List
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createGraph(int v, vector<vector<int>> &edges) {
    vector<vector<int>> adj(v);

    // Add edges to the adjacency list
    for (const auto &it : edges) {
        int u = it[0];
        int v = it[1];
        adj[u].push_back(v); // For directed graph
    }
    return adj;
}

int main() {
    int v = 5; // Number of vertices

    // List of edges (directed graph)
    vector<vector<int>> edges = {
        {0, 1},
        {0, 2},
        {1, 2},
        {1, 3},
        {2, 4}
    };

    //build the graph using edges
    vector<vector<int>> graph = createGraph(v, edges);

    cout << "Adjacency List:" << endl;
    for (int i = 0; i < v; ++i) {
        cout << i << ": ";
        for (int val : graph[i]) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
