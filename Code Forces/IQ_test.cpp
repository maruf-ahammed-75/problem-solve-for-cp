#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;
void I_Am_Here() {
    ll even =0,odd=0;
    ll e=0,o=0;
    int n;cin>>n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        if(x&1){
            o++;
            odd=i+1;
        }
        else{
            e++;
            even = i+1;
        }
    }
    if(e<o)cout<<even;
    else cout<<odd;
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
