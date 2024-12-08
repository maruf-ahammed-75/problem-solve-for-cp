#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES/n"
#define N cout<<"NO/n"
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll sum=0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        sum+=a[i];
    }
    if((sum/n)*n == n)Y:
    else N;
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
