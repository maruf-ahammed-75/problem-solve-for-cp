#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    string s;cin>>s;
    ll n = s.size();
    ll z = count(s.begin(),s.end(),'0');
    if(z == 0){
        cout<< 1 << ' ' << n << ' ' << 1 << ' ' << 1 <<endl;
        return;
    }
    ll ct1 = 0, ct0 = 0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1')ct1++;
        else break;
    }
 
    for(ll i=ct1;i<n;i++){
        if(s[i]=='1')break;
        else ct0++;
    }
 
    ll v1 = max(1, ct1 + 1 - ct0);//move backward
    ll v2 = min(ct0, ct1);//min used
 
    cout<< 1 << ' ' << n << ' ' << v1 << ' ' << n - v2 <<endl;

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
