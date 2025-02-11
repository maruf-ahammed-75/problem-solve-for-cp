#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    int n;
    cin>>n;
    vector<pair<int,pair<int,int>>>a;
    for(int i=0 ; i<n ; i++){
        int x,y;
        cin>>x>>y;
        a.push_back({x,{1,i}});
        a.push_back({y+1,{-1,i}});
    }
    sort(full(a));
    // for(auto i :a){
    //     cout<<i.ff<<' '<<i.ss.ff<<' '<<i.ss.ss<<endl;
    // }
    // cout<<endl;

    vector<int>ans(n);
    vector<int>b(n);
    set<int>s;
    for(int i=1 ; i<=n ; i++)s.insert(i);
    // cout<<*s.begin()<<endl;
    ll sum=0;
    ll mainAns = INT_MIN;
    for(int i=0 ;i<a.size() ; i++){
        if(a[i].ss.ff==1){
            sum++;
            mainAns = max(sum,mainAns);
            int x = *s.begin();//set top value
            s.erase(s.begin());//set erase top value
            // cout<<"x = "<<x<<endl;
            ans[a[i].ss.ss]=x;//output

            b[a[i].ss.ss]=x;//which index i use;
        }
        else{
            sum--;
            s.insert(b[a[i].ss.ss]);
            // cout<<"insert = "<<b[a[i].ss.ss]<<endl;
        }
    }
    cout<<mainAns<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<b[i]<<' ';
    }
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
