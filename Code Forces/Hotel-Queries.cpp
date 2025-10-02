#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
const long long inf = -1;
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
        return max(v1, v2);
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
    int find_first(int val){
        return find_first(1,0,sz-1,val);
    }
    int find_first(int u,int tl ,int tr , int val){
        if(stree[u]<val) return -1;
        if(tl==tr) return tl;
        
        int mid = (tl+tr)/2;
        int lest_recur = find_first(u*2 , tl , mid , val);
        if( lest_recur != -1 ){
            return lest_recur;
        }
        return find_first(u*2+1 , mid+1 , tr , val);
    }
    void update (int id, int val) {
        update(1, 0, sz - 1, id, val);
    }
    void update (int u, int tl, int tr, int id, int val) {
        if (id < tl || id > tr) return;
        if (tl == tr) {
            stree[u] -= val;
            return;
        }
        if (tl > tr) return;
        int mid = (tl + tr) / 2;
        push(u);
        update(u * 2, tl, mid, id, val);
        update(u * 2 + 1, mid + 1, tr, id, val);
        stree[u] = merge(stree[u * 2], stree[u * 2 + 1]);
    }
    void push (int u) {
        int val = lazy[u];
        lazy[u] = 0;
        stree[u * 2] += val;
        stree[u * 2 + 1] += val;
        lazy[u * 2] += val;
        lazy[u * 2 + 1] += val;
    }
    void printTree() {
        printTree(1, 0, sz - 1);
    }
    void printTree(int u, int tl, int tr) {
        cout << "Node " << u << " -> [" << tl << ", " << tr << "] = " << stree[u] << "\n";
        if (tl == tr) return; // leaf node

        int mid = (tl + tr) / 2;
        printTree(u * 2, tl, mid);          // left child
        printTree(u * 2 + 1, mid + 1, tr);  // right child
    }
};
void I_Am_Here() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SegmentTree st(a);
    // st.printTree();
    for(int i=0 , x ; i<m ; i++){
        cin>>x;
        int id = st.find_first(x);
        if(id==-1){
            cout<<0<<' ';
        }
        else{
            cout<<id+1<<' ';
            st.update(id , x);
        }
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}