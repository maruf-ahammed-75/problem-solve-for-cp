#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void I_Am_Here(int T) {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++) {
        cin>>a[i];
    }
    int ans=a[0];
    int in =0;
    int mx=a[0];
    for(int i=1 ; i<n ; i++) {
        if(mx<a[i]){
            // cout<<"IF = ";
            mx=a[i];
            if(ans==-1){
                ans=mx;
                in=i;
            }
        }
        else if(ans>=a[i]){
            // cout<<"ELSE = ";
            in=-1;
            ans=-1;
        }
        // cout<<"ANS = "<<ans<<" mx = "<<mx<<" in = "<<in<<endl;
    }
    
    cout<<"Case "<<T<<": ";
    if(in==-1){
        cout<<"Humanity is doomed!"<<endl;
    }
    else{
        cout<<in+1<<endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here(T);
    }
    return 0;
}