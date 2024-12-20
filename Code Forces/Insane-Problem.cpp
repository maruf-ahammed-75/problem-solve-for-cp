#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    ll k,x1,x2,y1,y2;
    cin>>k>>x1>>x2>>y1>>y2;
    ll ans=0;
    for(ll i=0 ; ;i++){
        
        ll cal = pow(k,i)*x1;
        ll cal2 = pow(k,i)*x2;
        // cout<<"cal = "<<cal<<"  cal2 = "<<cal2<<endl;
        if(cal>y2)break;
        if(cal2 >= y2){
            // cout<<cal<<' '<<cal2<<' '<<ans<<endl;
            for(ll j=x1 ; j<=x2 ; j++){
                
                cal = pow(k,i)*j;
                // cout<<"cal = "<<cal<<" ans = ";
                if(cal>=y1 && cal<=y2)ans++;
                else {
                    cout<<ans<<endl;
                    return ;
                }
                
            }
        }
        if(cal>=y1){
            ans+=(x2-x1+1);
        }
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
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
