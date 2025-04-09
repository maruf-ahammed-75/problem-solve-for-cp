#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<(a*((c+1)/2))-(b*(c/2))<<endl;
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
