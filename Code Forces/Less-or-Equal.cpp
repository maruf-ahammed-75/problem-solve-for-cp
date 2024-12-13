#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(auto &i:a)cin>>i;
    sort(full(a));
    if(n==k){
        cout<<a[n-1]<<endl;
    }
    else if(k==0){
        if(a[0]!=1){
            cout<<1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        if(a[k-1]!=a[k]){
            cout<<a[k-1]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
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
