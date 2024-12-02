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
    // ll ans=k;
    // while(k/n){
    //     ans+=k/n;
    //     k = (k/n) + (k - (k/n)*n);
    //     // cout<<k/n<<' '<<(k/n)*n<<' '<<k<<endl;
    // }
    // cout<<ans<<endl;

    //---------chat gpt formula---------
    // cout<<k+(k-1)/(n-1)<<endl;



    //------------using binary search---------


    ll left = 1, right = 1e18;
    ll ans = 0; 
    while (left <= right) {
        ll mid = (left + right) / 2;
        ll non_div = mid - (mid / n); 
        if(non_div==k){
            ans = mid;
        }
        if (non_div >= k) {
             
            right = mid - 1; 
        } else {
            left = mid + 1; 
        }
    }
    cout << ans << endl;
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
