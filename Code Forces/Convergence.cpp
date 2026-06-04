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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    sort(full(a));
    int ans = INT_MAX;
    if(n%2==0){
        int mid1 = a[(n/2) -1];
        int mid2 = a[n/2]; 
        int sum=0;
        int sum1=0;
        for(int i=0 ; i<n/2 ; i++){
            if(a[i]!=mid1){
                sum++;
            }
        }
        for(int i=n/2 ; i<n ; i++){
            if(a[i]!=mid1){
                sum1++;
            }
        }
        ans = max(sum, sum1);

        sum=0, sum1=0;

        for(int i=0 ; i<n/2 ; i++){
            if(a[i]!=mid2){
                sum++;
            }
        }
        for(int i=n/2 ; i<n ; i++){
            if(a[i]!=mid2){
                sum1++;
            }
        }
        ans = min(ans, max(sum, sum1));
    }
    else{
        int mid = a[n/2];
        int sum=0;
        int sum2=0;
        for(int i=0 ; i<n/2 ; i++){
            if(a[i]!=mid){
                sum++;
            }
        }
        for(int i=n/2 ; i<n ; i++){
            if(a[i]!=mid){
                sum2++;
            }
        }
        
        ans = min(ans, max(sum, sum2));
    }
    cout<<ans<<"\n";
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}