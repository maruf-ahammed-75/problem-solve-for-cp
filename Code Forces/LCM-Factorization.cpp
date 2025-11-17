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
vector<int>pf;
const int mod = 998244353;
void calPf(int n){
    pf = vector<int>(n+1,0);
    for(int i=2 ; i<=n ; i++){
        if(pf[i]==0){
            for(int j=i ; j<=n ; j+=i){
                if(pf[j]==0){
                    pf[j]=i;
                }
            }
        }
    }
}

int nCr(int n, int r){
    if (r > n - r)
        r = n - r;
    int res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - r + i) / i;
        res %= mod;
    }
    return res;
}

void I_Am_Here() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i =0 ; i<n ; i++){
        cin>>a[i];
    }
    int ans=0;
    map<int,int>m;

    for(int i=0 ; i<n ; i++){
        // cout<<a[i]<<" = "<<endl;
        int x = a[i];
        vector<int>prime;
        while(x>1){
            int p = pf[x];
            int count = 0 ;
            while(x%p==0){
                count++;
                x/=p;
            }
            int y = n - m[p]-1;
            // cout<<"y = "<<y<<endl;
            if(y>0 && k-1<=y){
                int total = nCr(y,k-1);
                // cout<<"total = "<<total<<endl;
                total %= mod;

                total*=p;
                total%=mod;

                ans+=total;
                ans%=mod;
            }
            m[p]++;
            // cout<<p<<' '<<ans<<endl;
        }
        // cout<<endl;
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    calPf(1e6);

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}