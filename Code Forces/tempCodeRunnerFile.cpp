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
    vector<int> a(n),b(n);
    int sum=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    int cur=INT_MAX;
    int notMove =0 ;
    map<int,int> mp;
    for(int i=n-1 ; i>=0; i--){
        cur = min(cur,a[i]);
        b[i]=cur;
        mp[b[i]]++;
    }
    for(int i=0 ; i<n ; i++){
        notMove+=b[i];
    }
    // cout<<sum<<" "<<notMove<<"\n"; 
    int valid_move = sum-notMove;
    int x = valid_move;
    for(auto i:mp){
        // cout<<i.ff<<" "<<i.ss;
        valid_move = max(x,x+(i.ss-1));
        // cout<<" "<<valid_move<<"\n";
    }
    cout<<valid_move<<"\n";



    
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