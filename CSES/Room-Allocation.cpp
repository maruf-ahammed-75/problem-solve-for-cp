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
    // for(auto i:a)cout<<i.ff<<' '<<i.ss.ff<< ' '<<i.ss.ss<<endl;
    set<ll>s;
    set<pair<ll,ll>>temp;
    for(int i=1 ; i<=n ; i++)s.insert(i);

    vector<ll>b;
    ll ans = INT_MIN;
    ll sum=0;
    for(auto i:a){
        if(i.ss.ff==1){
            sum++;
            ans=max(ans,sum);
            b.push_back(*s.begin());
            temp.insert({i.ss.ss,*s.begin()});
            s.erase(s.begin());
        }
        else{
            sum--;
            auto it = temp.lower_bound({i.ss.ff,INT_MIN});
            s.insert(it->second);
            temp.erase(it);
        }
    }
    cout<<a<<endl;
    for(auto i:b)cout<<i<<' ' ;
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
