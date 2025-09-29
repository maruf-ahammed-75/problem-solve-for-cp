#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
const long long inf = 0;
struct SegmentTree {
    vector < int > stree, lazy;
    int sz;
    vector < int > v;
     SegmentTree (vector < int > &ara) {
        v = ara;
        sz = ara.size();
        stree = vector < int > (4 * sz, inf);
        lazy = vector < int > (4 * sz, 0);
        build(1, 0, sz - 1);
    }
    int merge(int v1, int v2) { 
        return (v1+v2);
    }
    int size() {
        return sz;
    }
    void build (int u, int tl, int tr) {
        if (tl > tr) return;
        if (tl == tr) {
            if (tl < v.size()) stree[u] = v[tl];
            return;
        }
        int mid = (tl + tr) / 2;
        build(u * 2, tl, mid);
        build(u * 2 + 1, mid + 1, tr);
        stree[u] = merge(stree[u * 2], stree[u * 2 + 1]);
    }
    void update(int l, int r, int val) {
        update(1, 0, sz - 1, l, r, val);
    }
    void update (int u, int tl, int tr, int l, int r, int val) {
        if (tl > tr) return;
        if (l > r) return;
        if (tr < l || tl > r) return;
        if (l <= tl && tr <= r) {
            stree[u] += (val * (tr - tl + 1));
            lazy[u] += val;
            return;
        }
        int mid = (tl + tr) / 2;
        push(u, tl, tr);
        update(u * 2, tl, mid, l, r, val);
        update(u * 2 + 1, mid + 1, tr, l, r, val);
        stree[u] = merge(stree[u * 2], stree[u * 2 + 1]);
    }
    void push(int u, int tl, int tr) {
        if(lazy[u] == 0 || tl == tr) return; // leaf node বা কোনো lazy না থাকলে return
    
        int mid = (tl + tr) / 2;
    
        // বাম child এর জন্য
        stree[u * 2] += lazy[u] * (mid - tl + 1);
        lazy[u * 2] += lazy[u];
    
        // ডান child এর জন্য
        stree[u * 2 + 1] += lazy[u] * (tr - mid);
        lazy[u * 2 + 1] += lazy[u];
    
        lazy[u] = 0; // parent node এর lazy clear করা
    }

    int query(int l, int r) {
        return query(1, 0, sz - 1, l, r);
    }
    int query(int u, int tl, int tr, int l, int r) {
        if (tl > tr) return inf;
        if (l > r) return inf;
        if (tr < l || tl > r) return inf;
        if (tl >= l && tr <= r) return stree[u];
        int mid = (tl + tr) / 2;
        push(u, tl, tr);
        int lc = query(u * 2, tl, mid, l, r);
        int rc = query(u * 2 + 1, mid + 1, tr, l, r);
        return merge(lc, rc);
    }
};
void I_Am_Here() {
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SegmentTree stree(a);
    while(q--){
        int qq;
        cin>>qq;
        if(qq==1){
            int l,r,val;
            cin>>l>>r>>val;
            l--;r--;
            stree.update(l,r,val);
        }
        else{
            int id;
            cin>>id;
            id--;
            cout<<stree.query(id,id)<<endl;
 
        }
    }
    
}
 
int32_t main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}