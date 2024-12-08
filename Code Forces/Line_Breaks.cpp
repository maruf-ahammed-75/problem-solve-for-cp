#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    vector<int>a(n+1,0);
    for(int i=1 ; i<=n ; i++){
        string s;cin>>s;
        a[i] =s.size();
    }
    ll sum=0;
    ll ans=0;
    for(int i=1 ; i<=n ; i++){
        sum+=a[i];
        if(sum<m){
            ans++;
        }
        else if(sum==m){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
