#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

int n;

bool cal(int x){
    int mid = ((n*n)+1)/2;
    int total =0;
    for(int i=1 ; i<=n ; i++){
        total += min(n,x/i);
    }
    // cout<<"total = "<<total<<endl;
    return (total<mid?false:true);
}

void I_Am_Here() {
    
    cin>>n;
    int l = 0; 
    int h = n*n;
    while(l<h){
        int mid = (l+h)/2;
        // cout<<"mid = "<<mid<<endl;
        if(cal(mid)==0){
            l = mid + 1;
        }
        else{
            h = mid;
        }
        // cout<<l<<" "<<h<<endl;
    }
    cout<<l<<endl;
    
}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}