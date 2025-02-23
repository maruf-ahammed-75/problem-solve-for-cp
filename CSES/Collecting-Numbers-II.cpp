#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    int n;
    cin>>n;
    int q;
    cin>>q;
    vector<int>a(n+1),b(n+1);
    for(int i=1 ; i<n+1 ; i++){
        cin>>a[i];
        b[a[i]]=i;
    }
    int ans=1;
    for(int i=2  ; i<=n ; i++){
        if(b[i-1]>a[i])ans++;
    }
    // for(int i=1 ; i<= n ; i++)cout<<b[i]<<' ';
    // cout<<endl;
    // cout<<"ans = "<<ans<<endl;
    ll temp = ans;
    for(int i=0 ; i<q ;i++){
        
        int x,y;
        cin>>x>>y;
        x = a[x];
        
        y = a[y];
        // cout<<x<<' '<<y<<endl;
        if(x!=1){
            if(b[x-1]>b[x])temp--;
            // cout<<"1temp = "<<temp<<endl;
        }
        if(x!=n){
            if(b[x]>b[x+1])temp--;
            // cout<<"2temp = "<<temp<<endl;
        }
        if(y!=1 && abs(x-y)>1){
            if(b[y-1]>b[y])temp--;
            // cout<<"3temp = "<<temp<<endl;
        }
        if(y!=n&& abs(x-y)>1){
            if(b[y]>b[y+1])temp--;
            // cout<<"4temp = "<<temp<<endl;
        }
        // cout<<"temp = "<<temp<<endl;
        // cout<<x<<' '<<y<<endl;
        swap(b[x],b[y]);

        if(x!=1){
            if(b[x-1]>b[x])temp++;
        }
        if(x!=n){
            if(b[x]>b[x+1])temp++;
        }
        if(y!=1&& abs(x-y)>1){
            if(b[y-1]>b[y])temp++;
        }
        if(y!=n&& abs(x-y)>1){
            if(b[y]>b[y+1])temp++;
        }
        swap(b[x],b[y]);
        cout<<temp<<endl;

    }


}

int32_t main() {
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
