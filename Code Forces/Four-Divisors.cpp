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
    vector<int> a;
    int sum=0;
    for(int i=0 ; i<n ; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    int ans=0;
    for(int i=0 ; i<n ; i++){
        int count=0;
        int sum=0;
        // cout<<"a[i] : "<<a[i]<<"  ";
        for(int j=1 ; j*j<=a[i] ; j++){
            if(a[i]%j==0){
                if(j*j==a[i]) {
                    count++;
                    sum+=j;
                }
                else {
                    count+=2;
                    sum+=j;
                    sum+=a[i]/j;
                }
            }
        }
        // cout<<"count : "<<count<<endl;
        if(count==4){
            ans+=sum;
        }
    }
    cout<<sum<<endl;
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