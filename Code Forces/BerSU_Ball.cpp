#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n,m;
    cin>>n;
    vector<ll>a(n);
    
    map<ll,ll>boy;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        boy[a[i]]++;
    }
    cin>>m;
    vector<ll>b(m);
    map<ll,ll>girl;
    for(int i=0 ; i<m ; i++){
        cin>>b[i];
        girl[b[i]]++;
    }
    ll ans=0;
    sort(full(a));
    sort(full(b));
    int i=0,j=0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=1){
            ans++;
            i++;
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++;
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
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
