#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.hegin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n,k;
    cin>>n>>k;
    ll a[n],h[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>h[i];
    }
    int ans = 0;
    int sum = 0, len = 0;
    int j = 0;
    for(int i=0 ; i<n ; i++){
        if(i>0 && h[i-1]%h[i]!=0){
            j=i;
            sum=0;
            len=0;
        }
        sum+=a[i];
        len++;
        while (sum>k && j<=i)
        {
            sum-=a[j];
            j++;
            len--;
        }
        ans=max(ans,len);
        
    }
    cout<<ans<<endl;

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