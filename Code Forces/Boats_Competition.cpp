#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    sort(full(a));
    ll mx = 0;
    for(int i=1 ; i<=100 ; i++){
        int j=0,k=n-1;
        ll sum=a[0]+a[n-1];
        // cout<<"i = "<<i<<' '<<sum<<endl;
        ll ans=0;
        while(j<k){
            if(sum==i){
                ans++;
                j++;
                k--;
                if(j<k)sum = a[j]+a[k];
                // cout<<"if1 = "<<sum<<endl;
            }
            if(sum<i){
                sum-=a[j];
                j++;
                if(j<k)sum+=a[j];
                // cout<<"if2 = "<<sum<<endl;
            }
            if(sum>i){
                sum-=a[k];
                k--;
                if(j<k)sum+=a[k];
                // cout<<"if3 = "<<sum<<endl;
            }
        }
        mx=max(ans,mx);
    }
    cout<<mx<<endl;
    
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
