#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
// #include <ext/pb_ds/assoc_container.hpp>//additional line
// #include <ext/pb_ds/tree_policy.hpp>//additional line 

using namespace std;
// using namespace __gnu_pbds;//additional line
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

void I_Am_Here() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    vector<pair<ll,ll>>b(k);
    for(int i=0 ; i<k ; i++){
        b[i]={a[i],i};
    }
    sort(full(b));
    set<pair<ll,ll>>sl,sr;
    ll suml=0 ; 
    ll sumr=0;
    for(int i=0 ; i<(k+1)/2 ; i++){
        suml+=b[i].ff;
        sl.insert({b[i].ff,b[i].ss});
    }
    
    for(int i=(k+1)/2 ; i<k ;i++){
        sr.insert({b[i].ff,b[i].ss});
        sumr+=b[i].ff;
    }
    cout<<(sl.rbegin()->ff * sl.size())-suml + sumr - (sl.rbegin()->ff * sr.size())<< ' ';
    for(int i=1 ; i<n-k+1 ; i++){
        if(sl.count({a[i-1],i-1})){
            suml-=a[i-1];
            sl.erase({a[i-1],i-1});
        }
        else{
            sumr -= a[i-1];
            sr.erase({a[i-1],i-1});
        }

        if(sl.rbegin()->ff < a[i+k-1]){
            sumr+=a[i+k-1];
            sr.insert({a[i+k-1],i+k-1});
        }
        else{
            suml+=a[k-1+i];
            sl.insert({a[i+k-1],i+k-1});
        }
        while(sl.size()<(k+1)/2){
            pair<ll,ll>z = *sr.begin();
            sl.insert(z);
            suml+=z.first;
            sumr-=z.first;
            sr.erase(z);
        }
        while(sl.size()>(k+1)/2){
            pair<ll,ll>z = *sl.rbegin();
            sl.erase(z);
            sr.insert(z);
            suml-=z.first;
            sumr+=z.first;
        }
        cout<<(sl.rbegin()->ff * sl.size())-suml + sumr - (sl.rbegin()->ff * sr.size())<< ' ';
    }


}

int32_t main() {
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
