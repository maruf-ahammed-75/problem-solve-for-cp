#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
int n,k;
bool find(int m,vector<int>&a){
    int curSum=0;
    int ans =1;
    for(int i=0 ; i<n ; i++){
        curSum+=a[i];
        if(curSum>m){
            ans++;
            curSum=a[i];
        }
    }
    // cout<<ans<<endl;
    return ans<=k;
}
void I_Am_Here(){
    
    cin>>n>>k;
    vector<int>a(n);

    int sum=0;
    int maxval = INT_MIN;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        maxval=max(maxval,a[i]);
        sum+=a[i];
        
    }
    if(k==1){
        cout<<sum<<endl;
        return;
    }
    int l=maxval;
    int r = sum;
    // int i=0;
    while(l<r){
        // i++;
        // cout<<l<<' ' <<r<<endl;
        int m = (l+r)/2;
        if(find(m,a)){
            r = m;
        }
        else{
            l = m+1;
        }
        // if(i==15)break;
    }
    cout<<r<<endl;
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
