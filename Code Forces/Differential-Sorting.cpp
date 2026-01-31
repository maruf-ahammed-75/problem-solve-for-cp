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
    cin>>n;
    vector<int> a(n);
    vector<pair<int,int>>mx(n);
    vector<pair<int,int>>mi(n);

    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    mx[n-1] = {a[n-1], n};
    mi[n-1] = {a[n-1],n};

    for(int i=n-2 ; i>=0 ; i--){
        if(a[i]<=mi[i+1].first){
            mi[i] = {a[i],i+1};
        }
        else{
            mi[i]=mi[i+1];
        }

        if(a[i]>mx[i+1].ff){
            mx[i] = {a[i] , i+1};
        }
        else{
            mx[i] = mx[i+1];
        }
    }
    // for(int i=0 ; i<n-1 ; i++){
    //     cout<<mx[i].first <<' '<<mx[i].second<<endl;
    // }
    // cout<<endl;

    // for(auto i : mi){
    //     cout<<i.ff<<' '<<i.ss<<endl;
    // }

    vector<int>ans;
    for(int i=0 ; i<n-2 ; i++){
        int x = mi[i+1].ff - mx[i+1].ff;
        if(x<a[i]){
            ans.push_back(i+1);
            ans.push_back(mi[i+1].ss);
            ans.push_back(mx[i+1].ss);
        }
        a[i] = min(a[i],x);
        if(a[i]>a[n-1]||a[i]>a[n-2] || a[n-2]>a[n-1]){
            cout<<-1<<endl;
            return;
        }
        
    }
    if(ans.size()==0){
        cout<<0<<endl;
    }
    else{
        cout<<ans.size()/3<<endl;
        for(int i=0 ; i<ans.size() ; i+=3){
            cout<<ans[i]<<' '<<ans[i+1]<<' '<<ans[i+2]<<endl;
        }
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
