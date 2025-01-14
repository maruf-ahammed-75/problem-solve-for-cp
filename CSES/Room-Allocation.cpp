#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll n;
    cin>>n;
    vector<pair<ll,pair<ll,ll>>>a;
    for(int i=0 ; i<n ; i++){
        ll x,y;
        cin>>x>>y;
        a.push_back({x,{1,i+1}});
        a.push_back({y+1,{-1,i+1}});
    }
    sort(full(a));
    for(auto i:a)cout<<i.ff<<' '<<i.ss.ff<< ' '<<i.ss.ss<<endl;
    ll sum=0;
    ll total = INT_MIN;
    set<ll>s;
    map<ll,ll>m;
    for(int i=1 ; i<=n ; i++){
        s.insert(i);
    }
    vector<ll>b;
    for(auto i:a){
        if(i.ss.ff==1){
            sum++;
            total=max(total,sum);
            // cout<<*s.begin()<<' ';
            b.push_back(*s.begin());
            s.erase(s.begin());
            m[i.ss.ss]=*s.begin();
        }
        else{
            sum--;
            s.insert(i.ss.ss);
            m.erase(i.ss.ss);
        }
    }
    cout<<total<<endl;
    for(auto i:b)cout<<i<<' ';
    cout<<endl;
   
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
