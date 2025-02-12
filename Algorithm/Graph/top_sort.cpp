//graph dricted hobe
//kono cycle thakbe nah


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> kahn_topological_sort(int n, vector<vector<int>>& adj) {
    vector<int> indegree(n, 0);
    for (int u = 0; u < n; u++) {
        for (int v : adj[u]) {
            indegree[v]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topo_order;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        topo_order.push_back(u);

        for (int v : adj[u]) {
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }

    if (topo_order.size() != n) {
        cout << "Cycle detected! Topological sort not possible.\n";
        return {};
    }

    return topo_order;
}

int main() {
    int n, m; // n = number of nodes, m = number of edges
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v; // Edge from u to v (u → v)
        adj[u].push_back(v);
    }

    vector<int> topo = kahn_topological_sort(n, adj);
    for (int node : topo) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}











////gfg

// // Including necessary header file
// #include <bits/stdc++.h>
// using namespace std;

// // Function to return list containing vertices in
// // Topological order.
// vector<int> topologicalSort(vector<vector<int> >& adj,
//                             int V)
// {
//     // Vector to store indegree of each vertex
//     vector<int> indegree(V);
//     for (int i = 0; i < V; i++) {
//         for (auto it : adj[i]) {
//             indegree[it]++;
//         }
//     }

//     // Queue to store vertices with indegree 0
//     queue<int> q;
//     for (int i = 0; i < V; i++) {
//         if (indegree[i] == 0) {
//             q.push(i);
//         }
//     }
//     vector<int> result;
//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();
//         result.push_back(node);

//         // Decrease indegree of adjacent vertices as the
//         // current node is in topological order
//         for (auto it : adj[node]) {
//             indegree[it]--;

//             // If indegree becomes 0, push it to the queue
//             if (indegree[it] == 0)
//                 q.push(it);
//         }
//     }

//     // Check for cycle
//     if (result.size() != V) {
//         cout << "Graph contains cycle!" << endl;
//         return {};
//     }

//     return result;
// }

// int main()
// {

//     // Number of nodes
//     int n = 6;

//     // Edges
//     vector<vector<int> > edges
//         = { { 0, 1 }, { 1, 2 }, { 2, 3 },
//             { 4, 5 }, { 5, 1 }, { 5, 2 } };

//     // Graph represented as an adjacency list
//     vector<vector<int> > adj(n);

//     // Constructing adjacency list
//     for (auto i : edges) {
//         adj[i[0]].push_back(i[1]);
//     }

//     // Performing topological sort
//     cout << "Topological sorting of the graph: ";
//     vector<int> result = topologicalSort(adj, n);

//     // Displaying result
//     for (auto i : result) {
//         cout << i << " ";
//     }

//     return 0;
// }

