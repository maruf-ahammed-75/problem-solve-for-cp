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

void I_Am_Here() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    int total = 0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<k ; i++){
        total+=a[i];
    }
    int i=1;
    int j=k;
    // cout<<total<<' '<<i<<' '<<j<<endl;

    for(int i=1; i<n ; i++)a[i]+=a[i-1];

    while(j!=n){
        total+=a[j]-a[i-1];
        // if(i==j)total-=a[i];
        i++;
        j++;
        // cout<<total<<' '<<i<<' '<<j<<endl;
    }
    cout<<fixed<<setprecision(10)<<(double)total/(double)(n-k+1)<<endl;
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