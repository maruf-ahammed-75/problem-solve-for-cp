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
long long lcm(long long a, long long b){ 
    return (a /__gcd(a, b)) * b;
}

int32_t main() {
    int n,k;
    
    while(cin>>n>>k){
        vector<int>a(k+1);
        for(int i=1 ; i<=k ; i++){
            cin>>a[i];
        }
        int total = 1<<k;
        map<int,int>m;
        for(int mask = 1 ; mask < total ; mask++){
            int temp = n;
            int x = __builtin_popcount(mask);
            int LCM = 1;
            for(int i=1 ; i<=k ; i++){
                if(1<<(i-1) & mask){
                    // temp/=a[i];
                    LCM = lcm(a[i],LCM);
                }
                if(LCM > n) break;
            }
            m[x]+=n/LCM;
        }
        int ans = 0;
        for(auto i : m){
            // cout<<i.ff<<' '<<i.ss<<endl;
            if(i.ff%2){
                ans += i.ss;
            }
            else ans -= i.ss;
        }
        cout<<n-ans<<endl;
    }

    return 0;
}