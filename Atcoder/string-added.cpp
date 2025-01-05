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
    string s;
    cin>>s;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='n' && s[i+1]=='a' && i!=n-1){
            cout<<s[i]<<'y'<<s[i+1];
            i++;
            continue;
        }
        cout<<s[i];
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
