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
    int x = INT_MAX;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        x = min(x,a[i]);
    }
    ll ans=0;
    for(int i=0 ; i<n ; i++){
        if(i==0 ){
            if(a[i]<a[i+1])ans++;
        }
        if(i==n-1){
            
            if(a[i]<a[i-1])ans++;
            // cout<<a[i]<<' '<<a[i-1]<<endl;
            // cout<<"sdf"<<ans<<endl;
        }
        if(a[i]!=a[i+1] && i!=0 && i!=n-1){
            if(a[i]<a[i+1] && a[i]<a[i-1])ans++;
        }
        // cout<<a[i]<<' '<<ans<<endl;
    }
    // cout<<ans<<endl;
    int i=0;
    bool f=0;
    while(a[i]==a[i+1] && i!=n-1){
        i++;
        f=1;
    }
    // cout<<i<<endl;
    if(f&&(i==n-1 || (a[i]<a[i+1])))ans++;
    // cout<<ans<<endl;
    f=0;
    i =  n-1;
    while (a[i]==a[i-1] && i!=0)
    {
        f=1;
        i--;    
    }
    if(f && (i==0 || a[i]<a[i-1]))ans++;
    // cout<<ans<<endl;

    f=1;
    for(int i=0 ; i<n ; i++){
        if(a[0]!=a[i]){
            f=0;
        }
    }
    for(int i=1 ; i<n-1 ; i++){
        if(a[i]==a[i+1]){
            int j=i;
            while(a[j]==a[i+1]){
                i++;
            }
            if(a[j]<a[j-1] && a[i]<a[i+1] && i!=n-1){ans++;
                // cout<<i<<' '<<j<<endl;
            }
        }
    }

    if(f)ans=1;
    // cout<<ans<<endl;
    if(ans==1){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    
    
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
