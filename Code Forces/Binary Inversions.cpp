#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    int one=0,zero=0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        if(a[i])one++;
        else zero++;
    }
    vector<int>cal(n,0);
    int ans=0;
    for(int i=n-1 ; i>=0 ; i--){
        if(a[i]==0){
            ans++;
        }
        cal[i]=ans;
    }
    ll val =0;
    for(int i=0 ; i<n ; i++){
        if(a[i]){
            val+=cal[i];
        }
    }
    int temp = val;
    // cout<<val;
    int t0=zero;
    int t1 =0;
     ans = val;
    for(int i=0 ; i<n ; i++){
        if(a[i]==0){
            ans = ans+zero-1;
            break;
        }
        else{
            ans--;
            t1++;
        }
    }
    val = max(val,ans);
    ans = temp;
    // cout<<ans<<endl;
    for(int i=n-1 ; i>=0 ; i--){
        if(a[i]==1){
            ans+=one-1;
            break;
        }
        else{
            ans--;
        }
    }
    // cout<<ans<<endl;
    cout<<max(val,ans)<<endl;

    
    
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
