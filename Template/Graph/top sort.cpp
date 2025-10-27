vector<int> adj[100005];
vector<int> ans;
vector<int> vis;

void dfs(int u) {
    vis[u] = 1;
    for(int v : adj[u]) {
        if(!vis[v]) dfs(v);
    }
    ans.push_back(u);
}

vector<int> topSort(int n) {
    vis.assign(n + 1, 0);
    ans.clear();

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) dfs(i);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
