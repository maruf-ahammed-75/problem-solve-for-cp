#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int cal(int k,int n){
    if(k==n)return 1;
    if(k>n)return 0;

    int ans =0;
    for(int i=1 ; i<=k ; i++){
        ans+=cal(k,n-i);
    }
    return ans;
}
void I_Am_Here() {
    int s,k;
    cin>>s>>k;
    vector<int>a;
    a.push_back(1);
    a.push_back(1);
    int sum=2;
    int temp = k-1;
    while(temp-- && sum <= 1000000000){
        a.push_back(sum);
        sum+=a[a.size()-1];
    }
    // for(int i=0 ; i<a.size() ; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<"\n";
    // cout<<sum<<"\n";
    int j=0;
    while(1000000000*1LL >= sum){
        int x = sum-a[j];
        a.push_back(x);
        sum += x-a[j];
        j++;
        // cout<<x<<' ';
    }
    // cout<<"\n";


    // for(int i = 0 ; i<a.size() ; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<"\n";


    vector<int>v;
    
    a[0]=0;
    for(int i = a.size()-1 ; i>=0 ; i--){
        if(s>=a[i]){
            v.push_back(a[i]);
            s-=a[i];
        }
    }
    reverse(full(v));
    cout<<v.size()<<"\n";
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
   

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}