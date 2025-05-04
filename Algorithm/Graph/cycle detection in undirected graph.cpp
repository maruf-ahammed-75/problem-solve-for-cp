#include <bits/stdc++.h>
using namespace std;
 
vector < vector < int > > adj;
bool isCyclic;
vector < bool > visited;
vector < int > parent;
void dfs (int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (visited[v] == true) {
            if (v != parent[u]) {
                isCyclic = true;
            }
        }
        else {
            parent[v] = u;
            dfs(v);
        }
    }
 
}
int main () {
    int n, m;
    cin >> n >> m;
    isCyclic = false;
    visited = vector < bool > (n + 1, false);
    parent = vector < int > (n + 1, 0);
    adj = vector < vector < int > >(n + 1, vector < int > ());
    for (int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int node = 1; node <= n; node++) {
        cout << node << "->";
        for (int v : adj[node]) cout << v << " ";
        cout << endl;
    }
    for (int node = 1; node <= n; node++) {
        if (!visited[node]) {
            dfs(node);
        }
    }
    dfs(1);
    if (isCyclic) {
        cout << "Cyclic Undirected Graph" << endl;
    }
    else cout << "Not Cyclic Undirected Graph" << endl;
return 0;
}