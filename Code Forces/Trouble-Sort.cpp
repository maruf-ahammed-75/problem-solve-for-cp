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
    vector<ll>a0,a1;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        if(x){
            a1.push_back(a[i]);
        }
        else{
            a0.push_back(a[i]);
        }
    }
    if(is_sorted(full(a)) || (!a1.empty() && !a0.empty())){
        Y;
    }
    else{
        N;
    }
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
