#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    ll n , k;
    cin>>n>>k;
    k-=3;
    while(k){
        cout<<1<<' ';
        n-=1;
        k--;
    }
    if(n%2){
        cout<<1<<' '<<n/2<<' '<<n/2<<endl;
    }
    else{
        if((n/2)%2==0){
            cout<<n/2<<' '<<n/4<<' '<<n/4<<endl;
        }
        else{
            cout<<2<<' '<<(n-2)/2<<' '<<(n-2)/2<<endl;
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
