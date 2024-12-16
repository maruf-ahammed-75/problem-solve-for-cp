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
    for(int i=0 ; i<n ; i++)cin>>a[i];
    vector<ll>b(n+1,0);
    ll j=1;
    for(int i=0 ; i<n ; i++){
        if(b[a[i]]==0){
            b[a[i]]=1;
            cout<<a[i]<<' ';
        }
        else{
            while(b[j]){
                j++;
            }
            cout<<j<<' ';
            b[j]=1;
        }
    }
    cout<<endl;
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
