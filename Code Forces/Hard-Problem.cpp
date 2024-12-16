#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    ll m,a,b,c;
    cin>>m>>a>>b>>c;
    ll ans=m*2;
    ans-=min(m,a);
    ans-=min(m,b);
    ans-=c;
    if(ans<=0){
        cout<<m*2<<endl;
    }
    else{
        cout<<m*2-ans<<endl;
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
