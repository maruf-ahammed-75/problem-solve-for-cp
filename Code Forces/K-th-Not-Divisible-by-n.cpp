#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;

//--------using recursion it's right but get tle-------------
// ll Boredom(ll n){
//     if(n==0)return 0;
//     if(n==1)return dp[1];
//     ll a = Boredom(n-1);
//     return max(a,Boredom(n-2) + dp[n]*n);
// }

void I_Am_Here() {
    //-----my math formula-----------
    ll n,k;
    cin>>n>>k;
    ll ans=k;
    while(k/n){
        ans+=k/n;
        k = (k/n) + (k - (k/n)*n);
        // cout<<k/n<<' '<<(k/n)*n<<' '<<k<<endl;
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
