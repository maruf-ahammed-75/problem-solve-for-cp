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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    int mx = INT_MIN;
    int mn = INT_MAX;
    map<int,int> m;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        mx = max(mx,a[i]);
        mn = min(mn,a[i]);
        m[a[i]]++;
    }
    int cal = mx-mn-1;
    if(cal>k){
        cout<<"Jerry"<<endl;
        return;
    }
    else if(cal==k && m[mx]>1){
        cout<<"Jerry"<<endl;
        return;
    }

    int sum=0;
    for(auto i:a){
        sum+=(i);
    }
    // cout<<"find"<<endl;
    bool f=0;
    if(sum%2==0){
        cout<<"Jerry"<<endl;
    }
    else cout<<"Tom"<<endl;

    // if(n%2!=0){
    //     if(f==0){
    //         cout<<"Tom"<<endl;
    //     }
    //     else cout<<"Jerry"<<endl;
    // }
    
    // else{
    //     if(f==0){
    //         cout<<"Jerry"<<endl;
    //     }
    //     else cout<<"Tom"<<endl;
    // }
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