#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef long long ll;

const int MAXN = 1e5 + 5;
vector<int> a[MAXN]; // Adjacency list
int b[MAXN];         // Cat presence (1 if cat, 0 if not)
bool vis[MAXN];      // Visited array

ll bfs(ll s, ll m) {
    queue<pair<ll, ll>> q; // Pair: {current node, consecutive cats count}
    vis[s] = true;
    q.push({s, b[s]}); // Start with root node
    ll ans = 0;

    while (!q.empty()) {
        auto cur = q.front();
        q.pop();

        ll node = cur.first;
        ll cat = cur.second;

        cout<<node<<' '<<cat<<endl;

        if (cat > m){
            cout<<"conti"<<endl;
            continue;
        } // Skip this path if it exceeds the allowed consecutive cats

        bool isLeaf = true;

        for (ll x : a[node]) {
            if (!vis[x]) {
                vis[x] = true;
                isLeaf = false;
                ll newCat = (b[x] == 1 ? cat + 1 : 0);
                q.push({x, newCat});
                cout<<"x = "<<x<<' '<<"cat = "<<newCat<<endl;
            }
        }
        cout<<endl;

        // If it's a leaf and not the root
        if (isLeaf && node != 1) {
            ans++;
        }
        cout<<ans<<endl;
    }

    return ans;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll n, m;
    cin >> n >> m;

    // Read whether vertices have cats
    for (ll i = 1; i <= n; i++) {
        cin >> b[i];
    }

    // Read the edges of the tree
    for (ll i = 0; i < n - 1; i++) {
        ll x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // Start BFS from the root (vertex 1)
    ll result = bfs(1, m);

    cout << result << endl;
    return 0;
}
