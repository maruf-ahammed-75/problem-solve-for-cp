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
    int k;
    cin>>k;
    vector<int> a(n),b(n),c(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>b[i];   
    }
    ll sum=0;
    for(int i=0 ; i<n ; i++){
        c[i] = min(a[i],b[i]);
        sum+=max(a[i],b[i]);
    }
    sort(c.begin(),c.end(),greater<int>());
    for(int i=0 ; i<k-1 ; i++){
        sum+=c[i];
    }
    cout<<sum+1<<endl;
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