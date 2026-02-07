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
    int n,m;
    cin>>n>>m;
    vector<int>a,b;
    for(int i=0,x ; i<n ; i++){
        cin>>x;
        a.push_back(x);
    }
    b.push_back(0);
    for(int i=0,x ; i<m ; i++){
        cin>>x;
        b.push_back(x);
    }
    sort(full(a),greater<int>());

    int i=1;
    int ans =0 ; 
    for(int j=0 ; j<n ; j++){
        if(i<=m && b[a[j]]>b[i]){
            ans+=b[i];
            i++;
        }
        else{
            ans+=b[a[j]];
        }
    }
    cout<<ans<<"\n"; 
    
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
