#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<ll>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        bool flag=1;
        for(int j=0 ; j<n ; j++){
            if(i!=j&&abs(a[i]-a[j])%k == 0){
                flag=0;
                break;
            }
        }
        if(flag){
            Y;
            cout<<i+1<<endl;
            return;
        }
    }
    N;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
/////game