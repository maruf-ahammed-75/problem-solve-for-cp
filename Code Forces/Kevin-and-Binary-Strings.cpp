#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
long long binaryToDecimal(const string& binaryString) {
    long long decimalValue = 0;
    for (char bit : binaryString) {
        decimalValue = decimalValue * 2 + (bit - '0');
    }
    return decimalValue;
}
void I_Am_Here() {
    string s;
    cin>>s;
    ll n = s.size();
    ll total=binaryToDecimal(s);
    ll x=1;
    ll mx = INT_MIN;
    ll l=0,r=0;
    for(int i=n-1 ; i>=0 ; i--){
        x=1;
        string c  = "";
        for(int j=i ; j>=0 ; j--){
            c=s[j]+c;
            ll ans = total^(binaryToDecimal(c));
            // cout<<j<<" = "<<cal<<' '<<ans<<endl;
            if(mx<ans){
                // Y;
                mx = ans;
                l=i;
                r=j;
            }
        }
    }
    cout<<1<<' '<<n<<' '<<r+1<<' '<<l+1<<endl;}

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
