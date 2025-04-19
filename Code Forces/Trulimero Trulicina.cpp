#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void I_Am_Here() {
    int n,m,k;
    cin>>n>>m>>k;
    if(m%k){
        int p = 1;
        for(int j=0 ; j<n ; j++){
            for(int i=0 ; i<m ; i++){
                cout<<p<<' ';
                p++;
                if(p>k)p=1;
            }
            cout<<endl;
        }
    }
    else{
        int p=1;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cout<<(i+j)%k +1 <<' ';
            }
            cout<<endl;
        }
        
    }
}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}