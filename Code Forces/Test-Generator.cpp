#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void I_Am_Here() {
    int s,m;
    cin>>s>>m;
    
    bitset<65> b(m);
    cout<<b<<endl;

    vector<int>pow;
    int x = 1;
    for(int i=0 ; i<65 ; i++){
        pow.push_back(x);
        x*=2;
    }

    for(int i=0 ; i<10 ; i++){
        cout<<pow[i]<<" ";
    }
    cout<<endl;
    
    int temp = s;

    int ans = 0 ;
    for(int i=64 ; i>=0 ; i--){
        if(b[i]){
            cout<<temp/pow[i]<<" ";
            ans = max(ans,temp/pow[i]);
            temp %= pow[i];
        }
    }
    cout<<endl;
    cout<<ans<<endl;
    if(temp){
        cout<<-1<<endl;
    }
    else{

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
    // cin >> t;   
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}