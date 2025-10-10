#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<int> divisor(1000001, 0);
void I_Am_Here() {
    int a,b;
    cin>>a>>b;
    cout<<divisor[__gcd(a,b)]<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    

    for(int i=1 ; i<=1000000 ; i++){
        for(int j=i ; j<=1000000 ; j+=i){
            divisor[j]++;
        }
    }

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}