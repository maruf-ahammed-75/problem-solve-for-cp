#include <bits/stdc++.h>
#define ll long long
#define int long long unsigned int 
#define intu long long unsigned int 
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
 
struct segmentTree{
    vector<int>st;
    vector<int>v;
    int sz;
    int inf = 0;
    
    segmentTree(vector<int>&arr){
        v = arr;
        sz = v.size();
        st = vector<int>(sz*4, inf);
        build(1,0,sz-1);//(u,star,end)
    }
 
    int marge(int x ,int y){
        return (x+y);
    }
 
    int size(){
        return sz;
    }
 
    void build(int u,int tl,int tr){
        if(tl>tr)return;
        if(tl == tr){
            if(tl<v.size()){
                st[u]=v[tl];
            }
            return;
        }
 
        int mid = (tr+tl)/2;
        build(u*2,tl,mid);
        build(u*2+1,mid+1,tr);
        st[u]=marge(st[u*2],st[u*2 +1]);
    }
 
 
    void range_update(int l, int r, int val) {
        range_update(1, 0, sz - 1, l, r, val);
    }
    void range_update(int u, int tl, int tr, int l, int r, int val) {
        if (tl > tr || l > r || tr < l || tl > r) return; // no overlap
        if (tl == tr) {
            st[u] += val;  
            return;
        }
        int mid = (tl + tr) / 2;
        range_update(u * 2, tl, mid, l, r, val);
        range_update(u * 2 + 1, mid + 1, tr, l, r, val);
        st[u] = marge(st[u * 2], st[u * 2 + 1]);  
    }
 
 
 
 
 
    void update(int id, int val){//only one index;
        update(1,0,sz-1,id,val);
    }
    void update(int u, int tl , int tr , int id , int val){
        if(id<tl || id>tr)return;
        if(tl == tr){
            st[u]=val;
            return;
        }
        if(tl>tr)return;
 
        int mid = (tr+tl)/2;
        if(tl<=id && id<=mid)update(u*2 ,tl , mid , id , val);
        else if(mid+1 <= id && id<=tr )update(u*2+1 , mid+1 , tr , id , val);
        st[u] = marge(st[u * 2], st[u * 2 + 1]);
    }
 
    
    int operation(int l,int r){//range value add or xor or anything
        return operation(1,0,sz-1,l,r);
    }
    int operation(int u, int tl , int tr , int l, int r){
        if(tl>tr)return inf;
        if(l>r)return inf;
        if(tr<l || tl>r) return inf;
        if (tl >= l && tr <= r) return st[u];
 
        int mid = (tl + tr)/2;
        int lc = operation(u*2 , tl , mid ,l , r); //left child
        int rc = operation(u*2+1 , mid +1 , tr, l, r); //right child
        return marge(lc,rc);
    }
    
 
};
 
void I_Am_Here() {
    int n;
    cin>>n;
    int q;
    cin>>q;
 
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
 
    segmentTree seg(a);
    // for (int i = 1; i < seg.st.size(); i++) {
    //     cout << "st[" << i << "] = " << seg.st[i] << '\n';
    // }
    // cout<<endl;
    while(q--){
        int k;
        cin>>k;
        if(k==1){
            int id1,id2;
            int val;
            cin>>id1>>id2>>val;
            // cout<<val<<endl;
            seg.range_update(id1-1,id2-1,val);
            // for (int i = 1; i < seg.st.size(); i++) {
            //     cout << "st[" << i << "] = " << seg.st[i] << '\n';
            // }
        }
        else{
            int x;
            cin>>x;
            x--;
            cout<<seg.operation(x,x)<<endl;
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