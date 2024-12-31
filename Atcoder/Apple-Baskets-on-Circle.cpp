#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    ll total=0;
    for(auto &i:a){cin>>i;if(i)total++;}
    // cout<<"total = "<<total<<endl;
    while(k>0){
        ll x = k/total;
        if(x==0)x=1;
        // cout<<"x = "<<x<<endl;
        for(int i=0 ; i<n ; i++){
            if(a[i]<=total && a[i]){
                total--;
                k-=a[i];
                a[i]=0;
            }
            else if(a[i]>total){
                k-=x;
                a[i]-=x;
            }
            // cout<<a[i]<<' '<<total<<' '<<k<<endl;
            if(k<=0)break;
        }
    }
    for(auto i:a)cout<<i<<' ';
    cout<<endl;
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
