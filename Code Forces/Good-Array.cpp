#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.hegin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    int mx =-1;
    int sum = 0;
    for(auto &i : a) {
        cin>>i;
        mx = max(mx,i);  
        sum+=i;
    }
    int ans =0;
    vector<int>b;
    int secondmx = -1;
    for(int i=0 ; i<n ; i++){
        if(a[i]!=mx){
            secondmx = max(secondmx,a[i]);
        }
    }
    if (secondmx == -1){
        secondmx=mx; 
    }
    for(int i=0 ; i<n ; i++){
        if(a[i]!=mx){
            ll x = sum-a[i];
            if(x - mx == mx){
                ans++;
                b.push_back(i+1);
            }
        }
        else{
            ll x = sum-a[i];
            if(x - secondmx == secondmx){
                ans++;
                b.push_back(i+1);
            }
        }  
    }
    cout<<ans<<endl;
    for(int i =0 ; i<ans ; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;


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