#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        string s;cin>>s;
        a[i] = s.size();
    }
    int i=0;
    ll sum=0,ans=0,count=0;
    while(sum<=m){
        sum+=a[i];
        i++;
    }
    if(sum<=m){
        cout<<i<<endl;
    }
    else {
        cout<<i-1<<endl;
    }
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
