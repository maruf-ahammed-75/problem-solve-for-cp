#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n;

void I_Am_Here() {
    cin>>n;
    int l=1;
    int h = 1e9;
    int ans = 0;
    while(l<=h){
        int mid = (l+h)/2;
        int x = (mid*(mid+1))/2;
        if(x<=n){
            ans = mid;
            l = mid+1;
        }
        else{
            h = mid-1;
        }
        // cout<<ans<<' '<<l<<' '<<h<<' '<<mid<<' '<<x<<endl;
    }
    if(ans*(ans+1)/2 == n){
        cout<<ans<<endl;
    }
    else{
        cout<<"NAI"<<endl;
    }
}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}