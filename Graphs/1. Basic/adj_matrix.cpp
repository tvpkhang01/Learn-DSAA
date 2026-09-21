// This is a file to learn about how to create an adjacency matrix for a graph in C++.

// 1. Undirected Graph as Adjacency Matrix
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createGraph(int v, vector<vector<int>> &edges) {
    vector<vector<int>> mat(v, vector<int>(v, 0));

    // Add edges to the adjacency matrix
    for (const auto &it : edges) {
        int u = it[0];
        int v = it[1];
        mat[u][v] = 1;
        mat[v][u] = 1;
    }
    return mat;
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

    cout << "Adjacency Matrix:" << endl;
    for (const auto& row : graph) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}


// 2. Directed Graph as Adjacency Matrix
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createGraph(int v, vector<vector<int>> &edges) {
    vector<vector<int>> mat(v, vector<int>(v, 0));

    // Add edges to the adjacency matrix
    for (const auto &it : edges) {
        int u = it[0];
        int v = it[1];
        mat[u][v] = 1; // Directed graph
    }
    return mat;
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

    cout << "Adjacency Matrix:" << endl;
    for (const auto& row : graph) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
