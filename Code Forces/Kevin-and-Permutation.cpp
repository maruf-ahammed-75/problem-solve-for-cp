#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    ll n ,k;
    cin>>n>>k;
    ll sum = (n*(n+1))/2;
    ll ans=0;
    ll j = n;
    ll x = 1;
    while(ans!=sum){
        for(int i=1 ; i<=k-1 ; i++){
            cout<<j<<' ';
            ans+=j;
            j--;
            if(sum==ans){
                cout<<endl;
                return;
            }
        }
        cout<<x<<' ';
        ans+=x;
        x++;
        if(sum==ans){

            cout<<endl;
            return;
        }
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