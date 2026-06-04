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
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    bool flag = 1;
    vector<int>ans;
    for(int i=n-1 ; i>=0 ; i--){
        if(flag && a[i]>0){
            ans.push_back(i+1);
            flag=0;
        }
        if(!flag && a[i]<0){
            ans.push_back(i+1);
            flag=1;
        }
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<"\n";
    
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