#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<int> adj[N];
vector<bool> visited(N, false);
vector<int> dfs_roots;
set<int> nodes; // all unique nodes

void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    // Graph: edges (directed)
    vector<pair<int, int>> edges = {
        {5, 1}, {1, 2},
        {3, 4},
        {9, 6}, {6, 7}, {7, 8},
        {10, 11}, {11, 12}, {12, 10}
    };

    for (auto [u, v] : edges) {
        adj[u].push_back(v);
        nodes.insert(u);
        nodes.insert(v);
    }

    for (int node : nodes) {
        if (!visited[node]) {
            dfs_roots.push_back(node);
            dfs(node);
        }
    }

    // Output roots of DFS trees
    cout << "DFS Tree Roots: ";
    for (int root : dfs_roots) {
        cout << root << " ";
    }
    cout << "\n";

    return 0;
}
