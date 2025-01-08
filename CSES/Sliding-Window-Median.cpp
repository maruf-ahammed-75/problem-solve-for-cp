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


    // // order set
    // indexed_set s;
    // for(int i=0 ; i<k ;i++){
    //     s.insert({a[i],i});
    // }
    // // for(auto i:s)cout<<i.ff<< ' '<<i.ss<<endl;
    // // cout<<"ans = ";
    // cout<<s.find_by_order((k-1)/2)->first<<' ';
    // // cout<<endl;
    // s.erase({a[0],0});
    // for(int i=1 ; i<n-k+1 ; i++){
    //     // cout<<"index = "<<i-1 <<' '<<k+i-1<<endl;
    //     s.insert({a[k+i-1],k+i-1});
    //     // for(auto i:s)cout<<i.ff<< ' '<<i.ss<<endl;
    //     // cout<<"ans = ";
    //     cout<<s.find_by_order((k-1)/2)->first<<' ';
    //     // cout<<endl;
    //     s.erase({a[i],i});
        
    // }
    // cout<<endl;
    // // for(auto i:s)cout<<i.ff<<' '<<i.ss<<endl;




    //normal Data structer

    if(k==1){
        for(auto i:a)cout<<a[i]<<' ';
        cout<<endl;
        return 0;
    }
    if(k==2){
        for(int i=1 ; i<n ; i++){
            cout<<min(a[i],a[i-1])<<' ';
            cout<<endl;
            return 0;
        }
    }

    vector<pair<ll,ll>>b(k);
    for(int i=0 ; i<k ; i++){
        b[i]={a[i],i};
    }
    sort(full(b));
    set<pair<ll,ll>>sl,sr;
    for(int i=0 ; i<(k+1)/2 ; i++){
        sl.insert({b[i].ff,b[i].ss});
    }
    for(int i=(k+1)/2 ; i<k ;i++){
        sr.insert({b[i].ff,b[i].ss});
    }
    cout<<sl.rbegin()->ff<<' ';
    for(int i=1 ; i<n-k+1 ; i++){
        if(sl.count({a[i-1],i-1})){
            sl.erase({a[i-1],i-1});
        }
        else{
            sr.erase({a[i-1],i-1});
        }

        if(sl.rbegin()->ff < a[i+k-1]){
            sr.insert({a[i+k-1],i+k-1});
        }
        else{
            sl.insert({a[i+k-1],i+k-1});
        }
        while(sl.size()<(k+1)/2){
            pair<ll,ll>z = *sr.begin();
            sl.insert(z);
            sr.erase(z);
        }
        while(sl.size()>(k+1)/2){
            pair<ll,ll>z = *sl.rbegin();
            sl.erase(z);
            sr.insert(z);
        }
        cout<<sl.rbegin()->ff<<' ';
    }


}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
