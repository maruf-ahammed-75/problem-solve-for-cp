#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;


void I_Am_Here() {
    int n;
    int w;
    cin>>n>>w;
    vector<int> wt(n);
    for(int i=0 ; i<n ; i++)cin>>wt[i];
    for(int i=0 ; i<n ; i++){
        if(wt[i]>=(w+1)/2 && wt[i]<=w){
            cout<<1<<endl;
            cout<<i+1<<endl;
            return ;
        }
    }
    int ans = 0;
    vector<int> res;
    for(int i=0 ; i<n ; i++){
        if(ans+wt[i]<=w){
            ans+=wt[i];
            res.push_back(i+1);
        }
    }
    if(ans>=(w+1)/2){
        cout<<res.size()<<endl;
        for(int i=0 ; i<res.size() ; i++)cout<<res[i]<<" ";
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
   

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}