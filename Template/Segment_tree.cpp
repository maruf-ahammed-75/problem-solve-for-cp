#include <bits/stdc++.h>
#define int long long
using namespace std;
const long long inf = 1e18;
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
        return min(v1, v2);
    }
    int size() {
        return sz;
    }
    void push(int u) {
        if (lazy[u] != 0) {
            int val = lazy[u];
            lazy[u] = 0;
            stree[u * 2] += val;
            stree[u * 2 + 1] += val;
            lazy[u * 2] += val;
            lazy[u * 2 + 1] += val;
        }
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
    int query(int l, int r) {
        return query(1, 0, sz - 1, l, r);
    }
    void update(int l, int r, int val) {
        update(1, 0, sz - 1, l, r, val);
    }
    void update (int id, int val) {
        update(1, 0, sz - 1, id, val);
    }
    // Definition : return minimum of the range that overlaps with l, r
    int query(int u, int tl, int tr, int l, int r) {
        if (tl > tr) return inf;
        if (l > r) return inf;
        if (tr < l || tl > r) return inf;
        if (tl >= l && tr <= r) return stree[u];
        int mid = (tl + tr) / 2;
        push(u);
        int lc = query(u * 2, tl, mid, l, r);
        int rc = query(u * 2 + 1, mid + 1, tr, l, r);
        return merge(lc, rc);
    }
    
    void update (int u, int tl, int tr, int id, int val) {
        if (id < tl || id > tr) return;
        if (tl == tr) {
            stree[u] = val;
            return;
        }
        if (tl > tr) return;
        int mid = (tl + tr) / 2;
        push(u);
        update(u * 2, tl, mid, id, val);
        update(u * 2 + 1, mid + 1, tr, id, val);
        stree[u] = merge(stree[u * 2], stree[u * 2 + 1]);
    }
    //range update
    void update (int u, int tl, int tr, int l, int r, int val) {
        if (tl > tr) return;
        if (l > r) return;
        if (tr < l || tl > r) return;
        if (l <= tl && tr <= r) {
            stree[u] += val;
            lazy[u] += val;
            return;
        }
        int mid = (tl + tr) / 2;
        push(u);
        update(u * 2, tl, mid, l, r, val);
        update(u * 2 + 1, mid + 1, tr, l, r, val);
        stree[u] = merge(stree[u * 2], stree[u * 2 + 1]);
    }
};

signed main () {
return 0;
}