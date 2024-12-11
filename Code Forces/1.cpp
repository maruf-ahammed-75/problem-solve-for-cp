#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];  // Adjacency list
int cats[MAXN];         // Whether a node contains a cat (1 or 0)
bool visited[MAXN];     // Visited array
int n, m, validLeaves = 0;

void dfs(int node, int consecutiveCats) {
    visited[node] = true;

    if (cats[node] == 1) {
        consecutiveCats++;
    } else {
        consecutiveCats = 0;
    }

    if (consecutiveCats > m) {
        return;
    }

    bool isLeaf = true;  // Assume it's a leaf

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            isLeaf = false;  // Not a leaf if it has unvisited children
            dfs(neighbor, consecutiveCats);
        }
    }

    // If it's a leaf and satisfies the condition, count it as valid
    if (isLeaf) {
        validLeaves++;
    }
}

int main() {
    cin >> n >> m;
    
    // Input cat information
    for (int i = 1; i <= n; ++i) {
        cin >> cats[i];
    }

    // Input tree edges
    for (int i = 0; i < n - 1; ++i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // Start DFS from root (vertex 1) with initial consecutive cat count as 0
    dfs(1, 0);

    // Output the number of valid leaves
    cout << validLeaves << endl;

    return 0;
}
